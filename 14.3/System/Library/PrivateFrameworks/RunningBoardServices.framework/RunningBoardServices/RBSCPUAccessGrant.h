@interface RBSCPUAccessGrant : RBSGrant

@property (readonly, nonatomic) unsigned char role;

+ (id)grantUserInitiated;
+ (id)grantWithUserInteractivityAndFocus;
+ (id)grantWithUserInteractivity;
+ (id)grantWithRole:(unsigned char)a0;
+ (id)grant;

- (id)initWithRBSXPCCoder:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
