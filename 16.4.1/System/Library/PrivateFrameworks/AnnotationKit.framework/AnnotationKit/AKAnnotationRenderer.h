@interface AKAnnotationRenderer : NSObject

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })textBoundsOfAnnotation:(id)a0 withOptionalAnnotationRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 optionalText:(id)a2;
+ (struct CGSize { double x0; double x1; })_concreteDraggingBoundsInsetsForAnnotation:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_concreteDrawingBoundsOfAnnotation:(id)a0;
+ (BOOL)_concretePointIsOnBorder:(struct CGPoint { double x0; double x1; })a0 ofAnnotation:(id)a1 minimumBorderThickness:(double)a2;
+ (BOOL)_concretePointIsOnInside:(struct CGPoint { double x0; double x1; })a0 ofAnnotation:(id)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_concreteRectangleForAnnotation:(id)a0 withTextBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (void)_concreteRenderAnnotation:(id)a0 intoContext:(struct CGContext { } *)a1 forDisplay:(BOOL)a2 pageControllerOrNil:(id)a3;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_concreteTextBoundsOfAnnotation:(id)a0 withOptionalAnnotationRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 optionalText:(id)a2;
+ (struct CGPath { } *)_newConcreteTextExclusionPathForAnnotation:(id)a0 withOptionalAnnotationRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (Class)_rendererClassForAnnotation:(id)a0;
+ (void)_testRenderAnnotation:(id)a0 intoContext:(struct CGContext { } *)a1 forDisplay:(BOOL)a2 pageControllerOrNil:(id)a3;
+ (void)_transformContextToModelCoordinates:(struct CGContext { } *)a0 forAnnotation:(id)a1 forDisplay:(BOOL)a2 pageControllerOrNil:(id)a3;
+ (BOOL)annotationShouldAvoidRedrawDuringLiveResize:(id)a0;
+ (struct CGSize { double x0; double x1; })draggingBoundsInsetsForAnnotation:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })drawingBoundsOfAnnotation:(id)a0;
+ (struct CGPath { } *)newTextExclusionPathForAnnotation:(id)a0 withOptionalAnnotationRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (BOOL)pointIsOnBorder:(struct CGPoint { double x0; double x1; })a0 ofAnnotation:(id)a1 minimumBorderThickness:(double)a2;
+ (BOOL)pointIsOnInside:(struct CGPoint { double x0; double x1; })a0 ofAnnotation:(id)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectangleForAnnotation:(id)a0 withTextBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (void)renderAnnotation:(id)a0 intoContext:(struct CGContext { } *)a1 forDisplay:(BOOL)a2 pageControllerOrNil:(id)a3;

@end
