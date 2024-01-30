@interface RBSProcessPlatformPredicate : RBSProcessPredicateImpl

@property (readonly, nonatomic) int platform;

+ (BOOL)supportsRBSXPCSecureCoding;

- (id)initWithPlatform:(int)a0;
- (id)processPredicate;
- (BOOL)matchesProcess:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
