@class PGGraph, MAFeatureExtractor;

@interface PGFeatureExtractorGraphRelations : PGAssetFeatureExtractor

@property (readonly, nonatomic) PGGraph *graph;
@property (readonly, nonatomic) MAFeatureExtractor *featureExtractor;

- (id)featureNames;
- (void).cxx_destruct;
- (id)name;
- (long long)featureLength;
- (id)floatVectorWithEntity:(id)a0 error:(id *)a1;
- (BOOL)_generateError:(id *)a0 withCode:(long long)a1 andMessage:(id)a2;
- (id)initWithGraph:(id)a0 featureExtractor:(id)a1;
- (id)floatVectorWithMomentNodeCollection:(id)a0 error:(id *)a1;

@end
