@class NSXPCListener, NSString, NSXPCInterface, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface CSConnectionListener : NSObject <NSXPCListenerDelegate, CSConnectionServiceDelegate> {
    NSXPCListener *_listener;
    NSXPCInterface *_exportedInterface;
    NSXPCInterface *_remoteInterface;
    id _proxyObject;
}

@property (retain, nonatomic) NSMutableArray *clientConnections;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSString *machServiceName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMachService:(id)a0 withServiceInterface:(id)a1 withServiceObject:(id)a2 withDelegateInterface:(id)a3;
- (void)resumeConnection;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)notifyClientsWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
