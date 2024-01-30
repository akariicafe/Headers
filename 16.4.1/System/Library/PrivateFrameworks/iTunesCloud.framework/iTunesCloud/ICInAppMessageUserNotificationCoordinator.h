@interface ICInAppMessageUserNotificationCoordinator : NSObject

+ (id)_amsPushHandler;
+ (id)_centerForBundleIdentifier:(id)a0;
+ (id)_musicCenter;
+ (void)addBadgeIconForBundleIdentifier:(id)a0 completion:(id /* block */)a1;
+ (void)removeBadgeIconForBundleIdentifier:(id)a0 completion:(id /* block */)a1;
+ (void)removeNotificationWithIdentifier:(id)a0 forBundleIdentifier:(id)a1;
+ (BOOL)scheduleNotificationWithPayload:(id)a0 forBundleIdentifier:(id)a1;

@end
