@class CKAcceptSharesOperationInfo, NSMutableDictionary, NSArray;
@protocol CKAcceptSharesOperationCallbacks;

@interface CKAcceptSharesOperation : CKOperation <CKAcceptSharesOperationCallbacks>

@property (retain, nonatomic) NSMutableDictionary *errorsByShareURL;
@property (retain, nonatomic) NSMutableDictionary *shareMetadatasByShareURL;
@property (readonly, nonatomic) id<CKAcceptSharesOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKAcceptSharesOperationInfo *operationInfo;
@property (copy, nonatomic) NSArray *shareMetadatas;
@property (copy, nonatomic) id /* block */ perShareCompletionBlock;
@property (copy, nonatomic) id /* block */ acceptSharesCompletionBlock;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;

- (id)activityCreate;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (void)fillFromOperationInfo:(id)a0;
- (void)performCKOperation;
- (id)init;
- (void).cxx_destruct;
- (void)handleShareAcceptanceForURL:(id)a0 share:(id)a1 error:(id)a2;
- (void)fillOutOperationInfo:(id)a0;
- (id)initWithShareMetadatas:(id)a0;
- (BOOL)hasCKOperationCallbacksSet;

@end
