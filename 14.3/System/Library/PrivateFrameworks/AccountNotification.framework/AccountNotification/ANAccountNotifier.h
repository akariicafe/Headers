@class NSString, NSXPCListener, NSXPCConnection;
@protocol ANAccountNotifierDelegate;

@interface ANAccountNotifier : NSObject <NSXPCListenerDelegate, ANClientCallbackProtocol> {
    NSXPCConnection *_daemonConnection;
    NSXPCListener *_bulletinResponseListener;
    NSString *_callbackMachService;
}

@property (weak, nonatomic) id<ANAccountNotifierDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_daemonConnection;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)addNotification:(id)a0;
- (id)initWithCallbackMachService:(id)a0;
- (void)_startNotificationCallbackListenerWithMachServiceName:(id)a0;
- (void)_stopNotificationCallbackListener;
- (void)_disconnectFromDaemon;
- (id)_createDaemonConnection;
- (void)_daemonConnectionWasInvalidated;
- (void)_daemonConnectionWasInterrupted;
- (void)notificationWasActivated:(id)a0;
- (void)notificationWasDismissed:(id)a0;
- (void)notificationWasCleared:(id)a0;
- (void)removeNotificationWithIdentifier:(id)a0;
- (void)removeNotificationsWithEventIdentifier:(id)a0;

@end
