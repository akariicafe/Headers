@interface RBSAppNapPreventTimerThrottleGrant : RBSAppNapGrant

@property (readonly, nonatomic) unsigned char tier;

+ (id)grant;
+ (id)grantWithTier:(unsigned char)a0;

- (id)initWithRBSXPCCoder:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;

@end
