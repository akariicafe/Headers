@interface AKCropAnnotationRenderer : AKAnnotationRenderer

+ (struct CGPath { } *)_newRectanglePathForAnnotation:(id)a0 withPageController:(id)a1 outLineWidth:(double *)a2;
+ (struct CGSize { double x0; double x1; })_concreteDraggingBoundsInsetsForAnnotation:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_concreteDrawingBoundsOfAnnotation:(id)a0;
+ (BOOL)_concretePointIsOnBorder:(struct CGPoint { double x0; double x1; })a0 ofAnnotation:(id)a1 minimumBorderThickness:(double)a2;
+ (BOOL)_concretePointIsOnInside:(struct CGPoint { double x0; double x1; })a0 ofAnnotation:(id)a1;
+ (void)_concreteRenderAnnotation:(id)a0 intoContext:(struct CGContext { } *)a1 forDisplay:(BOOL)a2 pageControllerOrNil:(id)a3;
+ (struct CGPath { } *)_newClipMaskEOPathForAnnotation:(id)a0 withPageController:(id)a1;
+ (void)_pixelAlignedBaseRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 interiorRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 scaleFactor:(double *)a2 forAnnotation:(id)a3 withPageController:(id)a4;
+ (struct CGPath { } *)cropHandle:(long long)a0 forAnnotation:(id)a1 withPageController:(id)a2;
+ (struct CGPath { } *)newBottomEdgePathForAnnotation:(id)a0 withPageController:(id)a1;
+ (struct CGPath { } *)newBottomLeftCornerPathForAnnotation:(id)a0 withPageController:(id)a1;
+ (struct CGPath { } *)newBottomRightCornerPathForAnnotation:(id)a0 withPageController:(id)a1;
+ (struct CGPath { } *)newLeftEdgePathForAnnotation:(id)a0 withPageController:(id)a1;
+ (struct CGPath { } *)newRightEdgePathForAnnotation:(id)a0 withPageController:(id)a1;
+ (struct CGPath { } *)newTopEdgePathForAnnotation:(id)a0 withPageController:(id)a1;
+ (struct CGPath { } *)newTopLeftCornerPathForAnnotation:(id)a0 withPageController:(id)a1;
+ (struct CGPath { } *)newTopRightCornerPathForAnnotation:(id)a0 withPageController:(id)a1;

@end
