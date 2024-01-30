@interface VUICoreUtilities : NSObject

+ (id)URLForResource:(id)a0;
+ (id)randomColor;
+ (id)uiContentSizeCategoryFor:(unsigned long long)a0;
+ (double)scaleContentSizeValue:(double)a0 forTraitCollection:(id)a1;
+ (struct _VUICornerRadii { double x0; double x1; double x2; double x3; })radiiFromRadius:(double)a0;
+ (unsigned long long)vuiContentSizeCategoryFor:(id)a0;
+ (double)scaleContentSizeValue:(double)a0 forTraitCollection:(id)a1 maximumContentSizeCategory:(unsigned long long)a2;
+ (double)radiusFromCornerRadii:(struct _VUICornerRadii { double x0; double x1; double x2; double x3; })a0;
+ (id)imageForResource:(id)a0 accessibilityDescription:(id)a1;
+ (id)VideosUIBundle;
+ (void)vuiColor:(id)a0 getRed:(double *)a1 green:(double *)a2 blue:(double *)a3 alpha:(double *)a4;
+ (void)image:(id)a0 didCompleteLoadingForCache:(long long)a1 requestRecord:(id)a2;
+ (BOOL)canHandleDecodingOnRenderThread;
+ (id)_URLForResource:(id)a0 inBundle:(id)a1;
+ (BOOL)runningAnInternalBuild;
+ (const struct CGPath { } *)shadowPathWithCornerRadii:(struct _VUICornerRadii { double x0; double x1; double x2; double x3; })a0 andScaledSize:(struct CGSize { double x0; double x1; })a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })centerRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (id)TVUIKitBundle;
+ (double)focusedSizeIncreaseForSize:(struct CGSize { double x0; double x1; })a0 upscaleFactor:(double)a1;
+ (BOOL)radiiIsZero:(struct _VUICornerRadii { double x0; double x1; double x2; double x3; })a0;
+ (const struct CGPath { } *)createPathForRadii:(struct _VUICornerRadii { double x0; double x1; double x2; double x3; })a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 isContinuous:(BOOL)a2;
+ (id)_getImageFromURLorBundle:(id)a0;
+ (id)VideosUICoreBundle;
+ (id)_imageForResource:(id)a0;
+ (id)_vuiCoreResourceMap;
+ (id)mobileGestaltStringForKey:(struct __CFString { } *)a0;
+ (unsigned long long)vuiUserInterfaceStyleForInterfaceStyle:(long long)a0;
+ (id)defaultPlaceholderImageForUserInterfaceStyle:(unsigned long long)a0;

@end
