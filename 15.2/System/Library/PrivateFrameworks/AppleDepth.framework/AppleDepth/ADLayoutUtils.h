@interface ADLayoutUtils : NSObject

+ (unsigned long long)layoutForSize:(struct CGSize { double x0; double x1; })a0;
+ (unsigned long long)transposeLayout:(unsigned long long)a0;
+ (BOOL)aspectRatio:(float)a0 matchesAspectRatio:(float)a1;
+ (float)aspectRatioForKnownLayout:(unsigned long long)a0;
+ (BOOL)isLandscape:(unsigned long long)a0;
+ (BOOL)isLandscapeSize:(struct CGSize { double x0; double x1; })a0;
+ (unsigned long long)adjustLayout:(unsigned long long)a0 sourceOrientation:(unsigned int)a1 toRotationPreference:(unsigned long long)a2;

@end
