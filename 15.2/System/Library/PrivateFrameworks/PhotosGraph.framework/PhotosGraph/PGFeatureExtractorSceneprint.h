@interface PGFeatureExtractorSceneprint : PGAssetFeatureExtractor

- (id)featureNames;
- (id)name;
- (long long)featureLength;
- (id)floatVectorWithEntity:(id)a0 error:(id *)a1;
- (id)_floatArrayFromSceneprint:(id)a0;
- (id)featureValuesForAssets:(id)a0 error:(id *)a1;

@end
