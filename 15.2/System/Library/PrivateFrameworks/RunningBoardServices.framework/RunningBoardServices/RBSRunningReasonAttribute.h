@interface RBSRunningReasonAttribute : RBSAttribute

@property (readonly, nonatomic) unsigned long long runningReason;

+ (id)withReason:(unsigned long long)a0;

- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
