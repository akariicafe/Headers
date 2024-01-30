@interface UITextEffectsWindowHosted : UITextEffectsWindow

- (BOOL)_isFullscreen;
- (BOOL)_isTextEffectsWindowNotificationOwner;
- (BOOL)_isWindowServerHostingManaged;
- (void)_sceneBoundsDidChange;
- (BOOL)_usesWindowServerHitTesting;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })actualSceneBounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })actualSceneBoundsForLandscape:(BOOL)a0;
- (long long)_orientationForRootTransform;
- (BOOL)_isTextEffectsWindowHosting;
- (long long)_orientationForViewTransform;
- (void)adjustTextEffectsWindowSizeIfNecessary;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })safeAreaInsets;
- (long long)_orientationForSceneTransform;

@end
