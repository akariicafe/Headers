@interface AXUIWindow : UIWindow <AXUIWindowProtocol>

@property (nonatomic) BOOL shouldRespondToDarkModeChanges;
@property (nonatomic) BOOL isHandlingFullScreenPresentation;

+ (BOOL)_isSecure;

- (BOOL)_shouldAutorotateToInterfaceOrientation:(long long)a0;
- (BOOL)_isWindowServerHostingManaged;
- (id)_accessibilityElementCommunityIdentifier;
- (long long)_interfaceOrientationForSceneSafeAreaInsetsIncludingStatusBar:(BOOL)a0;
- (id)_layerForCoordinateSpaceConversion;
- (BOOL)keepContextInBackground;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_normalizedSafeAreaInsets;
- (id)accessibilityLabel;
- (id)description;
- (BOOL)_accessibilityIsIsolatedWindow;
- (BOOL)_wantsSceneAssociation;

@end
