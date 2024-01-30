@class NSXPCListener, NSMapTable, NSXPCListenerEndpoint, NSString;

@interface _EXPromiseManager : NSObject <_EXPromiseManagerXPCProtocol, NSXPCListenerDelegate>

@property (readonly) NSMapTable *promises;
@property (retain) NSXPCListener *listener;
@property (readonly) NSXPCListenerEndpoint *endpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)registerPromise:(id)a0;
- (void)resolveObjectOfClasses:(id)a0 forIdentifier:(id)a1 endpoint:(id)a2 completion:(id /* block */)a3;
- (id)resolveObjectOfClasses:(id)a0 forIdentifier:(id)a1 endpoint:(id)a2 error:(id *)a3;
- (void)resolvePromiseWithIdentifier:(id)a0 reply:(id /* block */)a1;
- (void)unregisterPromise:(id)a0;

@end
