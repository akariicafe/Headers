@class NSXPCListener, NSString, NSXPCConnection, NSLock;
@protocol FAFamilyNotificationDelegate;

@interface FAFamilyNotifier : NSObject <FAFamilyNotifierRemoteObjectProtocol, NSXPCListenerDelegate> {
    NSXPCConnection *_conn;
    NSLock *_connLock;
    NSXPCListener *_listener;
}

@property (readonly) NSString *identifier;
@property (readonly) NSString *serviceName;
@property (weak) id<FAFamilyNotificationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)deliverNotification:(id)a0;
- (void)removeAllNotifications;
- (void)removeNotificationWithIdentifier:(id)a0;
- (id)agentConnection;
- (id)_pendingNotificationsWithClientIdentifier:(id)a0;
- (void)_agentConnectionWasInterrupted;
- (void)_agentConnectionWasInvalidated;
- (void)_agentConnectionFailedToBootstrap;
- (void)didActivateNotification:(id)a0;
- (void)didDismissNotification:(id)a0;
- (id)initWithIdentifier:(id)a0 machServiceName:(id)a1;
- (id)pendingNotifications;
- (id)_pendingNotificationsForAllClients;
- (void)didClearNotification:(id)a0;

@end
