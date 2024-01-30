@class VSSubscriptionPredicateFactory;

@interface VSSubscriptionFetchOptionsValidator : NSObject

@property (retain, nonatomic) VSSubscriptionPredicateFactory *predicateFactory;

- (void).cxx_destruct;
- (id)subscriptionFetchOptionsAllowedForSecurityTask:(id)a0;
- (id)standardizedFetchOptionsFromOptions:(id)a0 withSecurityTask:(id)a1;

@end
