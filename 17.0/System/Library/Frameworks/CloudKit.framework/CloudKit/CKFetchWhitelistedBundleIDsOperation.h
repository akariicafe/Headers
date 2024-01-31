@class NSArray;
@protocol CKFetchWhitelistedBundleIDsOperationCallbacks;

@interface CKFetchWhitelistedBundleIDsOperation : CKOperation <CKFetchWhitelistedBundleIDsOperationCallbacks>

@property (copy, nonatomic) NSArray *bundleIDs;
@property (readonly, nonatomic) id<CKFetchWhitelistedBundleIDsOperationCallbacks> clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ fetchWhitelistedBundleIDsCompletionBlock;

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
