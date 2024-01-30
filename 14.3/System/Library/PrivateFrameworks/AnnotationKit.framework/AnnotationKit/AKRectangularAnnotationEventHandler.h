@interface AKRectangularAnnotationEventHandler : AKAnnotationEventHandler

@property struct CGPoint { double x; double y; } lastMungedPositionInModel;

- (void)getInitialDraggedPoint:(struct CGPoint { double x0; double x1; } *)a0 otherPoint:(struct CGPoint { double x0; double x1; } *)a1 center:(struct CGPoint { double x0; double x1; } *)a2 forEvent:(id)a3 orRecognizer:(id)a4;
- (void)updateModelWithCurrentPoint:(struct CGPoint { double x0; double x1; })a0 options:(unsigned long long)a1;
- (void)setupDraggingConstraints;
- (void)_updateModelFlippednessWithCurrentPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rectForModifiedRotatedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withOriginal:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 andRotation:(double)a2;

@end
