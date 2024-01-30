@class NSXPCListener, NSString, NSXPCConnection, BBDataProviderConnection, NSObject;
@protocol OS_dispatch_queue;

@interface BBDataProviderConnectionResolver : NSObject <NSXPCListenerDelegate, BBDataProviderConnectionClientEndpoint> {
    NSXPCListener *_wakeupListener;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connectionToServer;
    int _listeningToken;
}

@property (weak, nonatomic) BBDataProviderConnection *dataProviderConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)xpcInterface;
+ (id)resolverForConnection:(id)a0;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)ping:(id /* block */)a0;
- (void)dealloc;
- (id)initWithConnection:(id)a0;
- (void)invalidate;
- (void)_invalidate;
- (void)_registerForPublicationNotification;
- (void).cxx_destruct;
- (void)_queue_registerWithServer:(id /* block */)a0;

@end
