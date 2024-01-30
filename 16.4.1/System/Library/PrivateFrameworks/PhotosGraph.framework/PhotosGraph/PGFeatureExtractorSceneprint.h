@interface PGFeatureExtractorSceneprint : PGAssetFeatureExtractor

- (id)featureNames;
- (id)name;
- (id)floatVectorWithEntity:(id)a0 error:(id *)a1;
- (BOOL)_generateError:(id *)a0 code:(long long)a1 message:(id)a2 underlyingError:(id)a3;
- (long long)featureLength;
- (id)featureValuesForAssets:(id)a0 error:(id *)a1;

@end
