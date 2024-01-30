@interface UIRemoteKeyboardWindowHosted : UIRemoteKeyboardWindow

+ (BOOL)_isSecure;
+ (BOOL)_isHostedInAnotherProcess;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })safeAreaInsets;
- (long long)_orientationForRootTransform;
- (long long)_orientationForViewTransform;
- (double)_adjustedWindowLevelFromLevel:(double)a0;
- (long long)_orientationForSceneTransform;
- (double)keyboardWidthForCurrentDevice;
- (BOOL)_isTextEffectsWindowHosting;
- (struct CGSize { double x0; double x1; })keyboardScreenReferenceSize;

@end
