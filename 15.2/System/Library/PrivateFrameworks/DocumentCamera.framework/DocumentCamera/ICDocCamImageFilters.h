@interface ICDocCamImageFilters : NSObject

+ (id)perspectiveCorrectedImageFromImage:(id)a0 normalizedImageQuad:(id)a1;
+ (id)filteredImage:(id)a0 imageFilterType:(short)a1;
+ (id)filteredImage:(id)a0 orientation:(long long)a1 imageFilterType:(short)a2;
+ (id)imageWithRGBColorspaceFromImage:(id)a0;
+ (id)localizedImageFilterNameForType:(short)a0;
+ (id)sharedCoreImageContext;
+ (id)nonLocalizedImageFilterNameForType:(short)a0;
+ (id)imageFilterNames;
+ (id)nonLocalizedImageFilterNames;
+ (short)imageFilterTypeFromName:(id)a0;
+ (id)convertImageToGrayScale:(id)a0;
+ (id)bradleyAdaptiveThreshold:(id)a0;
+ (id)colorDocument:(id)a0 orientation:(long long)a1;
+ (id)grayscaleDocument:(id)a0 orientation:(long long)a1;
+ (id)bradleyAdaptiveThreshold:(id)a0 orientation:(long long)a1;
+ (id)whiteboardFilter:(id)a0 orientation:(long long)a1;
+ (id)perspectiveCorrectedCIImageFromCIImage:(id)a0 imageQuad:(id)a1;
+ (id)perspectiveCorrectedImageFromImage:(id)a0 imageQuad:(id)a1;
+ (short)imageFilterTypeFromNonLocalizedName:(id)a0;
+ (id)localizedImageFilterNameForName:(id)a0;
+ (id)whiteboardAndSaturation:(id)a0 orientation:(long long)a1;
+ (id)grayscale:(id)a0 orientation:(long long)a1;
+ (id)bradleyAdaptiveThresholdWithBlur:(id)a0 orientation:(long long)a1;

@end
