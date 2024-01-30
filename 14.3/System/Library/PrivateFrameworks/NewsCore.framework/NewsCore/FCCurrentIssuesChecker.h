@class FCIssueReadingHistory, NSString, FCSubscriptionController;
@protocol FCBundleSubscriptionProviderType, FCContentContext;

@interface FCCurrentIssuesChecker : NSObject <FCCurrentIssuesChecker>

@property (retain, nonatomic) id<FCContentContext> context;
@property (retain, nonatomic) FCSubscriptionController *subscriptionController;
@property (retain, nonatomic) FCIssueReadingHistory *issueReadingHistory;
@property (retain, nonatomic) id<FCBundleSubscriptionProviderType> bundleSubscriptionProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_promiseFollowedAndAutofavoriteChannelIDsWithChainingData:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)sortIssues:(id)a0 basedOnTagIDs:(id)a1;
- (id)initWithContext:(id)a0 subscriptionController:(id)a1 issueReadingHistory:(id)a2 bundleSubscriptionProvider:(id)a3;
- (id)_promiseBundleChannelIDs;
- (void)fetchCurrentIssuesWithCompletion:(id /* block */)a0;
- (id)demoFollowedChannelIDs;
- (id)_promiseFilterUnreadIssuesWithFromIssues:(id)a0 withChainingdata:(id)a1;
- (id)_promiseCurrentIssuesFromChannelIDs:(id)a0 withChainingData:(id)a1;
- (void)fetchUsersCurrentIssuesWithCompletion:(id /* block */)a0;

@end
