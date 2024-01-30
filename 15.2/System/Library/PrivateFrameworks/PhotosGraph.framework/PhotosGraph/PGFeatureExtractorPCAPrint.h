@interface PGFeatureExtractorPCAPrint : PGAssetFeatureExtractor

- (id)featureNames;
- (id)name;
- (long long)featureLength;
- (id)floatMatrixWithEntities:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (id)_floatArrayFromSceneprint:(id)a0;
- (BOOL)_generateError:(id *)a0 code:(long long)a1 message:(id)a2 underlyingError:(id)a3;

@end
