@interface APUICardRequestSatisfactionCriteria : NSObject

+ (id)generalSatisfactionCriteria;
+ (id)customIntentSatisfactionCriteria;
+ (id)compactSatisfactionCriteria;

- (BOOL)canSatisfyCardRequest:(id)a0;
- (unsigned long long)servicePriorityForRequest:(id)a0;

@end
