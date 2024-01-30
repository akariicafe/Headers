@interface PGFeatureExtractorImageAspectRatio : PGAssetFeatureExtractor

- (id)featureNames;
- (id)name;
- (long long)featureLength;
- (id)floatVectorWithEntity:(id)a0 error:(id *)a1;
- (BOOL)_generateError:(id *)a0 withCode:(long long)a1 andMessage:(id)a2;

@end
