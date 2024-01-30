@interface VUICoreUtilities : NSObject

+ (id)imageForResource:(id)a0;
+ (id)URLForResource:(id)a0;
+ (double)radiusFromCornerRadii:(struct _VUICornerRadii { double x0; double x1; double x2; double x3; })a0;
+ (const struct CGPath { } *)shadowPathWithCornerRadii:(struct _VUICornerRadii { double x0; double x1; double x2; double x3; })a0 andScaledSize:(struct CGSize { double x0; double x1; })a1;
+ (BOOL)radiiIsZero:(struct _VUICornerRadii { double x0; double x1; double x2; double x3; })a0;
+ (double)scaleContentSizeValue:(double)a0 forTraitCollection:(id)a1;
+ (struct _VUICornerRadii { double x0; double x1; double x2; double x3; })radiiFromRadius:(double)a0;
+ (double)scaleContentSizeValue:(double)a0 forTraitCollection:(id)a1 maximumContentSizeCategory:(id)a2;
+ (id)VideosUIBundle;
+ (void)image:(id)a0 didCompleteLoadingForCache:(long long)a1 requestRecord:(id)a2;
+ (BOOL)canHandleDecodingOnRenderThread;
+ (id)_URLForResource:(id)a0 inBundle:(id)a1;
+ (BOOL)_cornerRadiiWithBorderRadius:(id)a0 cornerRadii:(struct _VUICornerRadii { double x0; double x1; double x2; double x3; } *)a1 imageWidth:(double)a2 imageTreatmentValue:(id)a3 circle:(BOOL *)a4;
+ (BOOL)_cornerRadiiFromImgTreatmentValue:(id)a0 width:(double)a1 cornerRadii:(struct _VUICornerRadii { double x0; double x1; double x2; double x3; } *)a2 circle:(BOOL *)a3;
+ (id)TVUIKitBundle;
+ (double)focusedSizeIncreaseForSize:(struct CGSize { double x0; double x1; })a0 upscaleFactor:(double)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })centerRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (const struct CGPath { } *)createPathForRadii:(struct _VUICornerRadii { double x0; double x1; double x2; double x3; })a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 isContinuous:(BOOL)a2;
+ (id)_getImageFromURLorBundle:(id)a0;
+ (id)defaultPlaceholderImageForUserInterfaceStyle:(long long)a0;
+ (id)VideosUICoreBundle;
+ (id)_imageForResource:(id)a0;
+ (id)_vuiCoreResourceMap;
+ (id)mobileGestaltStringForKey:(struct __CFString { } *)a0;

@end
