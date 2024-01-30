@class UIColor;

@interface NTKPhotosColorPalette : NTKFaceColorPalette

@property (retain, nonatomic) UIColor *monocromeRamp;

- (id)imageAsset;
- (id)colorRampImage;
- (id)monocolorRampImage;
- (BOOL)isOriginalColor;
- (id)colorRampsIndex;
- (id)swatchImageForSize:(struct CGSize { double x0; double x1; })a0;
- (id)swatchPrimaryColor;
- (id)colorRampsIndexByColorName;
- (id)_monocromeRamp;

@end
