@interface PGFeatureExtractorFaceSmileType : PGFaceFeatureExtractor

- (id)featureNames;
- (id)name;
- (id)defaultFloatVectorWithError:(id *)a0;
- (id)floatMatrixWithEntities:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (id)_floatVectorForFaceSmileType:(unsigned short)a0;
- (long long)featureLength;

@end
