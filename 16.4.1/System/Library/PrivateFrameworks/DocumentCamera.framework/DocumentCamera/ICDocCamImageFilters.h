@interface ICDocCamImageFilters : NSObject

+ (id)filteredImage:(id)a0 imageFilterType:(short)a1;
+ (id)filteredImage:(id)a0 orientation:(long long)a1 imageFilterType:(short)a2;
+ (id)imageWithRGBColorspaceFromImage:(id)a0;
+ (id)perspectiveCorrectedImageFromImage:(id)a0 normalizedImageQuad:(id)a1;
+ (id)bradleyAdaptiveThreshold:(id)a0;
+ (id)bradleyAdaptiveThreshold:(id)a0 orientation:(long long)a1;
+ (id)bradleyAdaptiveThresholdWithBlur:(id)a0 orientation:(long long)a1;
+ (id)colorDocument:(id)a0 orientation:(long long)a1;
+ (id)convertImageToGrayScale:(id)a0;
+ (id)grayscale:(id)a0 orientation:(long long)a1;
+ (id)grayscaleDocument:(id)a0 orientation:(long long)a1;
+ (id)imageFilterNames;
+ (short)imageFilterTypeFromName:(id)a0;
+ (short)imageFilterTypeFromNonLocalizedName:(id)a0;
+ (id)localizedImageFilterNameForName:(id)a0;
+ (id)localizedImageFilterNameForType:(short)a0;
+ (id)nonLocalizedImageFilterNameForType:(short)a0;
+ (id)nonLocalizedImageFilterNames;
+ (id)perspectiveCorrectedCIImageFromCIImage:(id)a0 imageQuad:(id)a1;
+ (id)perspectiveCorrectedImageFromImage:(id)a0 imageQuad:(id)a1;
+ (id)sharedCoreImageContext;
+ (id)whiteboardAndSaturation:(id)a0 orientation:(long long)a1;
+ (id)whiteboardFilter:(id)a0 orientation:(long long)a1;

@end
