@interface _SCNSnapshotWindow : UIWindow

- (id)_hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1 windowServerHitTestWindow:(id)a2;
- (BOOL)_canBecomeKeyWindow;
- (struct CGPoint { double x0; double x1; })warpPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)dealloc;
- (void)_setFirstResponder:(id)a0;
- (BOOL)_isSettingFirstResponder;
- (id)scnView;
- (struct CGPoint { double x0; double x1; })_warpPoint:(struct CGPoint { double x0; double x1; })a0 outOfBounds:(BOOL *)a1;

@end
