@interface PFMediaUtilities : NSObject

@property (class, readonly) long long rawSourceMaximumPixelCountForBackgroundProcessing;
@property (class, readonly) long long rawSourceMaximumPixelCountForInteractiveEditing;
@property (class, readonly) long long devicePerformanceMemoryClass;

+ (BOOL)isValidAVFileForURL:(id)a0;
+ (id)imagePropertiesFromImageSource:(struct CGImageSource { } *)a0 atIndex:(unsigned long long)a1;
+ (BOOL)isHeifUTI:(id)a0;
+ (BOOL)isImageUTI:(id)a0;
+ (BOOL)isGifUTI:(id)a0;
+ (id)stringFromFourCharCode:(unsigned int)a0;
+ (BOOL)isPngUTI:(id)a0;
+ (BOOL)isQuicktimeMovieUTI:(id)a0;
+ (BOOL)isValidExtension:(id)a0 forUTI:(id)a1;
+ (BOOL)isTiffUTI:(id)a0;
+ (BOOL)UTIRequiresRasterizationDPI:(id)a0;
+ (id)UTIForURL:(id)a0 error:(id *)a1;
+ (struct CGSize { double x0; double x1; })maximumImageSizeFromProperties:(id)a0;
+ (BOOL)isPsdUTI:(id)a0;
+ (id)mainVideoTrackForAsset:(id)a0;
+ (long long)defaultRasterizationDPI;
+ (BOOL)isMovieUTI:(id)a0;
+ (BOOL)isValidImageFileForURL:(id)a0;
+ (BOOL)embeddedJPEGSuitableForDerivatives:(id)a0 imageProperties:(id)a1;
+ (id)resourceModelUTIForExtension:(id)a0;
+ (id)preferredExtensionForUTI:(id)a0;
+ (BOOL)isAudioUTI:(id)a0;
+ (BOOL)isJpeg2000UTI:(id)a0;
+ (BOOL)isRawUTI:(id)a0;
+ (BOOL)canLoadAssetAsRawForInteractiveEditingWithImageProperties:(id)a0;
+ (BOOL)isPdfUTI:(id)a0;
+ (BOOL)canGenerateImageDerivativesFromUTI:(id)a0;
+ (id)UTIForHFSType:(unsigned int)a0;
+ (id)UTIForExtension:(id)a0;
+ (id)imagePropertiesFromImageSource:(struct CGImageSource { } *)a0;
+ (BOOL)isJpegUTI:(id)a0;

@end
