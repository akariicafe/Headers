@interface _DKRateLimitPolicyEnforcer : NSObject

+ (id)rateLimitPolicyEnforcer;

- (void)creditForDeletion:(id)a0;
- (id)filterObjectsByEnforcingRateLimit:(id)a0;

@end
