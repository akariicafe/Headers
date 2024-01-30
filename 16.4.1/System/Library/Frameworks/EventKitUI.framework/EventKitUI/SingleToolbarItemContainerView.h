@interface SingleToolbarItemContainerView : UIView

- (void)updateForMiniBarState:(BOOL)a0;
- (void)setBoundsWithToolbar:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)willMoveToSuperview:(id)a0;

@end
