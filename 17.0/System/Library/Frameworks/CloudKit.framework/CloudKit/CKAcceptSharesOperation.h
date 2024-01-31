@class CKAcceptSharesOperationInfo, NSMutableDictionary, NSArray;
@protocol CKAcceptSharesOperationCallbacks;

@interface CKAcceptSharesOperation : CKOperation <CKAcceptSharesOperationCallbacks>

@property (retain, nonatomic) NSMutableDictionary *errorsByShareURL;
@property (retain, nonatomic) NSMutableDictionary *shareMetadatasByShareURL;
@property (readonly, nonatomic) id<CKAcceptSharesOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKAcceptSharesOperationInfo *operationInfo;
@property (copy, nonatomic) id /* block */ perShareCompletionBlock_wrapper;
@property (copy, nonatomic) id /* block */ acceptSharesCompletionBlock_wrapper;
@property (copy, nonatomic) NSArray *shareMetadatas;
@property (copy, nonatomic) id /* block */ perShareCompletionBlock;
@property (copy, nonatomic) id /* block */ acceptSharesCompletionBlock;

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
- (void).cxx_destruct;
- (id)initWithShareMetadatas:(id)a0;
- (void)handleShareAcceptanceForURL:(id)a0 share:(id)a1 error:(id)a2;
- (void)setAcceptSharesCompletionBlockIVar:(id /* block */)a0;

@end
