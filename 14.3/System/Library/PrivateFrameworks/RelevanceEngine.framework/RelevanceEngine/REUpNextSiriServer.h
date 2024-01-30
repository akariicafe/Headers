@class NSXPCListener, NSString, NSMutableSet, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface REUpNextSiriServer : NSObject <NSXPCListenerDelegate, REUpNextSiriServerInterface> {
    NSHashTable *_observers;
    NSMutableSet *_connections;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCListener *_listener;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (void)addObserver:(id)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)_removeConnection:(id)a0;
- (void)completedRequestWithDomain:(id)a0;
- (void)_onqueue_async:(id /* block */)a0;
- (void)_accessObservers:(id /* block */)a0;
- (void)_accessRemoteClients:(id /* block */)a0;

@end
