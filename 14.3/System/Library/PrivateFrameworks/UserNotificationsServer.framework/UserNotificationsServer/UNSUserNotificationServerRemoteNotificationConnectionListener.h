@class NSXPCListener, NSString, NSMutableDictionary, NSMapTable, NSObject, UNSRemoteNotificationServer;
@protocol OS_dispatch_queue;

@interface UNSUserNotificationServerRemoteNotificationConnectionListener : NSObject <NSXPCListenerDelegate, PKUserNotificationServerRemoteNotificationXPCServer> {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCListener *_listener;
    NSMutableDictionary *_connectionsByBundleIdentifier;
    NSMapTable *_bundleIdentifiersByConnection;
    UNSRemoteNotificationServer *_remoteNotificationService;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_queue_removeConnection:(id)a0 forBundleIdentifier:(id)a1;
- (void)didReceiveDeviceToken:(id)a0 forBundleIdentifier:(id)a1;
- (void)_queue_removeConnectionForAllBundleIdentifiers:(id)a0;
- (void).cxx_destruct;
- (id)_currentConnection;
- (void)_queue_didReceiveDeviceToken:(id)a0 forBundleIdentifier:(id)a1;
- (void)dealloc;
- (void)invalidateTokenForRemoteNotificationsForBundleIdentifier:(id)a0;
- (BOOL)_allowsRemoteNotificationsForBundleIdentifier:(id)a0;
- (void)_requestTokenForRemoteNotificationsForBundleIdentifier:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)_queue_observerConnectionsForBundleIdentifier:(id)a0;
- (void)_removeConnectionForAllBundleIdentifiers:(id)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initWithRemoteNotificationService:(id)a0;
- (void)_queue_addConnection:(id)a0 forBundleIdentifier:(id)a1;
- (void)_invalidateTokenForRemoteNotificationsForBundleIdentifier:(id)a0;
- (void)resume;
- (void)requestTokenForRemoteNotificationsForBundleIdentifier:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)getAllowsRemoteNotificationsForBundleIdentifier:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
