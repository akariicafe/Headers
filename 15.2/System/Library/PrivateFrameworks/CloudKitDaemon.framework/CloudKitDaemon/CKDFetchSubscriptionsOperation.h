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
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (int)operationType;
- (void)_handleSubscriptionFetched:(id)a0 withID:(id)a1 responseCode:(id)a2;
- (void)main;
- (void).cxx_destruct;

@end
