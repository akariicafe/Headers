@class NSSet;

@interface RBSCompoundAllPredicate : RBSProcessPredicateImpl {
    NSSet *_predicates;
}

+ (BOOL)supportsRBSXPCSecureCoding;

- (BOOL)matchesProcess:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)processIdentifier;

@end
