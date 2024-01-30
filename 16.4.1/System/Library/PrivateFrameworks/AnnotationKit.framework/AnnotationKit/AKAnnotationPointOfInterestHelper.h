@interface AKAnnotationPointOfInterestHelper : NSObject

+ (unsigned long long)_concreteDraggableAreaForPoint:(struct CGPoint { double x0; double x1; })a0 onAnnotation:(id)a1 withScale:(double)a2 pageControllerForPixelAlignment:(id)a3;
+ (unsigned long long)_concreteDraggableAreaForPointOfInterestWithIndex:(unsigned long long)a0 ofAnnotation:(id)a1 onPageController:(id)a2;
+ (void)_concretePointsOfInterest:(id *)a0 withVisualStyle:(id *)a1 ofAnnotation:(id)a2 pageControllerForPixelAlignment:(id)a3;
+ (struct CGPoint { double x0; double x1; })_concreteValidatePoint:(struct CGPoint { double x0; double x1; })a0 ofDraggableArea:(unsigned long long)a1 forAnnotation:(id)a2 onPageController:(id)a3;
+ (Class)_poiHelperClassForAnnotation:(id)a0;
+ (BOOL)_point:(struct CGPoint { double x0; double x1; })a0 isInCircleWithRadius:(double)a1 atPoint:(struct CGPoint { double x0; double x1; })a2;
+ (BOOL)_point:(struct CGPoint { double x0; double x1; })a0 isInRectWithSize:(double)a1 atPoint:(struct CGPoint { double x0; double x1; })a2;
+ (unsigned long long)draggableAreaForPoint:(struct CGPoint { double x0; double x1; })a0 onAnnotation:(id)a1 withScale:(double)a2 pageControllerForPixelAlignment:(id)a3;
+ (double)draggableAreaScaleFactorForScaleFactor:(double)a0;
+ (struct CGPoint { double x0; double x1; })pointForDraggableArea:(unsigned long long)a0 onAnnotation:(id)a1 pageControllerForPixelAlignment:(id)a2;
+ (void)pointsOfInterest:(id *)a0 withVisualStyle:(id *)a1 ofAnnotation:(id)a2 pageControllerForPixelAlignment:(id)a3;
+ (struct CGPoint { double x0; double x1; })validatePoint:(struct CGPoint { double x0; double x1; })a0 ofDraggableArea:(unsigned long long)a1 forAnnotation:(id)a2 onPageController:(id)a3;

@end
