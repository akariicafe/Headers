@interface AccessibilitySettingsLoader : NSObject

+ (void)initialize;
+ (void)_resetD22ReduceMotion;
+ (void)_updateAssistiveTouchInformation;
+ (void)_updateITunesSettings;
+ (void)update;
+ (void)_registerZoomNotificationListeners;
+ (void)_update;
+ (BOOL)_isAXUIServer;
+ (void)updateITunesSettings;
+ (void)_registerSpeakThisNotificationListeners;
+ (void)_updateAccessibilitySpeakCorrections;

- (id)init;
- (void)_initializeImmediateAccessibilitySettings;
- (void)_initializeDelayedAccessibilitySettings;
- (void)_webKitInitialized;
- (void)_accessibilityUserChangedRouteNotification:(id)a0;

@end
