@interface RBSJetsamPriorityGrant : RBSGrant

@property (readonly, nonatomic) long long priority;

+ (BOOL)supportsRBSXPCSecureCoding;
+ (id)grantWithBackgroundPriority;
+ (id)grantWithPriority:(long long)a0;
+ (id)grantWithForegroundPriority;

- (id)initWithRBSXPCCoder:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
