@class NSSet;

@interface RBSProcessBundleIdentifiersPredicate : RBSProcessPredicateImpl

@property (readonly, nonatomic) NSSet *identifiers;

+ (BOOL)supportsRBSXPCSecureCoding;

- (id)initWithIdentifiers:(id)a0;
- (id)processPredicate;
- (BOOL)matchesProcess:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
