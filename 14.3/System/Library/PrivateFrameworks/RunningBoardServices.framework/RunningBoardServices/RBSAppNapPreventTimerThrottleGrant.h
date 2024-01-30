@interface RBSAppNapPreventTimerThrottleGrant : RBSGrant

@property (readonly, nonatomic) unsigned char tier;

+ (id)grantWithTier:(unsigned char)a0;

- (id)initWithRBSXPCCoder:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
