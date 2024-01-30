@class NTKPhotosResourceDirectorySanitizerValidationStrategy, NTKPhotosReader, NSURL, NTKPhotoResourcesManifest;

@interface NTKPhotosResourceDirectorySanitizer : NSObject {
    NSURL *_resourceDirectoryURL;
    NTKPhotoResourcesManifest *_manifest;
    NTKPhotosReader *_reader;
    NTKPhotosResourceDirectorySanitizerValidationStrategy *_strategy;
}

- (void).cxx_destruct;
- (id)_createAssetsManifest;
- (BOOL)_manifestIsValid:(id *)a0;
- (id)_createPhotosReader;
- (BOOL)_readerIsValid;
- (BOOL)_imageListItemIsValid:(id)a0;
- (BOOL)_imageListItemContainsValidImage:(id)a0;
- (BOOL)_imageListItemContainsValidIrisVideo:(id)a0;
- (BOOL)_imageListItemHasValidCropValues:(id)a0;
- (BOOL)_imageListItemHasValidAnalysisValues:(id)a0;
- (BOOL)_resourceWithName:(id)a0 isValidMediaAssetOfType:(id)a1 withMinFileSize:(unsigned long long)a2 maxFileSize:(unsigned long long)a3;
- (id)initWithResourceDirectoryURL:(id)a0 validationStrategy:(id)a1;
- (BOOL)resourceDirectoryIsValid:(id *)a0;

@end
