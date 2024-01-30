@class RBSProcessPredicateImpl;

@interface RBSNotPredicate : RBSProcessPredicateImpl {
    RBSProcessPredicateImpl *_predicate;
}

+ (BOOL)supportsRBSXPCSecureCoding;

- (id)processIdentifier;
- (id)initWithRBSXPCCoder:(id)a0;
- (id)processIdentifiers;
- (BOOL)matchesProcess:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
