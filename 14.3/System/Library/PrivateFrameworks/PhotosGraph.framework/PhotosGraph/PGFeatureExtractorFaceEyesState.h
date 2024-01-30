@interface PGFeatureExtractorFaceEyesState : PGFaceFeatureExtractor

- (id)featureNames;
- (id)name;
- (long long)featureLength;
- (id)floatVectorWithEntity:(id)a0 error:(id *)a1;
- (id)defaultFloatVectorWithError:(id *)a0;

@end
