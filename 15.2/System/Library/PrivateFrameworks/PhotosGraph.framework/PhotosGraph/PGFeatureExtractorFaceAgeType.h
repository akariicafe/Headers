@interface PGFeatureExtractorFaceAgeType : PGFaceFeatureExtractor

- (id)featureNames;
- (id)name;
- (long long)featureLength;
- (id)floatMatrixWithEntities:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (id)defaultFloatVectorWithError:(id *)a0;
- (id)_floatVectorForFaceAgeType:(unsigned short)a0;

@end
