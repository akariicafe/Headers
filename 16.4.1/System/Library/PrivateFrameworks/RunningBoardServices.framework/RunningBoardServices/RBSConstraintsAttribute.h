@interface RBSConstraintsAttribute : RBSAttribute

@property (readonly, nonatomic) unsigned long long constraints;

+ (id)attributeWithConstraints:(unsigned long long)a0;

- (id)initWithRBSXPCCoder:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;

@end
