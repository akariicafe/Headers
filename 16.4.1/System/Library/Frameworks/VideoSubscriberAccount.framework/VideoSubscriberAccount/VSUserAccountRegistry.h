@class WLKSettingsStore, NSDate, NSObject, NSManagedObjectContext, VSPrivacyFacade, NSString, VSUserAccountPersistentContainer, WLKChannelUtilities, VSPreferences, NSOperationQueue, NSArray, VSRemoteNotifier, VSUserAccountUpdateManager;
@protocol OS_dispatch_source, VSUserAccountRegistryDelegate;

@interface VSUserAccountRegistry : NSObject <VSUserAccountUpdateManagerDelegate, VSUserAccountServiceProtocol>

@property (retain, nonatomic) VSPreferences *preferences;
@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (retain, nonatomic) VSRemoteNotifier *remoteNotifier;
@property (retain, nonatomic) VSUserAccountPersistentContainer *container;
@property (retain, nonatomic) NSManagedObjectContext *viewContext;
@property (retain, nonatomic) WLKSettingsStore *sharedSettingsStore;
@property (retain, nonatomic) WLKChannelUtilities *sharedChannelUtilities;
@property (retain, nonatomic) NSArray *allChannelDetails;
@property (nonatomic) BOOL currentUpdateSessionIsForced;
@property (retain, nonatomic) VSUserAccountUpdateManager *updateManager;
@property (retain, nonatomic) VSPrivacyFacade *privacyFacade;
@property (retain, nonatomic) NSDate *lastUpdateTime;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (nonatomic) BOOL storesLoaded;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } loadingStoresLock;
@property (weak, nonatomic) id<VSUserAccountRegistryDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resetTimer;
- (void)_update;
- (id)initWithDelegate:(id)a0;
- (id)_securityTaskForCurrentConnection;
- (id)init;
- (void)removeSubscriptions:(id)a0;
- (void)registerSubscription:(id)a0;
- (void).cxx_destruct;
- (void)fetchActiveSubscriptionsWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)_setupObservers;
- (void)_deleteUserAccount:(id)a0 completion:(id /* block */)a1;
- (long long)_deviceCategoryFromDeviceType:(unsigned long long)a0;
- (void)_insertUserAccount:(id)a0 completion:(id /* block */)a1;
- (BOOL)_isValidForUpdateQueryForCurrentTask;
- (BOOL)_isValidForUpdateQueryForCurrentTask:(id)a0;
- (void)_loadStoresAndMigrateIfRequiredWithCompletion:(id /* block */)a0;
- (void)_populatePersistentUserAccount:(id)a0 withUserAccount:(id)a1;
- (id)_predicateForQueryRequestWithOptions:(long long)a0;
- (void)_queryPersistentUserAccountsWithOptions:(long long)a0 predicate:(id)a1 context:(id)a2 completion:(id /* block */)a3;
- (void)_queryUserAccountsWithOptions:(long long)a0 predicate:(id)a1 completion:(id /* block */)a2;
- (void)_removeNonConnectedSignedOutUserAccounts;
- (void)_subscriptionsForMigrationWithCompletion:(id /* block */)a0;
- (id)_userAccountForPersistentUserAccount:(id)a0 context:(id)a1;
- (id)createSaveContext;
- (void)deleteUserAccount:(id)a0 completion:(id /* block */)a1;
- (void)forceUpdateUserAccountsWithCompletion:(id /* block */)a0;
- (void)insertLegacySubscription:(id)a0 completion:(id /* block */)a1;
- (void)insertUserAccount:(id)a0 completion:(id /* block */)a1;
- (void)queryUserAccountsWithOptions:(long long)a0 completion:(id /* block */)a1;
- (BOOL)saveContext:(id)a0 withError:(id)a1;
- (void)updateManager:(id)a0 updateRequestDidFinish:(id)a1;
- (void)updateManagerDidFinish:(id)a0;
- (void)updateUserAccount:(id)a0 completion:(id /* block */)a1;

@end
