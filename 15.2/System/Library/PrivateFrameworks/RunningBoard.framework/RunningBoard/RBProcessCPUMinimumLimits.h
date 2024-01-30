@interface RBProcessCPUMinimumLimits : NSObject

@property (readonly, nonatomic) unsigned long long percentage;
@property (readonly, nonatomic) unsigned long long duration;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)unionLimit:(id)a0;
- (id)initWithPercentage:(unsigned long long)a0 duration:(unsigned long long)a1;

@end
