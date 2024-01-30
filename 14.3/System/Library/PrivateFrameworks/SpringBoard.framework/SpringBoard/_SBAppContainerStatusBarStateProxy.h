@class SBAppContainerViewController;

@interface _SBAppContainerStatusBarStateProxy : SBDeviceApplicationSceneStatusBarStateProxy

@property (weak, nonatomic) SBAppContainerViewController *appVCBackReference;

- (long long)_statusBarStyleForPartWithIdentifier:(id)a0 suppressingInherited:(BOOL)a1;
- (long long)_statusBarStyle;
- (long long)_fallbackInterfaceOrientation;
- (long long)overrideStatusBarStyle;
- (BOOL)_statusBarAppearsOutsideOfAJailedApp;
- (double)_statusBarAlpha;
- (void).cxx_destruct;
- (long long)_statusBarOrientationGivenFallbackOrientation:(long long)a0;

@end
