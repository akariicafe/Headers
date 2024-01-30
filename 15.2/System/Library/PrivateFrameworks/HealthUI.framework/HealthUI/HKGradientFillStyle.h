@class UIImage, UIColor;

@interface HKGradientFillStyle : HKFillStyle

@property (retain, nonatomic) UIImage *cachedImage;
@property (retain, nonatomic) UIColor *firstColor;
@property (retain, nonatomic) UIColor *secondColor;
@property (nonatomic) double fillPercentage;
@property (nonatomic) long long fillDirection;
@property (nonatomic) double gradientSize;

- (void)clearCache;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)renderPath:(struct CGPath { } *)a0 context:(struct CGContext { } *)a1 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 alpha:(double)a3;
- (void)_renderCacheIfNecessaryForHeight:(double)a0;
- (void)_renderCacheIfNecessaryForWidth:(double)a0;
- (id)fillImageWithHeight:(double)a0;
- (void)_renderCacheIfNecessaryForSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)_needsRenderForSize:(struct CGSize { double x0; double x1; })a0;
- (void)_renderInContext:(struct CGContext { } *)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)fillImageWithWidth:(double)a0;
- (BOOL)_useReversedFillDirection;

@end
