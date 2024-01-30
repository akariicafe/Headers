@interface ICInAppMessageUserNotificationCoordinator : NSObject

+ (id)_musicCenter;
+ (id)_amsPushHandler;
+ (void)addBadgeIconForBundleIdentifier:(id)a0 completion:(id /* block */)a1;
+ (void)removeBadgeIconForBundleIdentifier:(id)a0 completion:(id /* block */)a1;
+ (BOOL)scheduleNotificationWithPayload:(id)a0 forBundleIdentifier:(id)a1;
+ (void)removeNotificationWithIdentifier:(id)a0 forBundleIdentifier:(id)a1;
+ (id)_centerForBundleIdentifier:(id)a0;

@end
