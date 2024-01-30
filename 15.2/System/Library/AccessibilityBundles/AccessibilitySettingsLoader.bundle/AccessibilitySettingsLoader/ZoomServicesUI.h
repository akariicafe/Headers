@interface ZoomServicesUI : NSObject

@property (nonatomic, getter=isRegisteredForAppNotifications) BOOL registeredForAppNotifications;

+ (void)enableZoomServices;
+ (void)disableZoomServices;
+ (struct CGPoint { double x0; double x1; })_unMappedZoomPoint:(struct CGPoint { double x0; double x1; })a0;
+ (BOOL)_deviceIsPortrait;
+ (BOOL)_shouldUnmapPointsForFluidGestures;

- (void)_handleLockButtonWasPressedNotification:(id)a0;
- (Class)_accessibilityBundlePrincipalClass;
- (void)_unregisterForAppNotifications;
- (void)_updateForCurrentZoomStatus;
- (void)_handleAppDidBecomeActiveNotification:(id)a0;
- (void)_handleAppSwitcherWillBeginRevealNotification:(id)a0;
- (void)_handleFirstResponderDidChangeNotification:(id)a0;
- (void)_handleKeyboardDidHideNotification:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_keyboardFrameInScreenCoordinates;
- (void)_installZoomUISafeCategoriesIfNeeded;
- (void)_handleZoomFocusDidChangeNotification:(id)a0;
- (void)_handleZoomEnabledStatusDidChangeNotification:(id)a0;
- (id)init;
- (void)_handleAppDidEnterBackgroundNotification:(id)a0;
- (void)_handleKeyboardWillShowNotification:(id)a0;
- (void)_handleKeyboardWillHideNotification:(id)a0;
- (void)dealloc;
- (void)_handleAlertWillAppearNotification:(id)a0;
- (void)_registerForAppNotifications;
- (void)_handleRegisterZoomConflictNotification:(id)a0;

@end
