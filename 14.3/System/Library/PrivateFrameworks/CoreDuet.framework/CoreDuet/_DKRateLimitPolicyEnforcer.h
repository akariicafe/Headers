@interface _DKRateLimitPolicyEnforcer : NSObject

+ (id)rateLimitPolicyEnforcer;

- (id)filterObjectsByEnforcingRateLimit:(id)a0;
- (void)creditForDeletion:(id)a0;

@end
