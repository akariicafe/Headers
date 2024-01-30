@protocol RBSProcessIdentifier;

@interface RBSProcessIdentifierPredicate : RBSProcessPredicateImpl

@property (readonly, nonatomic) id<RBSProcessIdentifier> identifier;

+ (BOOL)supportsRBSXPCSecureCoding;

- (id)processPredicate;
- (BOOL)matchesProcess:(id)a0;
- (void).cxx_destruct;
- (id)initWithRBSXPCCoder:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
