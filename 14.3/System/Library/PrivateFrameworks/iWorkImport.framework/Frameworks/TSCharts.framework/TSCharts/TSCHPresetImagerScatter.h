@interface TSCHPresetImagerScatter : TSCHPresetImagerLineFamily

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })swatchImageEdgeInsetsForSize:(struct CGSize { double x0; double x1; })a0;
- (void)p_drawShadowedContentIntoContext:(struct CGContext { } *)a0 size:(struct CGSize { double x0; double x1; })a1 contentsScale:(double)a2 preset:(id)a3 shouldCache:(BOOL *)a4;
- (id)p_chartType;

@end
