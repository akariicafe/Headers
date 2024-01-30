@interface CRKExponentialGrowthFunction : NSObject <CRKGrowthFunction>

@property (readonly, nonatomic) double growthRate;

- (double)evaluateWithValue:(double)a0;
- (id)initWithGrowthRate:(double)a0;

@end
