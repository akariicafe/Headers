@interface SBMainSwitcherWindow : SBWindow

+ (BOOL)sb_autorotates;

- (id)_hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1 windowServerHitTestWindow:(id)a2;
- (BOOL)_usesWindowServerHitTesting;
- (BOOL)_canBecomeKeyWindow;
- (unsigned long long)_edgesForSystemGesturesTouchDelay;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
