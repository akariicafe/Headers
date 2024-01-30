@class NSFetchedResultsController, STCoreUser, NSArray, NSString, NSManagedObjectContext;

@interface STCoreUsersController : NSObject <NSFetchedResultsControllerDelegate>

@property (readonly) NSManagedObjectContext *managedObjectContext;
@property (retain, nonatomic) NSFetchedResultsController *localUserController;
@property (retain, nonatomic) NSFetchedResultsController *childUserController;
@property (retain) NSFetchedResultsController *settingsController;
@property (retain, nonatomic) STCoreUser *selectedUser;
@property (copy, nonatomic) NSArray *users;
@property (readonly) STCoreUser *localUser;
@property (nonatomic) unsigned long long selectedIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingLocalUser;
+ (id)keyPathsForValuesAffectingUsers;
+ (id)keyPathsForValuesAffectingSelectedUser;

- (void)controllerDidChangeContent:(id)a0;
- (id)initWithManagedObjectContext:(id)a0;
- (void).cxx_destruct;
- (void)refresh;
- (void)controllerWillChangeContent:(id)a0;
- (BOOL)_updateSelectedIndexForDSID:(id)a0 isManaged:(BOOL)a1;
- (BOOL)updateSelectedIndexForDSID:(id)a0;
- (BOOL)updateSelectedIndexForChildDSID:(id)a0;
- (void)notifyServerOfScreenTimeEnabled:(BOOL)a0 forUser:(id)a1;

@end
