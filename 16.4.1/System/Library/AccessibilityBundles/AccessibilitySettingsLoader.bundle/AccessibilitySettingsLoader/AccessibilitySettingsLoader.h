@interface AccessibilitySettingsLoader : NSObject

+ (void)initialize;
+ (void)_registerSpeakThisNotificationListeners;
+ (void)_resetD22ReduceMotion;
+ (void)updateITunesSettings;
+ (void)_update;
+ (void)update;
+ (void)_updateAccessibilitySpeakCorrections;
+ (void)_registerZoomNotificationListeners;
+ (void)_updateITunesSettings;
+ (BOOL)_isAXUIServer;
+ (void)_updateAssistiveTouchInformation;

- (id)init;
- (void)_accessibilityUserChangedRouteNotification:(id)a0;
- (void)_initializeDelayedAccessibilitySettings;
- (void)_initializeImmediateAccessibilitySettings;
- (void)_loadSystemAppResourceAndContinueWith:(id /* block */)a0;
- (void)_webKitInitialized;

@end
