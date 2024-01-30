@interface SessionStoreXPCActivityManager : NSObject

+ (id)sharedActivityManager;

- (void)notifySiriSettingWasToggled;
- (void)manageXPCActivities;

@end
