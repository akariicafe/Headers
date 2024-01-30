@interface GKGaussianDistribution : GKRandomDistribution

@property (readonly, nonatomic) float mean;
@property (readonly, nonatomic) float deviation;

- (id)initWithRandomSource:(id)a0 lowestValue:(long long)a1 highestValue:(long long)a2;
- (long long)nextInt;
- (id)initWithRandomSource:(id)a0 mean:(float)a1 deviation:(float)a2;

@end
