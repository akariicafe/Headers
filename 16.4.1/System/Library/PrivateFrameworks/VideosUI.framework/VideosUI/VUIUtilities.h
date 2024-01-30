@interface VUIUtilities : NSObject

+ (BOOL)isTVApp;
+ (id)VideosUIBundle;
+ (id)randomColor;
+ (double)scaleContentSizeValue:(double)a0 forTraitCollection:(id)a1;
+ (double)scaleContentSizeValue:(double)a0 forTraitCollection:(id)a1 maximumContentSizeCategory:(id)a2;
+ (BOOL)isInRetailDemoMode;
+ (BOOL)isIpadInterface;
+ (id)colorFromHexStr:(id)a0;
+ (id)colorFromRGBStr:(id)a0;
+ (id)getCurrentQueueLabel;
+ (id)getOSVersion;
+ (void)gradientConfigForCollection:(id)a0 gradientMask:(long long)a1 properties:(id)a2 configuration:(struct { struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x0; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x1; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x2; } *)a3;
+ (id)gradientLayerLocationsFromSpacings:(id)a0 height:(double)a1;
+ (struct TVCornerRadii { double x0; double x1; double x2; double x3; })imageCornerRadiiWithStyle:(long long)a0;
+ (double)imageCornerRadiusWithStyle:(long long)a0;
+ (struct CGSize { double x0; double x1; })imageSizeWithAspectRatio:(double)a0 scaleToSize:(struct CGSize { double x0; double x1; })a1;
+ (long long)interfaceStyleFromTheme:(id)a0 defaultInterfaceStyle:(long long)a1;
+ (BOOL)isInFullscreenOrPipPlayback;
+ (BOOL)isIpadPortrait;
+ (BOOL)isPortraitIgnoringFlatOrientation:(long long)a0 viewSize:(struct CGSize { double x0; double x1; })a1;
+ (BOOL)isSUIEnabled;
+ (double)libraryCategoryListWidth;
+ (double)libraryCategoryListWidthForWindowWidth:(double)a0;
+ (double)libraryListMarginToGrid;
+ (unsigned long long)minimumNumberOfItemsToEnableSeeAllButton;
+ (id)placeholderImageResourceName:(long long)a0;
+ (BOOL)shouldInvalidateLayoutWithPreviousTraitCollection:(id)a0 newTraitCollection:(id)a1;
+ (long long)textAlignmentWithSemanticContentAttribute:(long long)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })vuiRectCenteredXInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 boundsToCenterIn:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 offset:(double)a2;

@end
