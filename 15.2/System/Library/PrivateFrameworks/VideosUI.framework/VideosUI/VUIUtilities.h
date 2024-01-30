@interface VUIUtilities : NSObject

+ (BOOL)isTVApp;
+ (id)randomColor;
+ (double)scaleContentSizeValue:(double)a0 forTraitCollection:(id)a1;
+ (BOOL)shouldInvalidateLayoutWithPreviousTraitCollection:(id)a0 newTraitCollection:(id)a1;
+ (double)imageCornerRadiusWithStyle:(long long)a0;
+ (id)placeholderImageResourceName:(long long)a0;
+ (struct CGSize { double x0; double x1; })imageSizeWithAspectRatio:(double)a0 scaleToSize:(struct CGSize { double x0; double x1; })a1;
+ (BOOL)isIpadInterface;
+ (double)scaleContentSizeValue:(double)a0 forTraitCollection:(id)a1 maximumContentSizeCategory:(id)a2;
+ (double)libraryCategoryListWidth;
+ (BOOL)isInFullscreenOrPipPlayback;
+ (double)libraryCategoryListWidthForWindowWidth:(double)a0;
+ (BOOL)isIpadPortrait;
+ (unsigned long long)minimumNumberOfItemsToEnableSeeAllButton;
+ (long long)textAlignmentWithSemanticContentAttribute:(long long)a0;
+ (id)VideosUIBundle;
+ (void)gradientConfigForCollection:(id)a0 gradientMask:(long long)a1 properties:(id)a2 configuration:(struct { struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x0; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x1; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x2; } *)a3;
+ (struct TVCornerRadii { double x0; double x1; double x2; double x3; })imageCornerRadiiWithStyle:(long long)a0;
+ (double)libraryListMarginToGrid;
+ (id)colorFromRGBStr:(id)a0;
+ (id)colorFromHexStr:(id)a0;
+ (long long)interfaceStyleFromTheme:(id)a0 defaultInterfaceStyle:(long long)a1;
+ (id)gradientLayerLocationsFromSpacings:(id)a0 height:(double)a1;
+ (id)getOSVersion;
+ (BOOL)isInRetailDemoMode;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })vuiRectCenteredXInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 boundsToCenterIn:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
