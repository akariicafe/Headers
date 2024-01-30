@interface PGFeatureExtractorPhotoLibrarySize : PGFeatureExtractor

+ (BOOL)preCalculatePhotoLibrarySizeWithPhotoLibrary:(id)a0;
+ (id)_allAssetsOfType:(long long)a0 withOptions:(id)a1;
+ (void)resetPreCalculatedPhotoLibrarySize;
+ (unsigned long long)preCalculatedPhotoLibrarySize;
+ (void)setPreCalculatedPhotoLibrarySize:(unsigned long long)a0;

- (id)featureNames;
- (id)name;
- (long long)featureLength;
- (id)floatVectorWithEntity:(id)a0 error:(id *)a1;

@end
