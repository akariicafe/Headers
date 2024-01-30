@class CKFetchSubscriptionsOperationInfo, NSArray, NSMutableDictionary;
@protocol CKFetchSubscriptionsOperationCallbacks;

@interface CKFetchSubscriptionsOperation : CKDatabaseOperation <CKFetchSubscriptionsOperationCallbacks>

@property (readonly, nonatomic) id<CKFetchSubscriptionsOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKFetchSubscriptionsOperationInfo *operationInfo;
@property (retain, nonatomic) NSArray *subscriptions;
@property (retain, nonatomic) NSMutableDictionary *subscriptionsBySubscriptionID;
@property (retain, nonatomic) NSMutableDictionary *subscriptionErrors;
@property (nonatomic) BOOL isFetchAllSubscriptionsOperation;
@property (copy, nonatomic) NSArray *subscriptionIDs;
@property (copy, nonatomic) id /* block */ fetchSubscriptionCompletionBlock;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;
+ (id)fetchAllSubscriptionsOperation;

- (id)activityCreate;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (void)fillFromOperationInfo:(id)a0;
- (void)performCKOperation;
- (id)init;
- (void).cxx_destruct;
- (id)initWithSubscriptionIDs:(id)a0;
- (void)fillOutOperationInfo:(id)a0;
- (void)handleSubscriptionFetchForSubscriptionID:(id)a0 subscription:(id)a1 error:(id)a2;
- (BOOL)hasCKOperationCallbacksSet;

@end
