@class NSString, CKFetchWebAuthTokenOperationInfo;
@protocol CKFetchWebAuthTokenOperationCallbacks;

@interface CKFetchWebAuthTokenOperation : CKDatabaseOperation <CKFetchWebAuthTokenOperationCallbacks>

@property (copy, nonatomic) NSString *webAuthToken;
@property (readonly, nonatomic) id<CKFetchWebAuthTokenOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKFetchWebAuthTokenOperationInfo *operationInfo;
@property (copy, nonatomic) NSString *APIToken;
@property (copy, nonatomic) id /* block */ fetchWebAuthTokenCompletionBlock;

+ (SEL)daemonCallbackCompletionSelector;
+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;

- (void)performCKOperation;
- (BOOL)hasCKOperationCallbacksSet;
- (void)fillOutOperationInfo:(id)a0;
- (id)activityCreate;
- (void)fillFromOperationInfo:(id)a0;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)initWithAPIToken:(id)a0;
- (void)handleOperationDidCompleteWithWebAuthToken:(id)a0 metrics:(id)a1 error:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (BOOL)CKOperationShouldRun:(id *)a0;

@end
