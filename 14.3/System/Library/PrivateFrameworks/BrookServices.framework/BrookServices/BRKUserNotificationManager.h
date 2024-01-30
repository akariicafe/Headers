@class NSString, UNUserNotificationCenter, NSMutableDictionary;

@interface BRKUserNotificationManager : NSObject <UNUserNotificationCenterDelegatePrivate> {
    UNUserNotificationCenter *_notificationCenter;
    NSMutableDictionary *_responseHandlers;
    NSMutableDictionary *_categories;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)handleNotificationResponse:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)removeNotification:(id)a0;
- (id)categoryForIdentifier:(id)a0;
- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)addCategories:(id)a0;
- (id)postNotification:(id)a0 trigger:(id)a1 responseHandler:(id /* block */)a2 destinations:(unsigned long long)a3;
- (void)_deliveredNotificationIdentifiersWithCategoryIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)_pendingNotificationIdentifiersWithCategoryIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (id)postNotification:(id)a0 destinations:(unsigned long long)a1;
- (void)isNotificationPendingOrDeliveredWithCategoryIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeNotificationsWithCategoryIdentifier:(id)a0;

@end
