@class NSObject, NSString, CKSyncEngineMetadata, CKNotificationListener, NSOperationQueue, CKDatabase;
@protocol OS_dispatch_queue, OS_xpc_object, CKSyncEngineDataSource;

@interface CKSyncEngine : NSObject <CKPropertiesDescription> {
    BOOL _ignoringSystemConditions;
    BOOL _useUniqueActivityIdentifiers;
    unsigned long long _lastNotifiedMetadataChangeCount;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_batchCreationQueue;
    unsigned long long _maxRecordBytesPerBatch;
    id /* block */ _updateMetadataBlock;
}

@property (class, nonatomic) BOOL fastErrorRetry;

@property (retain, nonatomic) CKDatabase *database;
@property (retain, nonatomic) CKSyncEngineMetadata *metadata;
@property (retain, nonatomic) CKNotificationListener *notificationListener;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic) unsigned long long maxRecordCountPerBatch;
@property (nonatomic) unsigned long long maxZoneCountPerBatch;
@property (nonatomic) BOOL allowMetadataCallbackDeferral;
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcActivityCriteriaOverrides;
@property (nonatomic, getter=isWaitingForIdentityUpdate) BOOL waitingForIdentityUpdate;
@property (nonatomic, getter=isWaitingForHSA2) BOOL waitingForHSA2;
@property (nonatomic) long long lastKnownAccountStatus;
@property (nonatomic) long long priority;
@property (retain, nonatomic) NSString *databaseSubscriptionIDOverride;
@property (nonatomic) BOOL skipRetryOnOperationError;
@property (nonatomic, getter=isAutomaticSyncingEnabled) BOOL automaticSyncingEnabled;
@property (nonatomic) BOOL useOpportunisticPushTopic;
@property (nonatomic) BOOL needsToReloadAccount;
@property (readonly, weak, nonatomic) id<CKSyncEngineDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)unregisterActivitiesWithDatabase:(id)a0 ignoringSystemConditions:(BOOL)a1;
+ (BOOL)shouldDeferAfterError:(id)a0;
+ (id)earliestStartDateAfterError:(id)a0;
+ (id)syncActivityIdentifierInDatabase:(id)a0 ignoringSystemConditions:(BOOL)a1;
+ (id)saveSubscriptionActivityIdentifierInDatabase:(id)a0 ignoringSystemConditions:(BOOL)a1;

- (void)addRecordIDsToSave:(id)a0 recordIDsToDelete:(id)a1;
- (BOOL)needsToFetchChangesForZoneIDs:(id)a0;
- (BOOL)hasPendingModifications;
- (void)fetchChangesForZoneIDs:(id)a0 completionHandler:(id /* block */)a1;
- (id)databaseSubscription;
- (id)_adopterVisibleFetchChangesErrorForZoneID:(id)a0 error:(id)a1;
- (void)modifyPendingChangesInZoneIDs:(id)a0 group:(id)a1 completionHandler:(id /* block */)a2;
- (id)defaultDatabaseSubscription;
- (id)initWithDatabase:(id)a0 dataSource:(id)a1 metadata:(id)a2 machServiceName:(id)a3 priority:(long long)a4 xpcActivityCriteriaOverrides:(id)a5;
- (void)modifyPendingChangesWithCompletionHandler:(id /* block */)a0;
- (id)initWithDatabase:(id)a0 dataSource:(id)a1 metadata:(id)a2;
- (unsigned long long)numberOfModifyPendingRecordsOperations;
- (void)_fetchChangesForZoneIDs:(id)a0 ifNecessary:(BOOL)a1 operationGroup:(id)a2 completionHandler:(id /* block */)a3;
- (id)initWithDatabase:(id)a0 dataSource:(id)a1 metadata:(id)a2 machServiceName:(id)a3 priority:(long long)a4;
- (id)existingOperationToModifyRecordBatchesForZoneIDs:(id)a0 includingExecutingOperations:(BOOL)a1;
- (id)initWithConfiguration:(id)a0;
- (void)didReceiveDatabaseNotification:(id)a0;
- (void)accountChangedNotification:(id)a0;
- (void).cxx_destruct;
- (void)fetchChangesForZoneIDs:(id)a0 group:(id)a1 completionHandler:(id /* block */)a2;
- (void)_updateDataSourceForFailedToFetchChangesForRecordZoneID:(id)a0 error:(id)a1;
- (id)saveSubscriptionActivityIdentifier;
- (void)CKDescribePropertiesUsing:(id)a0;
- (void)modifyPendingChangesInZoneIDs:(id)a0 completionHandler:(id /* block */)a1;
- (id)init;
- (id)defaultDatabaseSubscriptionID;
- (void)fetchChangesForZoneIDs:(id)a0 group:(id)a1 ifNecessary:(BOOL)a2 completionHandler:(id /* block */)a3;
- (id)existingOperationToFetchChangesForZoneIDs:(id)a0 includingExecutingOperations:(BOOL)a1;
- (void)setNeedsToFetchChanges;
- (id)userRequestedBackupActivityIdentifier;
- (id)databaseSubscriptionWithID:(id)a0;
- (void)addRecordZonesToSave:(id)a0 recordZoneIDsToDelete:(id)a1;
- (void)fetchChangesWithCompletionHandler:(id /* block */)a0;
- (id)syncActivityIdentifier;
- (id)redactedDescription;
- (void)unregisterActivities;
- (void)dealloc;
- (void)saveSubscriptionIfNecessaryWithCompletionHandler:(id /* block */)a0;
- (id)initWithDatabase:(id)a0 dataSource:(id)a1 metadata:(id)a2 machServiceName:(id)a3;
- (void)performSyncActivity:(id)a0 completionHandler:(id /* block */)a1;
- (void)identityUpdateNotification:(id)a0;
- (id)nextBatchOfRecordsToModifyWithCustomBatchingInZoneIDs:(id)a0;
- (void)submitActivityIfNecessaryWithIdentifier:(id)a0 earliestStartDate:(id)a1 priority:(long long)a2 userRequestedBackupTask:(BOOL)a3;
- (BOOL)hasSchedulerActivityWithIdentifier:(id)a0;
- (BOOL)_isFetchChangesErrorAdopterVisible:(id)a0;

@end
