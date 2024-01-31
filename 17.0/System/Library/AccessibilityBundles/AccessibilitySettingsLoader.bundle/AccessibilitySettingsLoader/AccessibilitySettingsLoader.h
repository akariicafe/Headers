@interface AccessibilitySettingsLoader : NSObject

+ (void)_update;
+ (void)_registerZoomNotificationListeners;
+ (void)initialize;
+ (void)update;
+ (void)_updateAssistiveTouchInformation;
+ (void)_registerSpeakThisNotificationListeners;
+ (void)_resetD22ReduceMotion;
+ (void)_updateITunesSettings;
+ (void)_updateAccessibilitySpeakCorrections;
+ (BOOL)_isAXUIServer;
+ (void)updateITunesSettings;

- (id)init;
- (void)_accessibilityUserChangedRouteNotification:(id)a0;
- (void)_initializeDelayedAccessibilitySettings;
- (void)_initializeImmediateAccessibilitySettings;
- (void)_loadSystemAppResourceAndContinueWith:(id /* block */)a0;
- (void)_webKitInitialized;

@end
