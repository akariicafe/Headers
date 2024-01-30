@class RBSProcessIdentity;

@interface RBSProcessIdentityPredicate : RBSProcessPredicateImpl

@property (readonly, nonatomic) RBSProcessIdentity *identity;

+ (BOOL)supportsRBSXPCSecureCoding;

- (id)processPredicate;
- (BOOL)matchesProcess:(id)a0;
- (void).cxx_destruct;
- (id)initWithRBSXPCCoder:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithIdentity:(id)a0;

@end
