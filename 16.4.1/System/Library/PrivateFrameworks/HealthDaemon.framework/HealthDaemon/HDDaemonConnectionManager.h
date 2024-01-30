@class NSMutableSet, NSArray, NSString, HDXPCListener, NSMapTable, NSObject, HDDaemon;
@protocol OS_dispatch_queue;

@interface HDDaemonConnectionManager : NSObject <HDXPCListenerDelegate, HDXPCListenerClientProvider> {
    HDDaemon *_daemon;
    NSObject<OS_dispatch_queue> *_listenerQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMapTable *_processesByAuditToken;
    NSMutableSet *_endpoints;
}

@property (copy, nonatomic) id /* block */ processCreationHandler;
@property (readonly, nonatomic) HDXPCListener *serviceListener;
@property (readonly, copy) NSArray *clientProcesses;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidateAllServersForProfile:(id)a0;
- (id)exportObjectForListener:(id)a0 client:(id)a1 error:(id *)a2;
- (id)initWithMachServiceName:(id)a0 daemon:(id)a1;
- (id)clientForListener:(id)a0 connection:(id)a1 error:(id *)a2;
- (void)endpointInvalidated:(id)a0;
- (id)createAnonymousListenerWithLabel:(id)a0;
- (id)createListenerWithMachServiceName:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)resume;

@end
