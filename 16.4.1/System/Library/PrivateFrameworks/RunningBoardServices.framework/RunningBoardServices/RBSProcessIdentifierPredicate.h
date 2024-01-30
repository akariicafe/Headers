@protocol RBSProcessIdentifier;

@interface RBSProcessIdentifierPredicate : RBSProcessPredicateImpl

@property (readonly, nonatomic) id<RBSProcessIdentifier> identifier;

+ (BOOL)supportsRBSXPCSecureCoding;

- (id)initWithRBSXPCCoder:(id)a0;
- (id)processPredicate;
- (id)initWithIdentifier:(id)a0;
- (BOOL)matchesProcess:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end
