@interface UISystemGestureView : UIView

- (id)_hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1 windowServerHitTestWindow:(id)a2;
- (BOOL)canResignFirstResponder;
- (BOOL)_canChangeFirstResponder:(id)a0 toResponder:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_responderSelectionRectForWindow:(id)a0;
- (BOOL)canBecomeFirstResponder;

@end
