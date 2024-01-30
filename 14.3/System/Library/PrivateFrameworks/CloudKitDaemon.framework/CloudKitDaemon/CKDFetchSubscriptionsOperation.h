@class NSArray, NSMutableArray;
@protocol CKFetchSubscriptionsOperationCallbacks;

@interface CKDFetchSubscriptionsOperation : CKDDatabaseOperation

@property (retain, nonatomic) NSMutableArray *subscriptions;
@property (retain, nonatomic) NSArray *subscriptionIDs;
@property (nonatomic) BOOL isFetchAllSubscriptionsOperation;
@property (retain, nonatomic) id<CKFetchSubscriptionsOperationCallbacks> clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ subscriptionFetchedProgressBlock;

- (id)activityCreate;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)initWithOperationInfo:(id)a0 clientContext:(id)a1;
- (void).cxx_destruct;
- (void)main;
- (int)operationType;
- (void)_handleSubscriptionFetched:(id)a0 withID:(id)a1 responseCode:(id)a2;

@end
