@interface AKEightPointRectangularPointOfInterestHelper : AKAnnotationPointOfInterestHelper

+ (unsigned long long)_concreteDraggableAreaForPointOfInterestWithIndex:(unsigned long long)a0 ofAnnotation:(id)a1 onPageController:(id)a2;
+ (void)_concretePointsOfInterest:(id *)a0 withVisualStyle:(id *)a1 ofAnnotation:(id)a2 pageControllerForPixelAlignment:(id)a3;
+ (struct CGPoint { double x0; double x1; })_concreteValidatePoint:(struct CGPoint { double x0; double x1; })a0 ofDraggableArea:(unsigned long long)a1 forAnnotation:(id)a2 onPageController:(id)a3;

@end
