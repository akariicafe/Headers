@interface HMDXPCBackgroundMessagePolicy : HMFMessagePolicy

@property (readonly) BOOL requiresEntitlement;

+ (id)defaultPolicy;
+ (id)policyWithEntitlementRequirement:(BOOL)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)__initWithEntitlementRequirement:(BOOL)a0;

@end
