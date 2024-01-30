@interface DMFPrioritizedPolicy : NSObject

@property (nonatomic) long long priority;
@property (nonatomic) long long policy;

+ (long long)arbitratePolicyForPrioritizedPolicies:(id)a0;
+ (id)prioritizedPoliciesForAppPolicy:(id)a0 appCategoryPolicy:(id)a1 bundleIdentifiers:(id)a2 categoryPolicy:(id)a3 categoryIdentifiers:(id)a4 webPolicy:(id)a5 webCategoryPolicy:(id)a6 webDomains:(id)a7;

- (long long)compare:(id)a0;
- (BOOL)isEqualToPrioritizedPolicy:(id)a0;
- (id)initWithEffectivePolicy:(id)a0 identifier:(id)a1 excludableIdentifiers:(id)a2;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
