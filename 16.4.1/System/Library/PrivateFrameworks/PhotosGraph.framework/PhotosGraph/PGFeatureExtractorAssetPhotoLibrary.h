@class MAFeatureExtractor;

@interface PGFeatureExtractorAssetPhotoLibrary : PGFeatureExtractor

@property (readonly, nonatomic) MAFeatureExtractor *photoLibraryFeatureExtractor;

- (id)featureNames;
- (void).cxx_destruct;
- (id)name;
- (id)floatVectorWithEntity:(id)a0 error:(id *)a1;
- (long long)featureLength;
- (id)initWithPhotoLibraryFeatureExtractor:(id)a0;

@end
