@class NSArray, NSString;

@interface MAFlattenFeatureExtractor : MAFeatureExtractor {
    NSString *_name;
    NSArray *_featureNames;
}

@property (readonly, nonatomic) NSArray *featureExtractors;

- (id)featureNames;
- (void).cxx_destruct;
- (id)name;
- (id)floatMatrixWithEntities:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (id)defaultFloatVectorWithError:(id *)a0;
- (id)initWithName:(id)a0 featureExtractors:(id)a1;

@end
