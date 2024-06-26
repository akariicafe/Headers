@class NSString, RTDarwinNotificationHelper, RTPersistenceManager, RTAccount, RTPlatform, RTKeychainManager, RTAccountManager, NSObject, RTDefaultsManager, RTPersistenceResetSyncContext, RTDataProtectionManager, RTLifeCycleManager;
@protocol OS_os_transaction, RTPersistenceMetricsDelegate;

@interface RTPersistenceDriver : RTService <RTPersistenceMetricsDelegate, RTPersistenceDelegate, RTPurgable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSObject<OS_os_transaction> *setupTransaction;
@property BOOL requiresDirtyTransaction;
@property BOOL requiresSetupTransaction;
@property long long cloudSyncAuthorization;
@property long long encryptedDataAvailability;
@property (retain) RTAccount *currentAccount;
@property (weak) id<RTPersistenceMetricsDelegate> metricsDelegate;
@property (retain) RTPersistenceResetSyncContext *resetSyncContext;
@property (retain) RTDarwinNotificationHelper *notificationHelper;
@property (readonly) RTPersistenceManager *persistenceManager;
@property (readonly) RTDataProtectionManager *dataProtectionManager;
@property (readonly) RTAccountManager *accountManager;
@property (readonly) RTPlatform *currentPlatform;
@property (readonly) RTKeychainManager *keychainManager;
@property (retain) RTDefaultsManager *defaultsManager;
@property (retain) RTLifeCycleManager *lifecycleManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)prepareStore:(id)a0 withContext:(id)a1 error:(id *)a2;
- (id)persistCurrentDeviceWithIdentifier:(id)a0 inStore:(id)a1 context:(id)a2 error:(id *)a3;
- (void)performPurgeOfType:(long long)a0 referenceDate:(id)a1 completion:(id /* block */)a2;
- (unsigned long long)countOfCloudManagedObjectWithEntityDescription:(id)a0 predicate:(id)a1 context:(id)a2 error:(id *)a3;
- (id)_repersistPreviousDeviceWithResetSyncContext:(id)a0 persistenceManager:(id)a1 managedObjectContext:(id)a2;
- (void)onDailyMetricsNotification:(id)a0;
- (id)appleIDsForStore:(id)a0;
- (void)persistenceStore:(id)a0 encounteredCriticalError:(id)a1;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (void)onDataProtectionChange:(id)a0;
- (void)cleanupOlderPersistentStores;
- (id)remoteServerOptionsForStoreWithType:(unsigned long long)a0;
- (void)_onCloudSyncAuthorizationChange:(id)a0;
- (BOOL)persistenceMirroringManagerDidFinishZonePurge:(id)a0 store:(id)a1 context:(id)a2 error:(id *)a3;
- (void)persistenceManagerWillStartResetSync:(id)a0 userInfo:(id)a1 context:(id)a2;
- (void)persistenceDriver:(id)a0 persistenceMigrator:(id)a1 didFinishMigratingStore:(id)a2 withModelProvider:(id)a3;
- (id)initWithPersistenceManager:(id)a0 dataProtectionManager:(id)a1 accountManager:(id)a2 platform:(id)a3 keychainManager:(id)a4 defaultsManager:(id)a5 lifecycleManager:(id)a6;
- (void)evaluateTransactions;
- (id)earliestCloudManagedObjectWithEntityDescription:(id)a0 predicate:(id)a1 context:(id)a2 error:(id *)a3;
- (void)start;
- (id)optionsForStoreWithType:(unsigned long long)a0 error:(id *)a1;
- (void)persistenceManagerDidFinishResetSync:(id)a0 userInfo:(id)a1;
- (BOOL)backupPersistenceStore:(id)a0 error:(id *)a1;
- (BOOL)persistCurrentDeviceRecordInStore:(id)a0 context:(id)a1 error:(id *)a2;
- (id)mirroringOptionsForStoreWithType:(unsigned long long)a0;
- (void)_setupPersistenceAfterConfigurationChange:(long long)a0 cloudSyncAuthorization:(long long)a1 account:(id)a2;
- (id)latestCloudManagedObjectWithEntityDescription:(id)a0 predicate:(id)a1 context:(id)a2 error:(id *)a3;
- (unsigned long long)persistenceDeviceClassForPlatform;
- (void)persistenceMigrator:(id)a0 didStartMigratingStore:(id)a1 withModelProvider:(id)a2;
- (void).cxx_destruct;
- (void)_onAccountChange:(id)a0;
- (id)init;
- (void)persistenceManager:(id)a0 didFinishSetup:(BOOL)a1;
- (void)persistenceStoreResetSyncWithUserInfo:(id)a0;
- (void)_onDataProtectionChange:(id)a0;
- (void)persistenceMigrator:(id)a0 didFinishMigratingStore:(id)a1 withModelProvider:(id)a2;
- (void)_evaluteDirtyTransactionAfterConfigurationChange:(long long)a0;
- (BOOL)store:(id)a0 validateAppleIDs:(id)a1;
- (id)prepareForDatabaseRekey:(id *)a0;
- (void)persistenceDriver:(id)a0 persistenceMigrator:(id)a1 didStartMigratingStore:(id)a2 withModelProvider:(id)a3;
- (id)cloudManagedObjectWithEntityDescription:(id)a0 predicate:(id)a1 sortDescriptors:(id)a2 context:(id)a3 error:(id *)a4;
- (void)persistenceStore:(id)a0 didPrepareWithContext:(id)a1;
- (void)persistenceStore:(id)a0 failedWithError:(id)a1;
- (BOOL)importSourceStore:(id)a0 sourceCoordinator:(id)a1 destinationStore:(id)a2 destinationCoordinator:(id)a3 managedObjectModel:(id)a4 configuration:(id)a5 error:(id *)a6;
- (void)onCloudSyncAuthorizationChange:(id)a0;
- (void)dealloc;
- (BOOL)_purgeLocalEntityRowsUsingModel:(id)a0 managedObjectContext:(id)a1 persistenceManager:(id)a2 error:(id *)a3;
- (void)onAccountChange:(id)a0;
- (void)_updatePersistenceStoresWithDeviceObjectID:(id)a0;
- (void)_updatePersistenceContexts:(id)a0 deviceObjectID:(id)a1;
- (void)persistenceStoreFailedWithError:(id)a0;
- (BOOL)_evaluatePersistentHistoryForDeletedDeviceDuringResetSync:(BOOL *)a0 resetSyncContext:(id)a1 managedObjectContext:(id)a2 error:(id *)a3;

@end
