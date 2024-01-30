@class NSArray;

@interface RBCompoundNoneDomainRestriction : RBDomainRestriction {
    NSArray *_restrictions;
}

+ (id)domainRestrictionForDictionary:(id)a0 withError:(id *)a1;

- (BOOL)allowsContext:(id)a0 withError:(id *)a1;
- (id)allEntitlements;
- (id)_initWithRestrictions:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end
