@interface UIAutoRotatingWindow : UIApplicationRotationFollowingWindow {
    long long _interfaceOrientation;
    BOOL _unknownOrientation;
}

- (void)updateForOrientation:(long long)a0;
- (void)_didRemoveSubview:(id)a0;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 attached:(BOOL)a1;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 debugName:(id)a1 windowScene:(id)a2;
- (void)commonInit;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
