@interface AKPolygonPointOfInterestHelper : AKEightPointRectangularPointOfInterestHelper

+ (void)_concretePointsOfInterest:(id *)a0 withVisualStyle:(id *)a1 ofAnnotation:(id)a2 pageControllerForPixelAlignment:(id)a3;
+ (unsigned long long)_concreteDraggableAreaForPointOfInterestWithIndex:(unsigned long long)a0 ofAnnotation:(id)a1 onPageController:(id)a2;
+ (unsigned long long)maxPolygonPoints;
+ (unsigned long long)minPolygonPoints;
+ (struct CGPoint { double x0; double x1; })_concreteValidatePoint:(struct CGPoint { double x0; double x1; })a0 ofDraggableArea:(unsigned long long)a1 forAnnotation:(id)a2 onPageController:(id)a3;
+ (double)pointsControlPointDistanceFactor;
+ (unsigned long long)numberOfPolygonPointsForControlPoint:(struct CGPoint { double x0; double x1; })a0 inAnnotation:(id)a1 onPageController:(id)a2;
+ (struct CGPoint { double x0; double x1; })_pointForPointsControlOfPolygonWithNumberOfPoints:(unsigned long long)a0 inAnnotation:(id)a1 onPageController:(id)a2;
+ (double)_degreesBetweenPointsForPointsControl;
+ (double)_degreesForPointsControlGivenPolygonWithNumberOfPoints:(unsigned long long)a0;

@end
