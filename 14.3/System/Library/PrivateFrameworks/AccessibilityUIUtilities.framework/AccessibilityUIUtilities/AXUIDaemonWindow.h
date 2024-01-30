@interface AXUIDaemonWindow : UIWindow

+ (BOOL)_isSecure;

- (id)init;
- (BOOL)_accessibilityWindowUsesOwnOrientationForComparingGeometry;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_normalizedSafeAreaInsets;
- (void)_didUpdateOrientation:(id)a0;

@end
