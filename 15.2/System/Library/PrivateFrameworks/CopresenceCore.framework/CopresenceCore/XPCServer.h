@class NSXPCListener, NSString, NSXPCInterface, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_os_log, XPCServerDelegate;

@interface XPCServer : NSObject <NSXPCListenerDelegate> {
    NSXPCListener *_listener;
    NSMutableArray *_clients;
    NSObject<OS_dispatch_queue> *_xpcConnectionListenerQueue;
    NSObject<OS_os_log> *_log;
}

@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (retain, nonatomic) NSString *machServiceName;
@property (retain, nonatomic) NSXPCInterface *serverXPCInterface;
@property (retain, nonatomic) NSXPCInterface *clientXPCInterface;
@property (retain, nonatomic) id serviceProvider;
@property (weak, nonatomic) id<XPCServerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)clients;
- (id)initWithMachServiceName:(id)a0;
- (void)_removeConnection:(id)a0;
- (id)remoteProxyForBundleId:(id)a0;
- (void)_addConnection:(id)a0;
- (void)connectionDidDisconnect:(id)a0;
- (id)initWithListener:(id)a0 machServiceName:(id)a1;
- (id)remoteProxies;
- (id)bundleIdForCurrentConnection;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)start;
- (id)processNameForCurrentConnection;
- (id)connections;
- (unsigned long long)processNameHashForConnection:(id)a0;
- (id)_clientForConnection:(id)a0;
- (id)remoteProxyByProcessHash:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)_processNameForConnection:(id)a0;
- (id)bundleIdForConnection:(id)a0;
- (unsigned long long)processNameHashForCurrentConnection;
- (void)connectionDidConnect:(id)a0;
- (void)stop;

@end
