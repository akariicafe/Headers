@class NSArray, NSOrderedSet, CTXPCServiceSubscriptionContext, TPSTelephonyController, PSListController;

@interface TPSBundleController : PSBundleController

@property (retain, nonatomic) CTXPCServiceSubscriptionContext *subscriptionContext;
@property (copy, nonatomic) NSArray *specifiers;
@property (readonly, weak, nonatomic) PSListController *parentListController;
@property (readonly, nonatomic) TPSTelephonyController *telephonyController;
@property (readonly, copy, nonatomic) NSOrderedSet *subscriptions;
@property (readonly, copy, nonatomic) NSOrderedSet *supportedSubscriptions;
@property (readonly, nonatomic) BOOL supportsDisabledSubscriptions;
@property (readonly, nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, nonatomic, getter=isSubscriptionListHidden) BOOL subscriptionListHidden;

- (id)specifiersWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (id)initWithParentListController:(id)a0;
- (id)subscriptionContextForSpecifier:(id)a0;
- (void)telephonyController:(id)a0 didChangeActiveSubscriptions:(id)a1;
- (void)telephonyController:(id)a0 didChangeSubscriptions:(id)a1;

@end
