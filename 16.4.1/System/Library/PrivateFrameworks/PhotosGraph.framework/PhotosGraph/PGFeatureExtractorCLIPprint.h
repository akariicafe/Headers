@interface PGFeatureExtractorCLIPprint : PGAssetFeatureExtractor

- (id)featureNames;
- (id)name;
- (id)floatVectorWithEntity:(id)a0 error:(id *)a1;
- (id)_floatArrayFromSceneprint:(id)a0;
- (long long)featureLength;
- (id)featureValuesForAssets:(id)a0 error:(id *)a1;

@end
