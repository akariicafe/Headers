@interface _SCNSnapshotWindow : UIWindow

- (void)_setFirstResponder:(id)a0;
- (BOOL)_canBecomeKeyWindow;
- (struct CGPoint { double x0; double x1; })warpPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_isSettingFirstResponder;
- (id)_hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1 windowServerHitTestWindow:(id)a2;
- (void)dealloc;
- (id)scnView;
- (struct CGPoint { double x0; double x1; })_warpPoint:(struct CGPoint { double x0; double x1; })a0 outOfBounds:(BOOL *)a1;

@end
