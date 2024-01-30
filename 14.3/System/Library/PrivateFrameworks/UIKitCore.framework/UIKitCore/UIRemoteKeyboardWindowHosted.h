@interface UIRemoteKeyboardWindowHosted : UIRemoteKeyboardWindow

+ (BOOL)_isSecure;

- (long long)_orientationForSceneTransform;
- (long long)_orientationForViewTransform;
- (struct CGSize { double x0; double x1; })keyboardScreenReferenceSize;
- (double)keyboardWidthForCurrentDevice;
- (BOOL)_isTextEffectsWindowHosting;
- (long long)_orientationForRootTransform;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })safeAreaInsets;
- (BOOL)_isHostedInAnotherProcess;
- (double)_adjustedWindowLevelFromLevel:(double)a0;

@end
