@class CKFetchSubscriptionsOperationInfo, NSArray, NSMutableDictionary;
@protocol CKFetchSubscriptionsOperationCallbacks;

@interface CKFetchSubscriptionsOperation : CKDatabaseOperation <CKFetchSubscriptionsOperationCallbacks> {
    NSArray *_subscriptions;
    NSMutableDictionary *_subscriptionsBySubscriptionID;
    NSMutableDictionary *_subscriptionErrors;
}

@property (readonly, nonatomic) id<CKFetchSubscriptionsOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKFetchSubscriptionsOperationInfo *operationInfo;
@property (copy, nonatomic) id /* block */ perSubscriptionCompletionBlock_wrapper;
@property (copy, nonatomic) id /* block */ fetchSubscriptionCompletionBlock_wrapper;
@property (nonatomic) BOOL isFetchAllSubscriptionsOperation;
@property (copy, nonatomic) NSArray *subscriptionIDs;
@property (copy, nonatomic) id /* block */ perSubscriptionCompletionBlock;
@property (copy, nonatomic) id /* block */ fetchSubscriptionCompletionBlock;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;
+ (id)fetchAllSubscriptionsOperation;
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
- (void)setFetchSubscriptionCompletionBlockIVar:(id /* block */)a0;
- (void)handleSubscriptionFetchForSubscriptionID:(id)a0 subscription:(id)a1 error:(id)a2;
- (id)initWithSubscriptionIDs:(id)a0;
- (void).cxx_destruct;

@end
