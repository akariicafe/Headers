@class NSManagedObjectID, NSString, STTimeAllowancesViewModel, STGroupFetchedResultsController, NSNumber, STAskForTimeClient;
@protocol STPersistenceControllerProtocol;

@interface STTimeAllowancesViewModelCoordinator : NSObject <STGroupFetchedResultsControllerDelegate, STTimeAllowancesViewModelCoordinator>

@property (copy, nonatomic) NSString *organizationIdentifier;
@property (copy, nonatomic) NSNumber *userDSID;
@property (readonly, nonatomic) id<STPersistenceControllerProtocol> persistenceController;
@property (readonly, nonatomic) STAskForTimeClient *askForTimeClient;
@property (readonly, nonatomic) STGroupFetchedResultsController *groupFetchResultsController;
@property (copy, nonatomic) NSManagedObjectID *userObjectID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) STTimeAllowancesViewModel *viewModel;
@property (readonly, nonatomic) BOOL isDowntimeActive;
@property (readonly, nonatomic) long long currentDowntimeState;
@property (readonly, nonatomic) double timeToNextExpectedStateChange;

+ (BOOL)saveAllowance:(id)a0 forUser:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (void)groupResultsController:(id)a0 didChangeResultsForRequest:(id)a1 objectID:(id)a2 changeType:(unsigned long long)a3;
- (void)saveAllAllowancesEnabled:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)deleteAllowance:(id)a0 completionHandler:(id /* block */)a1;
- (void)saveAllowance:(id)a0 completionHandler:(id /* block */)a1;
- (void)saveDeviceBedtime:(id)a0 completionHandler:(id /* block */)a1;
- (void)saveAlwaysAllowList:(id)a0 completionHandler:(id /* block */)a1;
- (void)respondToAskForTime:(id)a0 withApproval:(BOOL)a1 timeApproved:(id)a2 completionHandler:(id /* block */)a3;
- (void)_registerForPersistentStoreNotifications;
- (void)loadViewModelWithCompletionHandler:(id /* block */)a0;
- (void)toggleDowntimeWithCompletionHandler:(id /* block */)a0;
- (id)initWithPersistenceController:(id)a0 organizationIdentifier:(id)a1 userDSID:(id)a2;
- (void)saveDefaultAlwaysAllowListWithCompletionHandler:(id /* block */)a0;
- (id)_iCloudAccountPredicate;

@end
