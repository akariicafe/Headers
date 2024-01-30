@class NSArray;

@interface WBSRetryableCKFetchSubscriptionsOperation : WBSRetryableCKDatabaseOperation

@property (copy, nonatomic) NSArray *subscriptionIDs;
@property (copy, nonatomic) id /* block */ perSubscriptionCompletionBlock;
@property (copy, nonatomic) id /* block */ fetchSubscriptionCompletionBlock;

- (id)_makeOperation;
- (void)_setUpOperation:(id)a0;
- (void).cxx_destruct;

@end
