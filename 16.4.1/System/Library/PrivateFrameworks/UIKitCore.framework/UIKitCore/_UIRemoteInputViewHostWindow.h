@interface _UIRemoteInputViewHostWindow : UIAutoRotatingWindow

+ (BOOL)_isSecure;

- (double)_adjustedWindowLevelFromLevel:(double)a0;
- (id)initWithWindowScene:(id)a0;
- (BOOL)isInternalWindow;
- (BOOL)_alwaysGetsContexts;
- (BOOL)_isWindowServerHostingManaged;
- (BOOL)_isHostedInAnotherProcess;
- (BOOL)_usesWindowServerHitTesting;
- (BOOL)_wantsSceneAssociation;
- (long long)_orientationForRootTransform;
- (BOOL)_isRemoteInputHostWindow;
- (long long)_orientationForViewTransform;
- (BOOL)canBecomeKeyWindow;
- (BOOL)inhibitSetupOrientation;
- (long long)_orientationForSceneTransform;

@end
