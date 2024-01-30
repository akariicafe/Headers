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

+ (id)fetchAllSubscriptionsOperation;
+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;

- (void)performCKOperation;
- (BOOL)hasCKOperationCallbacksSet;
- (void)fillOutOperationInfo:(id)a0;
- (id)activityCreate;
- (void)fillFromOperationInfo:(id)a0;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)initWithSubscriptionIDs:(id)a0;
- (void)handleSubscriptionFetchForSubscriptionID:(id)a0 subscription:(id)a1 error:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (BOOL)CKOperationShouldRun:(id *)a0;

@end
