@class NSArray;
@protocol CKFetchRegisteredBundleIDsOperationCallbacks;

@interface CKFetchRegisteredBundleIDsOperation : CKOperation <CKFetchRegisteredBundleIDsOperationCallbacks>

@property (copy, nonatomic) NSArray *bundleIDs;
@property (readonly, nonatomic) id<CKFetchRegisteredBundleIDsOperationCallbacks> clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ fetchRegisteredBundleIDsCompletionBlock;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;
+ (SEL)daemonInvocationSelector;
+ (SEL)daemonCallbackCompletionSelector;

- (void)ckSignpostEndWithError:(id)a0;
- (BOOL)hasCKOperationCallbacksSet;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (void)ckSignpostBegin;
- (id)activityCreate;
- (void).cxx_destruct;
- (void)handleOperationDidCompleteWithBundleIDs:(id)a0 metrics:(id)a1 error:(id)a2;

@end
