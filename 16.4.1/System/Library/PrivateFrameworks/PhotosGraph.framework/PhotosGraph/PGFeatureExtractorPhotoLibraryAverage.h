@class NSArray, MAFeatureExtractor;

@interface PGFeatureExtractorPhotoLibraryAverage : PGFeatureExtractor

@property (readonly, nonatomic) NSArray *assetFetchOptionPropertySet;
@property (readonly, nonatomic) MAFeatureExtractor *assetFeatureExtractor;
@property (readonly, nonatomic) NSArray *featureNames;

+ (void)resetPreCalculatedFeatureVector;
+ (BOOL)preCalculateFeatureVectorWithPhotoLibrary:(id)a0 assetFeatureExtractor:(id)a1 assetFetchOptionPropertySet:(id)a2 error:(id *)a3;
+ (id)preCalculatedFloatVector;
+ (void)setPreCalculatedFloatVector:(id)a0;

- (void).cxx_destruct;
- (id)name;
- (id)floatVectorWithEntity:(id)a0 error:(id *)a1;
- (long long)featureLength;
- (id)initWithAssetFeatureExtractor:(id)a0 assetFetchOptionPropertySet:(id)a1;

@end
