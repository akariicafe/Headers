@interface DKInkThumbnailRenderer : NSObject

+ (BOOL)_drawDebugPatternInGLContext:(id)a0 inSize:(struct CGSize { double x0; double x1; })a1;
+ (void)_drawPath:(id)a0 atScale:(double)a1 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 inkColor:(id)a3 backgroundColor:(id)a4 inContext:(struct CGContext { } *)a5;
+ (id)_imageForDrawingUsingCG:(id)a0 fittingInSize:(struct CGSize { double x0; double x1; })a1 displayScale:(double)a2 color:(id)a3;
+ (id)_imageForDrawingUsingGL:(id)a0 fittingInSize:(struct CGSize { double x0; double x1; })a1 displayScale:(double)a2 color:(id)a3;
+ (void)_interpolateDrawing:(id)a0 inSize:(struct CGSize { double x0; double x1; })a1 displayScale:(double)a2 ellipseHandler:(id /* block */)a3;
+ (struct CGPath { } *)_newStrokedInterpolatedPathWithDrawing:(id)a0 inSize:(struct CGSize { double x0; double x1; })a1 displayScale:(double)a2;
+ (id)imageForDrawing:(id)a0 fittingInSize:(struct CGSize { double x0; double x1; })a1 backingScale:(double)a2 color:(id)a3 highFidelity:(BOOL)a4;
+ (id)imageForDrawing:(id)a0 fittingInSize:(struct CGSize { double x0; double x1; })a1 color:(id)a2 highFidelity:(BOOL)a3;
+ (double)scaleToFitDrawing:(id)a0 inSize:(struct CGSize { double x0; double x1; })a1;
+ (struct CGSize { double x0; double x1; })sizeForDrawing:(id)a0 inSize:(struct CGSize { double x0; double x1; })a1;

@end
