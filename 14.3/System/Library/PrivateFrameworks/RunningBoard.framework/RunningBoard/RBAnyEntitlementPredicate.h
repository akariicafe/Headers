@class NSArray;

@interface RBAnyEntitlementPredicate : RBEntitlementPredicate {
    NSArray *_predicate;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithArray:(id)a0 forDomain:(id)a1 attribute:(id)a2 errors:(id)a3;
- (id)description;
- (id)allEntitlements;
- (unsigned long long)count;
- (BOOL)matchesEntitlements:(id)a0;

@end
