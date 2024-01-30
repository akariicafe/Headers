@class CKFetchSubscriptionsOperationInfo, NSArray, NSMutableDictionary;
@protocol CKFetchSubscriptionsOperationCallbacks;

@interface CKFetchSubscriptionsOperation : CKDatabaseOperation <CKFetchSubscriptionsOperationCallbacks> {
    NSArray *_subscriptions;
    NSMutableDictionary *_subscriptionsBySubscriptionID;
    NSMutableDictionary *_subscriptionErrors;
}

@property (readonly, nonatomic) id<CKFetchSubscriptionsOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKFetchSubscriptionsOperationInfo *operationInfo;
@property (nonatomic) BOOL isFetchAllSubscriptionsOperation;
@property (copy, nonatomic) NSArray *subscriptionIDs;
@property (copy, nonatomic) id /* block */ perSubscriptionCompletionBlock;
@property (copy, nonatomic) id /* block */ fetchSubscriptionCompletionBlock;

+ (SEL)daemonInvocationSelector;
+ (id)fetchAllSubscriptionsOperation;
+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;

- (void)fillOutOperationInfo:(id)a0;
- (void)ckSignpostEndWithError:(id)a0;
- (void)fillFromOperationInfo:(id)a0;
- (void)ckSignpostBegin;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (BOOL)hasCKOperationCallbacksSet;
- (id)activityCreate;
- (void)handleSubscriptionFetchForSubscriptionID:(id)a0 subscription:(id)a1 error:(id)a2;
- (void)setFetchSubscriptionCompletionBlockIVar:(id /* block */)a0;
- (id)initWithSubscriptionIDs:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
