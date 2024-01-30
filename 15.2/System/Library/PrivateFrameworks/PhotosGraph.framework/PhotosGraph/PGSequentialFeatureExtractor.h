@class NSArray, MAFeatureExtractor;

@interface PGSequentialFeatureExtractor : MAFeatureExtractor

@property (readonly, nonatomic) MAFeatureExtractor *featureExtractor;
@property (readonly, nonatomic) NSArray *featureTransformers;

- (id)featureNames;
- (void).cxx_destruct;
- (id)name;
- (long long)featureLength;
- (id)floatVectorWithEntity:(id)a0 error:(id *)a1;
- (id)defaultFloatVectorWithError:(id *)a0;
- (BOOL)_generateError:(id *)a0 code:(long long)a1 message:(id)a2 underlyingError:(id)a3;
- (id)initWithFeatureExtractor:(id)a0 featureTransformers:(id)a1;
- (id)_transformFloatVector:(id)a0 error:(id *)a1;

@end
