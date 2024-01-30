@interface HMDXPCBackgroundMessagePolicy : HMFMessagePolicy

@property (readonly) BOOL requiresEntitlement;

+ (id)defaultPolicy;
+ (id)policyWithEntitlementRequirement:(BOOL)a0;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)__initWithEntitlementRequirement:(BOOL)a0;

@end
