@interface RBSProcessIntPredicate : RBSProcessPredicateImpl

@property (readonly, nonatomic) unsigned long long identifier;

+ (BOOL)supportsRBSXPCSecureCoding;

- (id)processPredicate;
- (BOOL)matchesProcess:(id)a0;
- (id)initWithIdentifier:(unsigned long long)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
