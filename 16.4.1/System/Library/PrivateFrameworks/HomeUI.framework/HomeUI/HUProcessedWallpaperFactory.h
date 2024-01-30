@class NSArray, NSString;

@interface HUProcessedWallpaperFactory : NSObject <HFProcessedWallpaperSource>

@property (readonly, copy, nonatomic) NSArray *supportedVariants;
@property (readonly, nonatomic) unsigned long long processVersionNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_defaultBackdropSettings;

- (id)_croppedImageFromWallpaper:(id)a0 image:(id)a1;
- (id)_darkContentBlurredImageForWallpaper:(id)a0 image:(id)a1;
- (id)_darkContentDarkModeBlurredImageForWallpaper:(id)a0 image:(id)a1;
- (id)_imageByApplyingLayerEffects:(id)a0 toImage:(id)a1;
- (id)_layerWithCompositingFilterType:(id)a0 color:(id)a1;
- (id)_lightContentBlurredImageForWallpaper:(id)a0 image:(id)a1;
- (id)_processedImageForWallpaper:(id)a0 image:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_scaledCropRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 wallpaper:(id)a1 image:(id)a2;
- (id)applyCustomFilterForWallpaper:(id)a0 image:(id)a1;
- (id)generateFilteredImageForWallpaper:(id)a0 image:(id)a1;
- (id)processedImageForVariant:(long long)a0 wallpaper:(id)a1 image:(id)a2;

@end
