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

+ (SEL)daemonInvocationSelector;
+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;

- (void)fillOutOperationInfo:(id)a0;
- (void)ckSignpostEndWithError:(id)a0;
- (void)fillFromOperationInfo:(id)a0;
- (void)ckSignpostBegin;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (BOOL)hasCKOperationCallbacksSet;
- (id)activityCreate;
- (id)init;
- (void).cxx_destruct;
- (id)initWithShareMetadatas:(id)a0;
- (void)handleShareDeclineForURL:(id)a0 error:(id)a1;
- (void)setDeclineSharesCompletionBlockIVar:(id /* block */)a0;

@end
