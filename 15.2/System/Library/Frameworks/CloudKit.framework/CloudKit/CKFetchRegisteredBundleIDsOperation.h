@class NSArray;
@protocol CKFetchRegisteredBundleIDsOperationCallbacks;

@interface CKFetchRegisteredBundleIDsOperation : CKOperation <CKFetchRegisteredBundleIDsOperationCallbacks>

@property (copy, nonatomic) NSArray *bundleIDs;
@property (readonly, nonatomic) id<CKFetchRegisteredBundleIDsOperationCallbacks> clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ fetchRegisteredBundleIDsCompletionBlock;

+ (SEL)daemonCallbackCompletionSelector;
+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;

- (void)performCKOperation;
- (BOOL)hasCKOperationCallbacksSet;
- (id)activityCreate;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (void)handleOperationDidCompleteWithBundleIDs:(id)a0 metrics:(id)a1 error:(id)a2;
- (void).cxx_destruct;

@end
