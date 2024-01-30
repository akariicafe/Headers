@interface AKStarAnnotationRenderer : AKPolygonAnnotationRenderer

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_concreteDrawingBoundsOfAnnotation:(id)a0;
+ (BOOL)_concretePointIsOnBorder:(struct CGPoint { double x0; double x1; })a0 ofAnnotation:(id)a1 minimumBorderThickness:(double)a2;
+ (BOOL)_concretePointIsOnInside:(struct CGPoint { double x0; double x1; })a0 ofAnnotation:(id)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_concreteRectangleForAnnotation:(id)a0 withTextBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (void)_concreteRenderAnnotation:(id)a0 intoContext:(struct CGContext { } *)a1 forDisplay:(BOOL)a2 pageControllerOrNil:(id)a3;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_concreteTextBoundsOfAnnotation:(id)a0 withOptionalAnnotationRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 optionalText:(id)a2;
+ (id)_innerStarPoints:(id)a0 withInnerRadiusFactor:(double)a1;
+ (struct CGPath { } *)_newPathForAnnotation:(id)a0;
+ (double)_segLengthOfStarWithPoints:(id)a0;
+ (double)defaultInnerRadiusForStar:(id)a0;
+ (double)innerRadiusFactorForPoint:(struct CGPoint { double x0; double x1; })a0 inAnnotation:(id)a1 onPageController:(id)a2;
+ (id)innerStarPoints:(id)a0;
+ (id)starPoints:(id)a0;

@end
