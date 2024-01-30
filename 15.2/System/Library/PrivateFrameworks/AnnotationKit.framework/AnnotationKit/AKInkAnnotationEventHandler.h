@interface AKInkAnnotationEventHandler : AKRectangularAnnotationEventHandler

+ (BOOL)allowsDraggingOfAnnotation:(id)a0;

- (struct CGSize { double x0; double x1; })naturalSizeForAnnotation;
- (BOOL)handleDownEvent:(id)a0 orRecognizer:(id)a1;
- (BOOL)enterDraggableAreaEventTrackingLoopWithEvent:(id)a0 orRecognizer:(id)a1;
- (BOOL)alwaysLockAspectRatio;

@end
