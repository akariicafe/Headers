@class NSXPCListenerEndpoint, NSArray, NSString, NSXPCListener, NSMapTable, NSObject;
@protocol HDXPCListenerDelegate, HDXPCListenerClientProvider, OS_dispatch_queue;

@interface HDXPCListener : NSObject <NSXPCListenerDelegate> {
    NSXPCListener *_underlyingListener;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSMapTable *_exportedObjectsByClient;
}

@property (readonly, copy) NSArray *allClients;
@property (weak, nonatomic) id<HDXPCListenerDelegate> delegate;
@property (weak, nonatomic) id<HDXPCListenerClientProvider> clientProvider;
@property (readonly) NSXPCListenerEndpoint *endpoint;
@property (readonly, copy) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serviceListener;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initWithLabel:(id)a0;
- (void)_handleConnectionInvalidationForClient:(id)a0 exportedObject:(id)a1;
- (void)setConnectionQueue:(id)a0;
- (void)setQueue:(id)a0;
- (void)_handleInvalidationWithClient:(id)a0 exportedObject:(id)a1;
- (id)initWithMachServiceName:(id)a0;
- (id)initWithUnderlyingListener:(id)a0 label:(id)a1;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)resume;
- (void)_handleInterruptionWithClient:(id)a0 exportedObject:(id)a1;

@end
