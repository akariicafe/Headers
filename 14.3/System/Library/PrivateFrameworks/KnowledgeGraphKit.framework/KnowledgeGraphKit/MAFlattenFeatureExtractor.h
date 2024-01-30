@class NSArray, NSString;

@interface MAFlattenFeatureExtractor : MAFeatureExtractor {
    NSString *_name;
    NSArray *_featureNames;
}

@property (readonly, nonatomic) NSArray *featureExtractors;

- (void).cxx_destruct;
- (id)featureNames;
- (id)name;
- (id)floatVectorWithEntity:(id)a0 error:(id *)a1;
- (id)defaultFloatVectorWithError:(id *)a0;
- (id)initWithName:(id)a0 featureExtractors:(id)a1;

@end
