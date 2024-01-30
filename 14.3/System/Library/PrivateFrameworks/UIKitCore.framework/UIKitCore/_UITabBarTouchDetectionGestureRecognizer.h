@interface _UITabBarTouchDetectionGestureRecognizer : UIGestureRecognizer

+ (BOOL)_shouldDefaultToTouches;

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
