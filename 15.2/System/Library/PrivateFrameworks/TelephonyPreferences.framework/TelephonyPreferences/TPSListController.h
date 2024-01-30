@class NSOrderedSet, CTXPCServiceSubscriptionContext;

@interface TPSListController : PSListController

@property (retain, nonatomic) CTXPCServiceSubscriptionContext *subscriptionContext;
@property (copy, nonatomic) NSOrderedSet *subscriptions;

- (void)setSpecifier:(id)a0;
- (void).cxx_destruct;

@end
