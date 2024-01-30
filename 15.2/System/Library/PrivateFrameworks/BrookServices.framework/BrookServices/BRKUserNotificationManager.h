@class NSXPCListenerEndpoint, UNUserNotificationCenter, NSXPCConnection, NSMutableDictionary, NSXPCListener;
@protocol BRKApplicationInterface;

@interface BRKUserNotificationManager : NSObject {
    UNUserNotificationCenter *_notificationCenter;
    NSMutableDictionary *_responseHandlers;
    NSMutableDictionary *_categories;
    NSXPCListener *_listener;
    id<BRKApplicationInterface> _applicationObject;
}

@property (weak, nonatomic) NSXPCConnection *applicationConnection;
@property (retain, nonatomic) NSXPCListenerEndpoint *endpoint;

+ (id)sharedInstance;

- (void)addCategories:(id)a0;
- (void)removeAllDeliveredNotifications;
- (void)handleNotificationResponse:(id)a0;
- (void)removeNotification:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)categoryForIdentifier:(id)a0;
- (id)postNotification:(id)a0 trigger:(id)a1 responseHandler:(id /* block */)a2 destinations:(unsigned long long)a3;
- (void)_deliveredNotificationIdentifiersWithCategoryIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)_pendingNotificationIdentifiersWithCategoryIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (id)getListenerEndpoint;
- (id)postNotification:(id)a0 destinations:(unsigned long long)a1;
- (void)isNotificationPendingOrDeliveredWithCategoryIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeNotificationsWithCategoryIdentifier:(id)a0;
- (void)removeAllPendingNotifications;
- (void)hasPendingLocationNotification:(id /* block */)a0;
- (void)debugPendingNotificationRequests;

@end
