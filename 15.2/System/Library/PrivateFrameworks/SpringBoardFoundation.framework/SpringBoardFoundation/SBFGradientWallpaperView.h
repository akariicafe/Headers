@class SBFGradient;

@interface SBFGradientWallpaperView : SBFWallpaperView

@property (readonly, copy, nonatomic) SBFGradient *wallpaperGradient;

+ (Class)layerClass;

- (id)_computeAverageColor;
- (long long)wallpaperType;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configuration:(id)a1 variant:(long long)a2 cacheGroup:(id)a3 delegate:(id)a4 options:(unsigned long long)a5;
- (BOOL)isDisplayingWallpaperWithConfiguration:(id)a0 forVariant:(long long)a1;
- (id)averageColorInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withSmudgeRadius:(double)a1;
- (double)contrastInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 contrastWithinBoxes:(double *)a1 contrastBetweenBoxes:(double *)a2;
- (void).cxx_destruct;

@end
