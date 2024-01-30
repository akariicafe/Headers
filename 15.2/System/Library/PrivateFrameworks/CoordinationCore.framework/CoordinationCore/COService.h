@class NSXPCListener, NSArray, NSDictionary, NSString, NSObject;
@protocol COServiceAddOnProvider, COServiceListenerProvider, OS_dispatch_queue, COServiceDelegate;

@interface COService : NSObject <NSXPCListenerDelegate>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly, nonatomic) NSXPCListener *listener;
@property (copy, nonatomic) NSArray *clients;
@property (copy, nonatomic) NSDictionary *meshes;
@property (copy, nonatomic) NSDictionary *addOns;
@property (readonly, nonatomic) id<COServiceListenerProvider> listenerProvider;
@property (readonly, nonatomic) id<COServiceAddOnProvider> addOnProvider;
@property (readonly, weak, nonatomic) id<COServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_isAllowedClient:(id)a0;

- (void)_serviceReady;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)_addOnAdded:(id)a0;
- (void)_clientLost:(id)a0;
- (id)_clientForConnection:(id)a0;
- (void).cxx_destruct;
- (void)addMesh:(id)a0 forCluster:(id)a1 completion:(id /* block */)a2;
- (void)_addOnRemoved:(id)a0;
- (void)_configureServiceInterfacesOnConnection:(id)a0;
- (id)initWithListenerProvider:(id)a0 addOnProvider:(id)a1 delegate:(id)a2;
- (id)_currentClient;
- (id)_clusterForAddOn:(id)a0;
- (id)_addOnForCluster:(id)a0;
- (void)_addOnForCluster:(id)a0 completion:(id /* block */)a1;
- (BOOL)_canRequestCreationOfCluster:(id)a0;
- (void)_addMesh:(id)a0 forCluster:(id)a1;
- (void)_removeMeshForCluster:(id)a0;
- (void)removeMeshForCluster:(id)a0 completion:(id /* block */)a1;

@end
