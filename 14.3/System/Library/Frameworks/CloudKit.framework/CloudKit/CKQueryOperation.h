@class CKQueryOperationInfo, NSArray, NSDictionary, CKQueryCursor, CKQuery, CKRecordZoneID;
@protocol CKQueryOperationCallbacks;

@interface CKQueryOperation : CKDatabaseOperation <CKQueryOperationCallbacks>

@property (readonly, nonatomic) id<CKQueryOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKQueryOperationInfo *operationInfo;
@property (copy, nonatomic) CKQueryCursor *resultsCursor;
@property (nonatomic) BOOL shouldFetchAssetContent;
@property (nonatomic) BOOL fetchAllResults;
@property (copy, nonatomic) NSDictionary *assetTransferOptionsByKey;
@property (copy, nonatomic) id /* block */ queryCursorFetchedBlock;
@property (copy, nonatomic) CKQuery *query;
@property (copy, nonatomic) CKQueryCursor *cursor;
@property (copy, nonatomic) CKRecordZoneID *zoneID;
@property (nonatomic) unsigned long long resultsLimit;
@property (copy, nonatomic) NSArray *desiredKeys;
@property (copy, nonatomic) id /* block */ recordFetchedBlock;
@property (copy, nonatomic) id /* block */ queryCompletionBlock;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;
+ (SEL)daemonCallbackCompletionSelector;

- (id)activityCreate;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (void)fillFromOperationInfo:(id)a0;
- (void)performCKOperation;
- (id)init;
- (void).cxx_destruct;
- (void)handleOperationDidCompleteWithCursor:(id)a0 metrics:(id)a1 error:(id)a2;
- (void)handleQueryDidFetchRecord:(id)a0;
- (id)initWithCursor:(id)a0;
- (void)handleQueryDidFetchCursor:(id)a0 reply:(id /* block */)a1;
- (void)fillOutOperationInfo:(id)a0;
- (id)initWithQuery:(id)a0;
- (BOOL)hasCKOperationCallbacksSet;

@end
