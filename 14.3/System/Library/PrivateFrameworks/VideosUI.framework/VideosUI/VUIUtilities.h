@interface VUIUtilities : NSObject

+ (BOOL)isTVApp;
+ (id)randomColor;
+ (long long)textAlignmentWithSemanticContentAttribute:(long long)a0;
+ (id)placeholderImageResourceName:(long long)a0;
+ (struct TVCornerRadii { double x0; double x1; double x2; double x3; })imageCornerRadiiWithStyle:(long long)a0;
+ (double)imageCornerRadiusWithStyle:(long long)a0;
+ (BOOL)contentSizeCategoryIsAccessibility:(id)a0;
+ (BOOL)isAXLargeEnabled:(id)a0;
+ (BOOL)shouldInvalidateLayoutWithPreviousTraitCollection:(id)a0 newTraitCollection:(id)a1;
+ (double)scaleContentSizeValue:(double)a0 forTraitCollection:(id)a1;
+ (struct CGSize { double x0; double x1; })imageSizeWithAspectRatio:(double)a0 scaleToSize:(struct CGSize { double x0; double x1; })a1;
+ (BOOL)isIpadLayout;
+ (BOOL)isAXSmallEnabled:(id)a0;
+ (double)scaleContentSizeValue:(double)a0 forTraitCollection:(id)a1 maximumContentSizeCategory:(id)a2;
+ (id)colorFromRGBStr:(id)a0;
+ (long long)interfaceStyleFromTheme:(id)a0 defaultInterfaceStyle:(long long)a1;
+ (id)VideosUIBundle;
+ (double)libraryCategoryListWidth;
+ (double)libraryCategoryListWidthForWindowWidth:(double)a0;
+ (id)createImageProxyForResourceObject:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1;
+ (unsigned long long)minimumNumberOfItemsToEnableSeeAllButton;
+ (BOOL)isInFullscreenOrPipPlayback;
+ (void)gradientConfigForCollection:(id)a0 gradientMask:(long long)a1 properties:(id)a2 configuration:(struct { struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x0; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x1; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x2; } *)a3;
+ (double)libraryListMarginToGrid;
+ (id)colorFromHexStr:(id)a0;
+ (id)gradientLayerLocationsFromSpacings:(id)a0 height:(double)a1;
+ (id)getOSVersion;

@end
