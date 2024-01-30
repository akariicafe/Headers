@interface PGFeatureExtractorFaceSize : PGFaceFeatureExtractor

- (id)featureNames;
- (id)name;
- (id)defaultFloatVectorWithError:(id *)a0;
- (id)floatMatrixWithEntities:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (long long)featureLength;

@end
