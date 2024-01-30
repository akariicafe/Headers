@interface TSCHPresetImagerStackedColumn : TSCHPresetImagerBarFamily

- (void)p_drawShadowedContentIntoContext:(struct CGContext { } *)a0 size:(struct CGSize { double x0; double x1; })a1 contentsScale:(double)a2 preset:(id)a3 shouldCache:(BOOL *)a4;
- (id)p_chartType;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_stackRectWithRects:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 atIndex:(unsigned long long)a1;

@end
