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

- (void)_disconnectFromDaemon;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)removeNotificationWithIdentifier:(id)a0;
- (id)initWithCallbackMachService:(id)a0;
- (id)_daemonConnection;
- (void)_stopNotificationCallbackListener;
- (void)notificationWasActivated:(id)a0;
- (void)notificationWasCleared:(id)a0;
- (id)_createDaemonConnection;
- (void)dealloc;
- (void)removeNotificationsWithEventIdentifier:(id)a0;
- (void)addNotification:(id)a0;
- (id)init;
- (void)_startNotificationCallbackListenerWithMachServiceName:(id)a0;
- (void)_daemonConnectionWasInterrupted;
- (void).cxx_destruct;
- (void)_daemonConnectionWasInvalidated;
- (void)notificationWasDismissed:(id)a0;

@end
