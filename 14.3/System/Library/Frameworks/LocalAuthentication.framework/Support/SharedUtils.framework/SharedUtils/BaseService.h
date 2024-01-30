@class NSXPCListenerEndpoint, NSString, NSMutableDictionary, NSXPCListener, NSObject;
@protocol OS_dispatch_queue, ServiceManager;

@interface BaseService : NSObject <Service, NSXPCListenerDelegate> {
    NSMutableDictionary *_clients;
    BOOL _terminating;
    NSXPCListener *_listener;
}

@property (readonly, nonatomic) unsigned long long clientsCount;
@property (weak, nonatomic) id<ServiceManager> manager;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSString *serviceID;
@property (readonly, nonatomic) NSXPCListenerEndpoint *endpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)_disconnectClient:(id)a0;

@end
