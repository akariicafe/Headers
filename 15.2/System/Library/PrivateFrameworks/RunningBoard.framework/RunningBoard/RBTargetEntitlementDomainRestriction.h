@class NSString;

@interface RBTargetEntitlementDomainRestriction : RBDomainRestriction {
    NSString *_entitlement;
}

+ (id)domainRestrictionForDictionary:(id)a0 withError:(id *)a1;

- (id)allEntitlements;
- (id)description;
- (BOOL)allowsContext:(id)a0 withError:(id *)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)_initWithEntitlement:(id)a0;

@end
