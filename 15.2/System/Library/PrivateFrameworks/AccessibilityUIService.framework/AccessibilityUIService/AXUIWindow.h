@interface AXUIWindow : UIWindow <AXUIWindowProtocol>

@property (nonatomic) BOOL shouldRespondToDarkModeChanges;
@property (nonatomic) BOOL isHandlingFullScreenPresentation;

+ (BOOL)_isSecure;

- (id)description;
- (BOOL)keepContextInBackground;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_normalizedSafeAreaInsets;
- (long long)_interfaceOrientationForSceneSafeAreaInsetsIncludingStatusBar:(BOOL)a0;
- (BOOL)_isWindowServerHostingManaged;
- (id)_layerForCoordinateSpaceConversion;
- (BOOL)_shouldAutorotateToInterfaceOrientation:(long long)a0;
- (id)accessibilityLabel;
- (BOOL)_wantsSceneAssociation;
- (BOOL)_accessibilityIsIsolatedWindow;
- (id)_accessibilityElementCommunityIdentifier;

@end
