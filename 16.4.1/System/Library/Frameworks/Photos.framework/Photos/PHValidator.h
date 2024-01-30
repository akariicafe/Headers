@interface PHValidator : NSObject

+ (BOOL)isSupportedAudioAtPath:(id)a0;
+ (BOOL)isSupportedImageAtPath:(id)a0;
+ (BOOL)isSupportedMovieAtPath:(id)a0;
+ (unsigned char)mediaTypeForContentType:(id)a0;
+ (unsigned char)mediaTypeForURL:(id)a0;

- (BOOL)validateData:(id)a0 withOptions:(unsigned long long)a1 error:(id *)a2;
- (BOOL)validateURLs:(id)a0 withOptions:(unsigned long long)a1 error:(id *)a2;
- (BOOL)_validateImageSource:(struct CGImageSource { } *)a0 error:(id *)a1;
- (BOOL)_validateLivePhotoResourceURLs:(id)a0 videoComplementMetadata:(id)a1 error:(id *)a2;
- (BOOL)_validateVideoURL:(id)a0 error:(id *)a1;
- (void)getLivePhotoImageMetadataFromURL:(id)a0 pairingIdentifier:(id *)a1;
- (BOOL)getLivePhotoVideoMetadataFromURL:(id)a0 videoComplementMetadata:(id)a1 pairingIdentifier:(id *)a2 videoDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a3 imageDisplayTime:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a4 error:(id *)a5;
- (BOOL)isValidImagePathExtension:(id)a0;
- (BOOL)isValidVideoPathExtension:(id)a0;
- (BOOL)validateURL:(id)a0 withOptions:(unsigned long long)a1 error:(id *)a2;
- (BOOL)validateURLs:(id)a0 withOptions:(unsigned long long)a1 videoComplementMetadata:(id)a2 error:(id *)a3;

@end
