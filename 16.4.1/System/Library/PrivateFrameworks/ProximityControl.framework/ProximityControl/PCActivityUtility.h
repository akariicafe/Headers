@interface PCActivityUtility : NSObject

+ (id)composedImageFor:(id)a0 assetType:(long long)a1;
+ (BOOL)activity:(id)a0 isLessThan:(id)a1;
+ (id)activityFrom:(id)a0;
+ (id)composedImageFor:(id)a0;
+ (id)composedImageWithArtworkFor:(id)a0 assetType:(long long)a1;
+ (id)composedImageWithDeviceImage:(id)a0 badgeImage:(id)a1;
+ (id)deviceNameFor:(id)a0;
+ (id)disambiguationButtonImageForActivity:(id)a0;
+ (id)formattedDurationFor:(double)a0;
+ (id)iconForBundleIdentifier:(id)a0;
+ (id)imageForAssetType:(long long)a0;
+ (id)order:(id)a0;
+ (id)scaleImageIfNeeded:(id)a0 toFitSize:(struct CGSize { double x0; double x1; })a1 withCornerRadius:(double)a2;

@end
