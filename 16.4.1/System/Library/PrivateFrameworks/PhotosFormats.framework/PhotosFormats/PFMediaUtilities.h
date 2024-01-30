@interface PFMediaUtilities : NSObject

@property (class, readonly) long long rawSourceMaximumPixelCountForBackgroundProcessing;
@property (class, readonly) long long rawSourceMaximumPixelCountForInteractiveEditing;
@property (class, readonly) long long devicePerformanceMemoryClass;

+ (BOOL)canGenerateImageDerivativesFromType:(id)a0;
+ (BOOL)typeRequiresRasterizationDPI:(id)a0;
+ (BOOL)embeddedJPEGSuitableForDerivativesInImageOfType:(id)a0 url:(id)a1 imageProperties:(id)a2;
+ (BOOL)embeddedJPEGSuitableForDerivativesInRawImageProperties:(id)a0 enforcePixelCountLimits:(BOOL)a1;
+ (BOOL)isValidImageFileForURL:(id)a0;
+ (long long)defaultRasterizationDPI;
+ (id)mainVideoTrackForAsset:(id)a0;
+ (id)imagePropertiesFromImageSource:(struct CGImageSource { } *)a0 atIndex:(unsigned long long)a1;
+ (id)stringFromFourCharCode:(unsigned int)a0;
+ (BOOL)canLoadAssetAsRawForInteractiveEditingWithImageProperties:(id)a0;
+ (id)imagePropertiesFromImageSource:(struct CGImageSource { } *)a0;
+ (struct CGSize { double x0; double x1; })maximumImageSizeFromProperties:(id)a0;
+ (BOOL)isValidAVFileForURL:(id)a0;
+ (id)formattedCameraModelFromCameraModel:(id)a0 cameraMake:(id)a1;

@end
