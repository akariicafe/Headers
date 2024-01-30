@class NSXPCListener, NSString, NSMutableSet, NSObject;
@protocol NPKIDVRemoteDeviceServiceDelegate, OS_dispatch_queue;

@interface NPKIDVRemoteDeviceService : NSObject <NSXPCListenerDelegate, NPKIDVRemoteDeviceServiceServerDelegate> {
    NSObject<OS_dispatch_queue> *_delegateCallBackQueue;
    NSXPCListener *_xpcListener;
    NSMutableSet *_serviceServers;
}

@property (readonly, nonatomic) NSString *serviceName;
@property (weak, nonatomic) id<NPKIDVRemoteDeviceServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_addConnection:(id)a0;
- (id)initWithServiceName:(id)a0 delegate:(id)a1 callbackQueue:(id)a2;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)registerForEvents:(unsigned long long)a0 withSession:(id)a1 completion:(id /* block */)a2;
- (void)_addServer:(id)a0;
- (void)identityRemoteDeviceServiceServer:(id)a0 didReceiveEvent:(unsigned long long)a1 fromRemoteDeviceWithID:(id)a2;
- (void)dealloc;
- (void)unregisterFromEvents:(unsigned long long)a0 withSession:(id)a1 completion:(id /* block */)a2;
- (void)_removeServer:(id)a0;
- (void).cxx_destruct;

@end
