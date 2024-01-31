@class NSArray, NSMutableDictionary, CKDeclineSharesOperationInfo;
@protocol CKDeclineSharesOperationCallbacks;

@interface CKDeclineSharesOperation : CKOperation <CKDeclineSharesOperationCallbacks>

@property (retain, nonatomic) NSMutableDictionary *errorsByShareURL;
@property (retain, nonatomic) NSMutableDictionary *shareMetadatasByShareURL;
@property (readonly, nonatomic) id<CKDeclineSharesOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKDeclineSharesOperationInfo *operationInfo;
@property (copy, nonatomic) NSArray *shareMetadatas;
@property (copy, nonatomic) id /* block */ perShareCompletionBlock;
@property (copy, nonatomic) id /* block */ declineSharesCompletionBlock;

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
- (void)handleShareDeclineForURL:(id)a0 error:(id)a1;
- (void)setDeclineSharesCompletionBlockIVar:(id /* block */)a0;

@end
