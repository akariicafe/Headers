@class SBAppContainerViewController;

@interface _SBAppContainerStatusBarStateProxy : SBDeviceApplicationSceneStatusBarStateProxy

@property (weak, nonatomic) SBAppContainerViewController *appVCBackReference;

- (long long)overrideStatusBarStyle;
- (long long)_statusBarStyle;
- (BOOL)_statusBarAppearsOutsideOfAJailedApp;
- (long long)_statusBarStyleForPartWithIdentifier:(id)a0 suppressingInherited:(BOOL)a1;
- (long long)_statusBarOrientationGivenFallbackOrientation:(long long)a0;
- (double)_statusBarAlpha;
- (void).cxx_destruct;
- (long long)_fallbackInterfaceOrientation;

@end
