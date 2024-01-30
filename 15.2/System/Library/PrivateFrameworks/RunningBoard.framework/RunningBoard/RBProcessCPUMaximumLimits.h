@interface RBProcessCPUMaximumLimits : NSObject

@property (readonly, nonatomic) unsigned long long percentage;
@property (readonly, nonatomic) unsigned long long duration;
@property (readonly, nonatomic) unsigned long long violationPolicy;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithPercentage:(unsigned long long)a0 duration:(unsigned long long)a1 violationPolicy:(unsigned long long)a2;
- (id)unionLimit:(id)a0;

@end
