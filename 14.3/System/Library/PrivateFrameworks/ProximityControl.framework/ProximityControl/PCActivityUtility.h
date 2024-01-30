@interface PCActivityUtility : NSObject

+ (id)iconForBundleIdentifier:(id)a0;
+ (id)order:(id)a0;
+ (id)composedImageFor:(id)a0;
+ (id)deviceNameFor:(id)a0;
+ (id)activityFrom:(id)a0;
+ (id)overlayImage:(id)a0 on:(id)a1 of:(struct CGSize { double x0; double x1; })a2;
+ (id)formattedDurationFor:(double)a0;
+ (BOOL)activity:(id)a0 isLessThan:(id)a1;
+ (id)composedImageFor:(id)a0 assetType:(long long)a1;

@end
