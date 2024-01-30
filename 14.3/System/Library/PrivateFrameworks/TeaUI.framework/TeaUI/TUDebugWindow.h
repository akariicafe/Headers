@interface TUDebugWindow : UIWindow {
    void /* unknown type, empty encoding */ debugDelegate;
    void /* unknown type, empty encoding */ isAllowed;
    void /* unknown type, empty encoding */ isPresenting;
}

- (void)onDidBecomeActive;
- (void)onWillResignActive;
- (void)motionBegan:(long long)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithWindowScene:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
