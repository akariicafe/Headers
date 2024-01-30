@class NSHashTable, NSError, MSPCloudKitAccountAccess, MSPContainer, CKContainer, NSMutableDictionary, NSObject, MSPCloudContainerCache, MSPJournal;
@protocol OS_dispatch_queue;

@interface MSPCloudContainer : NSObject <MSPCloudNotificationReceiver> {
    BOOL _requiresRemoteFetch;
}

@property (retain, nonatomic) MSPCloudKitAccountAccess *access;
@property (retain, nonatomic) MSPCloudContainerCache *cache;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *observerQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic) BOOL hasActiveSubscription;
@property (retain, nonatomic) MSPJournal *journal;
@property (retain, nonatomic) NSMutableDictionary *pendingOperations;
@property (nonatomic) BOOL canceled;
@property (copy, nonatomic) NSError *cancelError;
@property (retain, nonatomic) NSHashTable *observers;
@property (readonly, nonatomic) CKContainer *ckContainer;
@property (nonatomic) BOOL useSecureContainer;
@property (nonatomic) unsigned long long operationBatchSize;
@property (retain, nonatomic) MSPContainer *container;

- (void)mergeLocalChangesFromReplica:(id)a0 withAppliedRemoteChanges:(id)a1 group:(id)a2 completion:(id /* block */)a3;
- (BOOL)useZoneWidePCS;
- (Class)replicaRecordClass;
- (id)zoneName;
- (BOOL)isCanceled;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)fetchChangesWithGroup:(id)a0 completion:(id /* block */)a1;
- (id)mergeOptionsForEarliestKnownSyncDate:(id)a0;
- (id)zoneID;
- (id)zoneSubscriptionName;
- (void)addObserver:(id)a0;
- (id)_modifyRecordsOperationWithRecordsToSave:(id)a0 toDelete:(id)a1 group:(id)a2 modifyRecordsCompletion:(id /* block */)a3;
- (void)removeCloudContainerWithGroup:(id)a0 completion:(id /* block */)a1;
- (void)handleMergeError:(id)a0 completion:(id /* block */)a1;
- (id)batchedOperationsFromRecords:(id)a0 toDelete:(id)a1 group:(id)a2 batchSize:(unsigned long long)a3 modifyRecordsCompletionBlock:(id /* block */)a4;
- (void)mergeWithGroup:(id)a0 completion:(id /* block */)a1;
- (void)configureCKOperation:(id)a0 withGroup:(id)a1;
- (id)description;
- (void)subscribeToChangesWithCompletion:(id /* block */)a0;
- (void)addCKOperation:(id)a0;
- (void)_forEachObserver:(id /* block */)a0;
- (void)pushChanges:(id)a0 withGroup:(id)a1 completion:(id /* block */)a2;
- (void)didReceiveRemoteNotification:(id)a0;
- (void)mergeRemoteChanges:(id)a0 withGroup:(id)a1 completion:(id /* block */)a2;
- (id)initWithContainer:(id)a0 cache:(id)a1 access:(id)a2;
- (void)containerDidEraseContents;
- (id)initWithContainer:(id)a0 accountID:(id)a1;
- (void)setupCloudContainerWithGroup:(id)a0 completion:(id /* block */)a1;
- (void)cancelPendingOperationsWithError:(id)a0;
- (void)cancelMergeWithError:(id)a0;
- (void)removePendingOperationWithID:(id)a0;
- (id)initWithContainer:(id)a0 cache:(id)a1;

@end
