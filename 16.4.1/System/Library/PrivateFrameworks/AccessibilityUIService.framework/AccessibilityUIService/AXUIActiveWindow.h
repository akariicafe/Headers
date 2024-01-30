@interface AXUIActiveWindow : AXUIWindow

- (BOOL)_usesWindowServerHitTesting;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)_accessibilityWindowVisible;

@end
