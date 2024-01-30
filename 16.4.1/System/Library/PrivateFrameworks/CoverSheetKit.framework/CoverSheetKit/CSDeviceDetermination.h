@interface CSDeviceDetermination : NSObject

+ (unsigned long long)_zoomAwareCategoryForDevice:(unsigned long long)a0 zoomVariant:(unsigned long long)a1;
+ (unsigned long long)effectiveCategory;
+ (unsigned long long)categoryFromScreenSize;
+ (BOOL)_screenScaleMatchesZoomScale:(double)a0;
+ (BOOL)isCategoryPad:(unsigned long long)a0;
+ (double)_zoomScaleForBaseDevice:(unsigned long long)a0;
+ (unsigned long long)baseCategory;
+ (BOOL)isCategoryPhone:(unsigned long long)a0;

@end
