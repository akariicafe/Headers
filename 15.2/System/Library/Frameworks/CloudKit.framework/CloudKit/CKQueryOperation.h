@class CKQueryOperationInfo, NSMutableDictionary, NSDictionary, NSArray, CKQueryCursor, CKQuery, CKRecordZoneID;
@protocol CKQueryOperationCallbacks;

@interface CKQueryOperation : CKDatabaseOperation <CKQueryOperationCallbacks>

@property (readonly, nonatomic) id<CKQueryOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKQueryOperationInfo *operationInfo;
@property (copy, nonatomic) CKQueryCursor *resultsCursor;
@property (nonatomic) BOOL shouldFetchAssetContent;
@property (retain, nonatomic) NSMutableDictionary *recordErrors;
@property (nonatomic) BOOL fetchAllResults;
@property (copy, nonatomic) NSDictionary *assetTransferOptionsByKey;
@property (copy, nonatomic) id /* block */ queryCursorFetchedBlock;
@property (copy, nonatomic) CKQuery *query;
@property (copy, nonatomic) CKQueryCursor *cursor;
@property (copy, nonatomic) CKRecordZoneID *zoneID;
@property (nonatomic) unsigned long long resultsLimit;
@property (copy, nonatomic) NSArray *desiredKeys;
@property (copy, nonatomic) id /* block */ recordFetchedBlock;
@property (copy, nonatomic) id /* block */ recordMatchedBlock;
@property (copy, nonatomic) id /* block */ queryCompletionBlock;

+ (SEL)daemonCallbackCompletionSelector;
+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;

- (void)performCKOperation;
- (BOOL)hasCKOperationCallbacksSet;
- (void)fillOutOperationInfo:(id)a0;
- (id)activityCreate;
- (void)fillFromOperationInfo:(id)a0;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (void)handleQueryDidFetchCursor:(id)a0 reply:(id /* block */)a1;
- (id)initWithQuery:(id)a0;
- (void)handleQueryDidFetchForRecordID:(id)a0 record:(id)a1 error:(id)a2;
- (id)initWithCursor:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (void)handleOperationDidCompleteWithCursor:(id)a0 metrics:(id)a1 error:(id)a2;

@end
