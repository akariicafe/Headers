@interface ZoomServicesUI : NSObject

@property (nonatomic, getter=isRegisteredForAppNotifications) BOOL registeredForAppNotifications;

+ (BOOL)_deviceIsPortrait;
+ (BOOL)_shouldUnmapPointsForFluidGestures;
+ (struct CGPoint { double x0; double x1; })_unMappedZoomPoint:(struct CGPoint { double x0; double x1; })a0;
+ (void)disableZoomServices;
+ (void)enableZoomServices;

- (void)_handleLockButtonWasPressedNotification:(id)a0;
- (void)_handleKeyboardWillShowNotification:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_keyboardFrameInScreenCoordinates;
- (void)_handleAppSwitcherWillBeginRevealNotification:(id)a0;
- (void)_handleKeyboardWillHideNotification:(id)a0;
- (void)_handleZoomFocusDidChangeNotification:(id)a0;
- (void)dealloc;
- (void)_handleAppDidBecomeActiveNotification:(id)a0;
- (void)_handleRegisterZoomConflictNotification:(id)a0;
- (void)_registerForAppNotifications;
- (void)_unregisterForAppNotifications;
- (void)_handleAppDidEnterBackgroundNotification:(id)a0;
- (void)_installZoomUISafeCategoriesIfNeeded;
- (id)init;
- (void)_handleFirstResponderDidChangeNotification:(id)a0;
- (void)_handleKeyboardDidHideNotification:(id)a0;
- (void)_handleZoomEnabledStatusDidChangeNotification:(id)a0;
- (void)_updateForCurrentZoomStatus;
- (Class)_accessibilityBundlePrincipalClass;
- (void)_handleAlertWillAppearNotification:(id)a0;

@end
