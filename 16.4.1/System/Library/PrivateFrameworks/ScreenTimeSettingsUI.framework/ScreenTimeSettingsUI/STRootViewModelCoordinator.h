@class STRootViewModel, NSMutableDictionary, STAdminPersistenceController, NSString, STGroupFetchedResultsController, NSNumber, NSObject;
@protocol STContentPrivacyViewModelCoordinator, STCommunicationSafetyViewModelCoordinator, STUsageDetailsViewModelCoordinator, STTimeAllowancesViewModelCoordinator;

@interface STRootViewModelCoordinator : NSObject <STGroupFetchedResultsControllerDelegate, STRootViewModelCoordinator>

@property (readonly) STAdminPersistenceController *persistenceController;
@property (retain, nonatomic) STRootViewModel *viewModel;
@property (retain, nonatomic) STGroupFetchedResultsController *fetchedResultsController;
@property (retain, nonatomic) NSMutableDictionary *coordinatorsByChildDSID;
@property (copy, nonatomic) NSNumber *userDSID;
@property (readonly, copy) NSString *deviceIdentifier;
@property (readonly, copy) NSNumber *usageReportType;
@property (readonly) long long usageContext;
@property (copy, nonatomic) NSString *userName;
@property (nonatomic) BOOL isLocalUser;
@property (nonatomic) BOOL hasAlreadyEnteredPINForSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSObject<STContentPrivacyViewModelCoordinator> *contentPrivacyCoordinator;
@property (readonly) NSObject<STUsageDetailsViewModelCoordinator> *usageDetailsCoordinator;
@property (readonly) NSObject<STTimeAllowancesViewModelCoordinator> *timeAllowancesCoordinator;
@property (readonly) NSObject<STCommunicationSafetyViewModelCoordinator> *communicationSafetyCoordinator;
@property (nonatomic) BOOL hasShownMiniBuddy;
@property (readonly, nonatomic, getter=isPasscodeEnabled) BOOL passcodeEnabled;

+ (id)keyPathsForValuesAffectingPasscodeEnabled;
+ (id)keyPathsForValuesAffectingUsageDetailsCoordinator;
+ (id)loadViewModelFromManagedObjectContext:(id)a0 isLocalUser:(BOOL)a1 userDSID:(id)a2 error:(id *)a3;

- (BOOL)validatePIN:(id)a0;
- (void)setScreenTimeSyncingEnabled:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)setScreenTimeEnabled:(BOOL)a0 completionHandler:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;
- (void)groupResultsControllerDidChangeContents:(id)a0;
- (id)initWithUserDSID:(id)a0 deviceIdentifier:(id)a1 usageReportType:(id)a2 usageContext:(long long)a3;
- (void)_passcodeSessionHasEnded:(id)a0;
- (void)_registerForPersistentStoreNotifications;
- (void)_registerForWillResignActiveNotifications;
- (void)_reportCoreAnalyticsEventScreenTimeEnabled:(BOOL)a0 user:(id)a1 userType:(unsigned long long)a2 userIsRemote:(BOOL)a3;
- (void)_setPIN:(id)a0 recoveryAltDSID:(id)a1 shouldSetRecoveryAppleID:(BOOL)a2 completionHandler:(id /* block */)a3;
- (id)coordinatorForChild:(id)a0 deviceIdentifier:(id)a1 usageReportType:(id)a2;
- (void)enableScreenTimeWithPIN:(id)a0 recoveryAltDSID:(id)a1 completionHandler:(id /* block */)a2;
- (void)loadViewModelRightNow;
- (void)loadViewModelWithCompletionHandler:(id /* block */)a0;
- (id)organizationIdentifierForManagement;
- (id)organizationIdentifierForUsage;
- (void)saveViewModel:(id)a0;
- (void)setPIN:(id)a0 completionHandler:(id /* block */)a1;
- (void)setPIN:(id)a0 recoveryAltDSID:(id)a1 completionHandler:(id /* block */)a2;
- (void)setShareWebUsageEnabled:(BOOL)a0 completionHandler:(id /* block */)a1;

@end
