@class CKDFetchRecordsOperation, NSSet, NSDictionary, NSMutableDictionary, NSObject, CKDRecordCache;
@protocol OS_dispatch_source, OS_dispatch_queue, OS_dispatch_group;

@interface CKDRecordFetchAggregator : CKDDatabaseOperation {
    CKDRecordCache *_recordCache;
}

@property (nonatomic) BOOL fetchAssetContents;
@property (retain, nonatomic) NSDictionary *assetTransferOptionsByRecordTypeAndKey;
@property (nonatomic) BOOL preserveOrdering;
@property (retain, nonatomic) NSSet *desiredKeys;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *recordReadySource;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *fetchQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *fetchSource;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *fetchGroup;
@property (retain, nonatomic) NSMutableDictionary *fetchInfosByOrder;
@property unsigned long long curFetchOrder;
@property unsigned long long highestReturnedOrder;
@property (weak, nonatomic) CKDFetchRecordsOperation *currentFetchOp;
@property BOOL started;
@property (getter=isMarkedToFinishByParent) BOOL markedToFinishByParent;
@property (nonatomic) BOOL forceDecryptionAttempt;
@property (nonatomic) BOOL useRecordCache;
@property (copy, nonatomic) id /* block */ fetchAggregatorCompletionBlock;

- (id)activityCreate;
- (id)recordCache:(id *)a0;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (BOOL)supportsClearAssetEncryption;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (id)CKPropertiesDescription;
- (void)finishIfAppropriate;
- (id)description;
- (void)_performCallbackForFetchInfoLocked:(id)a0;
- (void)_addRecordFetchInfos:(id)a0;
- (void)_flushFetchedRecordsToConsumerOrderedLocked;
- (void)main;
- (id)_fetchRecord:(id)a0 recordReadyHandle:(BOOL *)a1 withRecordCompletion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)_finishRecordFetchAggregator;
- (void)_recordFetchesAvailable;
- (void)dealloc;
- (void)fetchRecords:(id)a0 withPerRecordCompletion:(id /* block */)a1;
- (void)_lockedSendFetchRequest;
- (void)_flushFetchedRecordsToConsumerLocked;
- (void)_flushFetchedRecordsToConsumerNoOrderingLocked;

@end
