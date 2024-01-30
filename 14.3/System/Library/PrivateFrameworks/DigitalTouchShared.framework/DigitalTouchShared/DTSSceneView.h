@interface DTSSceneView : SKView {
    BOOL _shouldDelayLayout;
    BOOL _didDelayLayout;
}

- (void)_applicationDidEnterBackground;
- (void)_updateLayout;
- (void)layoutSubviews;
- (void)_applicationWillEnterForeground;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_applicationDidBecomeActive;

@end
