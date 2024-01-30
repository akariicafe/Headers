@interface RBSCPUAccessGrant : RBSGrant

@property (readonly, nonatomic) unsigned char role;

+ (id)grantUserInitiated;
+ (id)grantWithUserInteractivity;
+ (id)grantWithRole:(unsigned char)a0;
+ (id)grantWithUserInteractivityAndFocus;
+ (id)grant;

- (id)initWithRBSXPCCoder:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;

@end
