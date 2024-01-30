@interface RBSCPUMaximumUsageLimitation : RBSLimitation

@property (readonly, nonatomic) unsigned char role;
@property (readonly, nonatomic) unsigned long long percentage;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) unsigned long long violationPolicy;

+ (id)limitationForRole:(unsigned char)a0 withPercentage:(unsigned long long)a1 duration:(double)a2 violationPolicy:(unsigned long long)a3;

- (id)initWithRBSXPCCoder:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
