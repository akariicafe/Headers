@class NSSet;

@interface RBSCompoundPredicate : RBSProcessPredicateImpl {
    NSSet *_predicates;
}

+ (BOOL)supportsRBSXPCSecureCoding;

- (BOOL)matchesProcess:(id)a0;
- (void).cxx_destruct;
- (id)initWithRBSXPCCoder:(id)a0;
- (id)initWithPredicates:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)processIdentifier;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
