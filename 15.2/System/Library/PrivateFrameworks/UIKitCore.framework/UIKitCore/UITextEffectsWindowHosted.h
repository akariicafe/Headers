@interface UITextEffectsWindowHosted : UITextEffectsWindow

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })safeAreaInsets;
- (BOOL)_isFullscreen;
- (void)_sceneBoundsDidChange;
- (long long)_orientationForRootTransform;
- (long long)_orientationForViewTransform;
- (BOOL)_isTextEffectsWindowNotificationOwner;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })actualSceneBounds;
- (BOOL)_isWindowServerHostingManaged;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })actualSceneBoundsForLandscape:(BOOL)a0;
- (long long)_orientationForSceneTransform;
- (BOOL)_isTextEffectsWindowHosting;
- (BOOL)_usesWindowServerHitTesting;

@end
