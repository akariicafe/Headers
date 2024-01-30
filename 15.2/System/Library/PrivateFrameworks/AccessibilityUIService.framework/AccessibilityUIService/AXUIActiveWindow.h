@interface AXUIActiveWindow : AXUIWindow

- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)_usesWindowServerHitTesting;
- (BOOL)_accessibilityWindowVisible;

@end
