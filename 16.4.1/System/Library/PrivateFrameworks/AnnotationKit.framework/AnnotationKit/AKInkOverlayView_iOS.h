@interface AKInkOverlayView_iOS : AKInkOverlayView

- (void)commonInit;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)_viewsToHitTestForEvent:(id)a0;

@end
