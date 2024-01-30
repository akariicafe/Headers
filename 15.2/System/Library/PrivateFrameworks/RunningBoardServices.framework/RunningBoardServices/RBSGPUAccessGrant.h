@interface RBSGPUAccessGrant : RBSGrant

@property (readonly, nonatomic) unsigned char role;

+ (id)grant;
+ (id)grantWithRole:(unsigned char)a0;

- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)_initWithRole:(unsigned char)a0;
- (unsigned long long)hash;

@end
