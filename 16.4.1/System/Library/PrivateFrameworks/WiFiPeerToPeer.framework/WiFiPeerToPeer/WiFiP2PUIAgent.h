@class NSString, WiFiP2PXPCConnection, UNUserNotificationCenter;

@interface WiFiP2PUIAgent : NSObject <UNUserNotificationCenterDelegate> {
    WiFiP2PXPCConnection *_xpcConnection;
    UNUserNotificationCenter *_notificationCenter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showInfrastructureDisconnectOnRetroModeNotificationForService:(id)a0 completionHandler:(id /* block */)a1;
- (void)configureNotificationsWithBundleIdentifier:(id)a0;
- (void)startConnectionUsingProxy:(id)a0 completionHandler:(id /* block */)a1;
- (id)exportedInterface;
- (void)addNotificationRequest:(id)a0 completionHandler:(id /* block */)a1;
- (id)init;
- (void)activate;
- (void)invalidate;
- (id)exportedObject;
- (void).cxx_destruct;
- (void)removeNotificationsWithIdentifiers:(id)a0;

@end
