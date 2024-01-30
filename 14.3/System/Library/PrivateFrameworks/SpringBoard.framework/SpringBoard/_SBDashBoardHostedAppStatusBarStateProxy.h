@class SBDashBoardHostedAppViewController;

@interface _SBDashBoardHostedAppStatusBarStateProxy : SBDeviceApplicationSceneStatusBarStateProxy

@property (weak, nonatomic) SBDashBoardHostedAppViewController *hostedAppVCBackReference;

- (long long)_fallbackInterfaceOrientation;
- (BOOL)_suppressInheritedPartStyles;
- (double)_statusBarAlpha;
- (void).cxx_destruct;

@end
