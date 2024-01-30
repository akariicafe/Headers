@class MAFeatureExtractor;

@interface PGFeatureExtractorAssetPhotoLibrary : PGFeatureExtractor

@property (readonly, nonatomic) MAFeatureExtractor *photoLibraryFeatureExtractor;

- (void).cxx_destruct;
- (id)featureNames;
- (id)name;
- (long long)featureLength;
- (id)floatVectorWithEntity:(id)a0 error:(id *)a1;
- (id)initWithPhotoLibraryFeatureExtractor:(id)a0;

@end
