@interface DOCTagShapeRenderer : NSObject

@property (class, readonly) DOCTagShapeRenderer *shared;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_imageRectForRenderingImage:(id)a0 tagRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 displayScale:(double)a2;
- (id)_shapeImageForColorType:(long long)a0 variant:(long long)a1 colored:(id)a2;
- (double)baselineOffsetForRequest:(id)a0 tagRectSize:(struct CGSize { double x0; double x1; })a1;
- (void)renderInContext:(struct CGContext { } *)a0 contextSize:(struct CGSize { double x0; double x1; })a1 tagRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 tag:(id)a3 outlineColor:(id)a4 fillColor:(id)a5 traitCollection:(id)a6;

@end
