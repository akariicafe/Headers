@class NSArray, NSMutableDictionary, NSString, CKFetchRecordVersionsOperationInfo;
@protocol CKFetchRecordVersionsOperationCallbacks;

@interface CKFetchRecordVersionsOperation : CKDatabaseOperation <CKFetchRecordVersionsOperationCallbacks>

@property (readonly, nonatomic) id<CKFetchRecordVersionsOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKFetchRecordVersionsOperationInfo *operationInfo;
@property (retain, nonatomic) NSMutableDictionary *recordErrors;
@property (nonatomic) BOOL isDeleted;
@property (nonatomic) BOOL shouldFetchAssetContent;
@property (copy, nonatomic) NSArray *recordIDs;
@property (copy, nonatomic) NSArray *desiredKeys;
@property (copy, nonatomic) NSString *minimumVersionETag;
@property (copy, nonatomic) id /* block */ fetchRecordVersionsProgressBlock;
@property (copy, nonatomic) id /* block */ fetchRecordVersionsCompletionBlock;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;
+ (SEL)daemonInvocationSelector;

- (void)ckSignpostEndWithError:(id)a0;
- (BOOL)hasCKOperationCallbacksSet;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (void)fillOutOperationInfo:(id)a0;
- (void)ckSignpostBegin;
- (id)init;
- (id)activityCreate;
- (void)fillFromOperationInfo:(id)a0;
- (id)initWithRecordIDs:(id)a0;
- (void).cxx_destruct;
- (void)handleFetchForRecordID:(id)a0 isDeleted:(BOOL)a1 versions:(id)a2 error:(id)a3;

@end
