@class RBSProcessPredicate;

@interface RBSPreventLaunchLimitation : RBSLimitation

@property (readonly, nonatomic) RBSProcessPredicate *predicate;

+ (id)limitationWithPredicate:(id)a0;

- (void).cxx_destruct;
- (id)initWithRBSXPCCoder:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (unsigned long long)hash;
- (id)_initWithPredicate:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
