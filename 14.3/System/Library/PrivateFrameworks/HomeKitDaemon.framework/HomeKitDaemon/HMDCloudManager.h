@class HMDCloudHomeManagerZone, HMDCloudMetadataZone, HMFMessageDispatcher, NSObject, NSMutableArray, HMDCloudDataSyncStateFilter, NSString, CKDatabase, HMDCloudCache, NSData, HMDSyncOperationManager, CKContainer, HMDCloudLegacyZone;
@protocol HMDCloudManagerDataSource, HMDCloudManagerDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface HMDCloudManager : HMFObject <HMBCloudPushObserver, HMFLogging>

@property (readonly, weak) id<HMDCloudManagerDelegate> delegate;
@property (readonly, weak) id<HMDCloudManagerDataSource> dataSource;
@property (readonly, nonatomic) CKContainer *container;
@property (retain, nonatomic) CKDatabase *database;
@property (retain, nonatomic) HMDCloudCache *cloudCache;
@property (readonly, nonatomic) HMDCloudLegacyZone *legacyZone;
@property (readonly, nonatomic) HMDCloudMetadataZone *metadataZone;
@property (readonly, nonatomic) HMDCloudHomeManagerZone *homeManagerZone;
@property (retain, nonatomic) HMFMessageDispatcher *configSyncDispatcher;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic) BOOL accountActive;
@property (copy, nonatomic) id /* block */ fetchCompletionHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientCallbackQueue;
@property (nonatomic) BOOL cloudHomeDataRecordExists;
@property (nonatomic) BOOL keychainSyncEnabled;
@property (readonly, nonatomic) BOOL decryptionFailed;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *retryTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *pollTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *controllerKeyPollTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *watchdogControllerKeyPollTimer;
@property (copy, nonatomic) id /* block */ cloudDataDeletedNotificationHandler;
@property (copy, nonatomic) id /* block */ cloudMetadataDeletedNotificationHandler;
@property (copy, nonatomic) id /* block */ controllerKeyAvailableNotificationHandler;
@property (retain, nonatomic) HMDCloudDataSyncStateFilter *cloudDataSyncStateFilter;
@property (retain, nonatomic) HMFMessageDispatcher *msgDispatcher;
@property (weak, nonatomic) HMDSyncOperationManager *syncManager;
@property (retain, nonatomic) NSMutableArray *currentBackoffTimerValuesInMinutes;
@property (copy, nonatomic) id /* block */ dataDecryptionFailedHandler;
@property (copy, nonatomic) id /* block */ accountActiveUpdateHandler;
@property (nonatomic, getter=isFirstV3FetchRun) BOOL firstV3FetchRun;
@property (nonatomic, getter=isFirstDBQueryRun) BOOL firstDBQueryRun;
@property (readonly, nonatomic) NSData *serverTokenData;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)dealloc;
- (void)handler:(id)a0 didReceiveCKNotification:(id)a1;
- (void)handler:(id)a0 didReceivePushForTopic:(id)a1;
- (id)initWithMessageDispatcher:(id)a0 cloudDataSyncStateFilter:(id)a1 cloudCache:(id)a2 delegate:(id)a3 dataSource:(id)a4 syncManager:(id)a5 callbackQueue:(id)a6 container:(id)a7 workQueue:(id)a8;
- (void)resetCloudServerTokenData:(id)a0;
- (void)handleKeychainStateChangedNotification:(id)a0;
- (void)_registerForProxSetupNotifications;
- (void)__addCKDatabaseOperation:(id)a0;
- (void)__deleteRecordZonesWithIDs:(id)a0 completionHandler:(id /* block */)a1;
- (void)_addHomeZoneName:(id)a0 owner:(id)a1;
- (void)_setupSubscriptionForZone:(id)a0;
- (void)_removeHomeZoneName:(id)a0;
- (void)_fetchTransaction:(id)a0 completionHandler:(id /* block */)a1;
- (void)_checkZoneAndUploadTransaction:(id)a0 completionHandler:(id /* block */)a1;
- (void)_uploadTransaction:(id)a0 completionHandler:(id /* block */)a1;
- (void)__saveRecordZone:(id)a0 completionHandler:(id /* block */)a1;
- (void)__deleteRecordZoneWithID:(id)a0 completionHandler:(id /* block */)a1;
- (void)_createZoneAndUploadTransaction:(id)a0 completionHandler:(id /* block */)a1;
- (void)__fetchRecordZoneWithID:(id)a0 completionHandler:(id /* block */)a1;
- (void)_verifyZoneHasBeenDeletedTransaction:(id)a0 completionHandler:(id /* block */)a1;
- (void)_removeZonesTransactions:(id)a0 completionHandler:(id /* block */)a1;
- (void)_uploadLegacyTransaction:(id)a0 completionHandler:(id /* block */)a1;
- (void)_resetCloudDataAndDeleteMetadataForCurrentAccount:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)_resetCloudZonesIgnoreHomeManager:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)_fetchAndVerifyZoneRootRecord:(id)a0 completionHandler:(id /* block */)a1;
- (void)_verifyAndRemoveZone:(id)a0 completionHandler:(id /* block */)a1;
- (void)__fetchAllRecordZonesWithCompletionHandler:(id /* block */)a0;
- (void)_resetCloudServerTokenData;
- (void)_stopFetchRetryTimer;
- (void)_updateServerTokenStatusOnCloudFilter;
- (void)_resetCloudCache:(id /* block */)a0;
- (void)updateServerTokenStatusOnCloudFilter;
- (id)_serverTokenData;
- (void)_handleAccountStatus:(long long)a0 completionHandler:(id /* block */)a1;
- (void)_fetchLegacyTransaction:(id)a0 forceFetch:(BOOL)a1 accountCompletionHandler:(id /* block */)a2 dataCompletionHandler:(id /* block */)a3;
- (void)_forceCleanCloud:(BOOL)a0 fetchTransaction:(id)a1 completionHandler:(id /* block */)a2;
- (void)_resetHomeDataRecordState;
- (void)_startControllerKeyPollTimer;
- (BOOL)_processFetchedTransaction:(id)a0;
- (void)_processFetchCompletedWithError:(id)a0 serverToken:(id)a1 fetchTransaction:(id)a2 migrationOptions:(long long)a3 completionHandler:(id /* block */)a4 moreRecordsComing:(BOOL)a5 emptyRecord:(BOOL)a6;
- (void)_startControllerKeyPollTimerWithBackoff;
- (void)_removeAllHomeZonesCompletionHandler:(id /* block */)a0;
- (void)_verifyAndRemoveAllHomeZonesCompletionHandler:(id /* block */)a0;
- (BOOL)_validFetchRetryCKErrorCode:(long long)a0;
- (void)_startFetchRetryTimer;
- (void)fetchCurrentAccountStateWithCompletionHandler:(id /* block */)a0;
- (void)_createZoneAndFetchChanges:(id /* block */)a0;
- (void)_registerForPushNotifications;
- (void)_stopFetchPollTimer;
- (void)_stopControllerKeyPollTimer;
- (void)_accountIsActive;
- (void)_verifyZonesExist:(id)a0 zoneIndex:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)_handleKeychainSyncStateChanged:(BOOL)a0;
- (void)_startFetchPollTimer;
- (void)fetchDatabaseZoneChanges;
- (void)__deleteRecordWithID:(id)a0 completionHandler:(id /* block */)a1;
- (void)_handleControllerKeyAvailable;
- (void)_stopWatchdogControllerKeyPollTimer;
- (void)_startControllerKeyPollTimerWithValue:(long long)a0;
- (void)_startWatchdogControllerKeyPollTimer;
- (void)_auditProxSetupNotification:(id)a0;
- (void)__saveSubscription:(id)a0 completionHandler:(id /* block */)a1;
- (void)__fetchSubscriptionWithID:(id)a0 completionHandler:(id /* block */)a1;
- (void)_fetchDatabaseZoneChangesCompletion:(id /* block */)a0;
- (void)_scheduleZoneFetch:(id)a0;
- (id)initWithMessageDispatcher:(id)a0 cloudDataSyncStateFilter:(id)a1 cloudCache:(id)a2 delegate:(id)a3 dataSource:(id)a4 syncManager:(id)a5 callbackQueue:(id)a6;
- (BOOL)legacyZoneHasRecordsAvaliable;
- (void)addHomeZoneName:(id)a0 owner:(id)a1;
- (void)removeHomeZoneName:(id)a0;
- (void)fetchTransaction:(id)a0 completionHandler:(id /* block */)a1;
- (void)uploadTransaction:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeZonesTransactions:(id)a0 completionHandler:(id /* block */)a1;
- (void)uploadLegacyTransaction:(id)a0 completionHandler:(id /* block */)a1;
- (void)resetCloudDataAndDeleteMetadataForCurrentAccount:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)resetCloudCache:(id /* block */)a0;
- (void)setDataAvailableFromCloudCompletionBlock:(id /* block */)a0;
- (void)setCloudDataDeletedNotificationBlock:(id /* block */)a0;
- (void)setCloudMetadataDeletedNotificationBlock:(id /* block */)a0;
- (void)setControllerKeyAvailableNotificationBlock:(id /* block */)a0;
- (void)setDataDecryptionFailedCompletionBlock:(id /* block */)a0;
- (void)setAccountActiveUpdateCallback:(id /* block */)a0;
- (void)fetchLegacyTransaction:(id)a0 forceFetch:(BOOL)a1 accountCompletionHandler:(id /* block */)a2 dataCompletionHandler:(id /* block */)a3;
- (void)updateAccountStatusChanged:(BOOL)a0 completionHandler:(id /* block */)a1;
- (id)_changeTokenFromData:(id)a0;
- (void)updateCloudDataSyncFilterState:(BOOL)a0;
- (void)initializeServerTokenStatusOnCloudFilter;
- (void)cacheDatabaseServerToken;

@end
