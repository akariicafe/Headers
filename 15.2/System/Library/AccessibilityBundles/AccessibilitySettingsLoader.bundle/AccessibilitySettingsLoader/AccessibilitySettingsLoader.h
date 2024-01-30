@interface AccessibilitySettingsLoader : NSObject

+ (void)initialize;
+ (void)updateITunesSettings;
+ (void)_registerZoomNotificationListeners;
+ (void)_updateAssistiveTouchInformation;
+ (void)update;
+ (void)_updateITunesSettings;
+ (void)_resetD22ReduceMotion;
+ (void)_update;
+ (BOOL)_isAXUIServer;
+ (void)_updateAccessibilitySpeakCorrections;
+ (void)_registerSpeakThisNotificationListeners;

- (id)init;
- (void)_initializeImmediateAccessibilitySettings;
- (void)_initializeDelayedAccessibilitySettings;
- (void)_webKitInitialized;
- (void)_accessibilityUserChangedRouteNotification:(id)a0;

@end
