@interface ASOOverlayWindow : UIWindow

+ (BOOL)_isSystemWindow;

- (BOOL)isInternalWindow;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithWindowScene:(id)a0;

@end
