@interface UIRemoteKeyboardWindowHosted : UIRemoteKeyboardWindow

+ (BOOL)_isHostedInAnotherProcess;
+ (BOOL)_isSecure;

- (double)_adjustedWindowLevelFromLevel:(double)a0;
- (struct CGSize { double x0; double x1; })keyboardScreenReferenceSize;
- (double)keyboardWidthForCurrentDevice;
- (long long)_orientationForRootTransform;
- (BOOL)_isTextEffectsWindowHosting;
- (long long)_orientationForViewTransform;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })safeAreaInsets;
- (long long)_orientationForSceneTransform;

@end
