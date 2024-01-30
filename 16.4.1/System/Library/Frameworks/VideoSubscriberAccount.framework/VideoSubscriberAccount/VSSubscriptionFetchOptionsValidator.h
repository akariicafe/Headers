@class VSSubscriptionPredicateFactory;

@interface VSSubscriptionFetchOptionsValidator : NSObject

@property (retain, nonatomic) VSSubscriptionPredicateFactory *predicateFactory;

- (id)standardizedFetchOptionsFromOptions:(id)a0 withSecurityTask:(id)a1;
- (id)subscriptionFetchOptionsAllowedForSecurityTask:(id)a0;
- (void).cxx_destruct;

@end
