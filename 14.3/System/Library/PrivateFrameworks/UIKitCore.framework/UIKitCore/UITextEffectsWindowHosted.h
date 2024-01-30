@interface UITextEffectsWindowHosted : UITextEffectsWindow

- (long long)_orientationForSceneTransform;
- (BOOL)_isWindowServerHostingManaged;
- (long long)_orientationForViewTransform;
- (BOOL)_isTextEffectsWindowNotificationOwner;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })actualSceneBoundsForLandscape:(BOOL)a0;
- (void)_sceneBoundsDidChange;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })actualSceneBounds;
- (BOOL)_isFullscreen;
- (BOOL)_usesWindowServerHitTesting;
- (BOOL)_isTextEffectsWindowHosting;
- (long long)_orientationForRootTransform;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })safeAreaInsets;

@end
