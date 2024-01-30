@interface AKNoteAnnotationEventHandler : AKRectangularAnnotationEventHandler

+ (BOOL)allowsDragging;

- (BOOL)handleDownEvent:(id)a0 orRecognizer:(id)a1;
- (BOOL)enterDraggableAreaEventTrackingLoopWithEvent:(id)a0 orRecognizer:(id)a1;
- (BOOL)continueDraggableAreaEventTrackingLoopWithEvent:(id)a0 orRecognizer:(id)a1;

@end
