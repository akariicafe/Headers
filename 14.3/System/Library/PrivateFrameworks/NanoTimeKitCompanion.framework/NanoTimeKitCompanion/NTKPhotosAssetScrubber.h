@interface NTKPhotosAssetScrubber : NSObject

- (BOOL)_scrubPhotoAssetAtURL:(id)a0 toDestinationURL:(id)a1 error:(id *)a2;
- (BOOL)_scrubVideoAssetAtURL:(id)a0 toDestinationURL:(id)a1 error:(id *)a2;
- (BOOL)scrubAssetAtURL:(id)a0 toDestinationURL:(id)a1 error:(id *)a2;

@end
