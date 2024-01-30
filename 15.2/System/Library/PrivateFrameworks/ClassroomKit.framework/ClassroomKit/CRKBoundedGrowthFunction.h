@protocol CRKGrowthFunction;

@interface CRKBoundedGrowthFunction : NSObject <CRKGrowthFunction>

@property (readonly, nonatomic) id<CRKGrowthFunction> growthFunction;
@property (readonly, nonatomic) double lowerBound;
@property (readonly, nonatomic) double upperBound;

- (void).cxx_destruct;
- (double)evaluateWithValue:(double)a0;
- (id)initWithGrowthFunction:(id)a0 lowerBound:(double)a1 upperBound:(double)a2;

@end
