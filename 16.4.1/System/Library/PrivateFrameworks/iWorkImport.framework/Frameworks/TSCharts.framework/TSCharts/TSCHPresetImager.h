@interface TSCHPresetImager : NSObject

+ (void)drawGenericImageIntoContext:(struct CGContext { } *)a0 size:(struct CGSize { double x0; double x1; })a1 preset:(id)a2 usingRepresentativeSpecificSeriesFillProperties:(id)a3 outShouldCache:(BOOL *)a4;
+ (id)presetImagerForChartType:(id)a0;

- (id)imageWithPreset:(id)a0 target:(int)a1 imageSize:(struct CGSize { double x0; double x1; })a2 imageScale:(double)a3 swatchFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 documentRoot:(id)a5 shouldCache:(BOOL *)a6;
- (id)initWithChartType:(id)a0;
- (id)p_chartType;
- (struct CGSize { double x0; double x1; })p_drawAndOffsetMultiDataSliderIntoContext:(struct CGContext { } *)a0 size:(struct CGSize { double x0; double x1; })a1 contentsScale:(double)a2;
- (void)p_drawShadowedContentIntoContext:(struct CGContext { } *)a0 size:(struct CGSize { double x0; double x1; })a1 contentsScale:(double)a2 preset:(id)a3 target:(int)a4 shouldCache:(BOOL *)a5;
- (void)p_drawUnshadowedContentIntoContext:(struct CGContext { } *)a0 size:(struct CGSize { double x0; double x1; })a1 contentsScale:(double)a2 preset:(id)a3 target:(int)a4 shouldCache:(BOOL *)a5;
- (void)p_fillPath:(struct CGPath { } *)a0 withFill:(id)a1 inContext:(struct CGContext { } *)a2;
- (id)p_init;
- (struct CGSize { double x0; double x1; })p_nativeSize;
- (struct CGContext { } *)p_newContextOfSize:(struct CGSize { double x0; double x1; })a0;
- (id)p_objectFromStyle:(id)a0 specific:(int)a1 default:(int)a2;
- (id)p_shadow;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_squareRectFromSize:(struct CGSize { double x0; double x1; })a0 inset:(double)a1;
- (id)p_strokeFromStyle:(id)a0 specific:(int)a1 default:(int)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })swatchImageEdgeInsetsForSize:(struct CGSize { double x0; double x1; })a0;

@end
