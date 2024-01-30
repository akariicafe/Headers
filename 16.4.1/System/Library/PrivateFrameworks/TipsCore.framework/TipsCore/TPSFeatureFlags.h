@interface TPSFeatureFlags : NSObject

+ (BOOL)allowTipsSearch;
+ (BOOL)allowModelControlledNotifications;
+ (BOOL)allowNotificationsPFLPlugin;
+ (BOOL)allowNotificationsPFLPluginTesting;
+ (BOOL)allowReplayButton;
+ (BOOL)allowSavedTips;

@end
