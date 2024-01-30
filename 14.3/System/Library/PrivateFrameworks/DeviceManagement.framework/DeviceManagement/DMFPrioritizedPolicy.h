@interface DMFPrioritizedPolicy : NSObject

@property (nonatomic) long long priority;
@property (nonatomic) long long policy;

+ (id)prioritizedPoliciesForAppPolicy:(id)a0 bundleIdentifiers:(id)a1 categoryPolicy:(id)a2 categoryIdentifiers:(id)a3 webPolicy:(id)a4 webDomains:(id)a5;
+ (long long)arbitratePolicyForPrioritizedPolicies:(id)a0;

- (id)initWithEffectivePolicy:(id)a0 identifier:(id)a1;
- (BOOL)isEqualToPrioritizedPolicy:(id)a0;
- (long long)compare:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
