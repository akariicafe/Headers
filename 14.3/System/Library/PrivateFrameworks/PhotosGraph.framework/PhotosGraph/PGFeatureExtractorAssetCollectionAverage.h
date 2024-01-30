@class NSArray, MAFeatureExtractor, NSString;

@interface PGFeatureExtractorAssetCollectionAverage : PGAssetCollectionFeatureExtractor {
    NSString *_name;
}

@property (readonly, nonatomic) MAFeatureExtractor *assetFeatureExtractor;
@property (readonly, nonatomic) NSArray *assetFetchOptionPropertySet;

- (void).cxx_destruct;
- (id)featureNames;
- (id)name;
- (long long)featureLength;
- (id)floatVectorWithEntity:(id)a0 error:(id *)a1;
- (id)initWithAssetFeatureExtractor:(id)a0 assetFetchOptionPropertySet:(id)a1 name:(id)a2;
- (BOOL)_generateError:(id *)a0 code:(long long)a1 message:(id)a2 underlyingError:(id)a3;

@end
