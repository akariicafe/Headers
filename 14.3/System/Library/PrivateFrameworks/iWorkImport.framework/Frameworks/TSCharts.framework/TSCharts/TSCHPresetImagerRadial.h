@interface TSCHPresetImagerRadial : TSCHPresetImager

- (void)p_drawShadowedContentIntoContext:(struct CGContext { } *)a0 size:(struct CGSize { double x0; double x1; })a1 contentsScale:(double)a2 preset:(id)a3 shouldCache:(BOOL *)a4;
- (id)strokeFromStyle:(id)a0;
- (id)fillFromStyle:(id)a0;
- (struct CGPath { } *)newMutablePathWithRadius:(double)a0 center:(struct CGPoint { double x0; double x1; })a1 startAngle:(double)a2 endAngle:(double)a3;

@end
