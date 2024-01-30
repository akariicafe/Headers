@interface _UIScrollsToTopInitiatorView : UIView

- (BOOL)_shouldSeekHigherPriorityTouchTarget;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
