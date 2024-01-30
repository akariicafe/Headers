@interface CSSRFUserSettingMonitor : CSEventMonitor

+ (id)sharedInstance;

- (id)init;
- (BOOL)isSiriRestrictedOnLockScreen;

@end
