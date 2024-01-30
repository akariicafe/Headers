@protocol CKFetchUserQuotaOperationCallbacks;

@interface CKFetchUserQuotaOperation : CKDatabaseOperation <CKFetchUserQuotaOperationCallbacks>

@property (nonatomic) unsigned long long quotaAvailable;
@property (readonly, nonatomic) id<CKFetchUserQuotaOperationCallbacks> clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ fetchUserQuotaCompletionBlock;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;
+ (SEL)daemonCallbackCompletionSelector;

- (id)activityCreate;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (void)performCKOperation;
- (id)init;
- (void).cxx_destruct;
- (void)handleOperationDidCompleteWithQuotaAvailable:(unsigned long long)a0 metrics:(id)a1 error:(id)a2;
- (BOOL)hasCKOperationCallbacksSet;

@end
