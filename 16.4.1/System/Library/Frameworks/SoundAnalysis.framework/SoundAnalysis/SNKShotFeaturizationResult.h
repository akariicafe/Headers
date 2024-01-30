@class NSArray, MLMultiArray;

@interface SNKShotFeaturizationResult : NSObject

@property (copy) NSArray *trainingDataEmbeddings;
@property (copy) NSArray *trainingDataLabels;
@property (copy) NSArray *validationDataEmbeddings;
@property (copy) NSArray *validationDataLabels;
@property (retain) MLMultiArray *exemplar;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } inferenceWindowSize;

- (void).cxx_destruct;

@end
