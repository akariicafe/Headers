@class NSString, FCIssueReadingHistory, FCSubscriptionController;
@protocol FCBundleSubscriptionProviderType, FCContentContext;

@interface FCCurrentIssuesChecker : NSObject <FCCurrentIssuesChecker> {
    id<FCContentContext> _context;
    FCSubscriptionController *_subscriptionController;
    FCIssueReadingHistory *_issueReadingHistory;
    id<FCBundleSubscriptionProviderType> _bundleSubscriptionProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchCurrentIssuesWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)fetchUsersCurrentIssuesWithCompletion:(id /* block */)a0;
- (id)initWithContext:(id)a0 subscriptionController:(id)a1 issueReadingHistory:(id)a2 bundleSubscriptionProvider:(id)a3;

@end
