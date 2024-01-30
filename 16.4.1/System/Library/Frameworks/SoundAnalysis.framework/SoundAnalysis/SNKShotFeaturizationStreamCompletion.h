@class MLMultiArray;

@interface SNKShotFeaturizationStreamCompletion : NSObject

@property (retain) MLMultiArray *exemplar;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } inferenceWindowSize;

- (void).cxx_destruct;

@end
