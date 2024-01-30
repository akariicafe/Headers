@class NSSet, NSDictionary, NSString, NSObject;
@protocol COClusterAliasManagerDelegate, OS_dispatch_queue, COClusterAliasManagerMeshProvider;

@interface COClusterAliasManager : NSObject <COClusterResolverDelegate>

@property (readonly, weak, nonatomic) id<COClusterAliasManagerMeshProvider> provider;
@property (readonly, weak, nonatomic) id<COClusterAliasManagerDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateDispatchQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) NSDictionary *resolvers;
@property (retain, nonatomic) NSDictionary *identifiers;
@property (retain, nonatomic) NSDictionary *updates;
@property (retain, nonatomic) NSDictionary *associations;
@property (retain, nonatomic) NSDictionary *meshes;
@property (retain, nonatomic) NSSet *starting;
@property (retain, nonatomic) NSSet *stopping;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)aliasManagerWithProvider:(id)a0 delegate:(id)a1 delegateDispatchQueue:(id)a2;

- (void)didStopMeshController:(id)a0;
- (void).cxx_destruct;
- (void)_applyUpdates;
- (void)_activateMeshWithClusterIdentifier:(id)a0 forClusters:(id)a1;
- (void)_deactivateMeshWithClusterIdentifier:(id)a0;
- (void)_delegateNotifyActivatingMesh:(id)a0 withClusterIdentifier:(id)a1 forClusters:(id)a2 completion:(id /* block */)a3;
- (void)_delegateNotifyDeactivatingMesh:(id)a0 withClusterIdentifier:(id)a1 forClusters:(id)a2 completion:(id /* block */)a3;
- (id)_initWithProvider:(id)a0 delegate:(id)a1 delegateDispatchQueue:(id)a2;
- (id)_labelForClusters:(id)a0;
- (id)_prepareNewMeshWithClusterIdentifier:(id)a0 forClusters:(id)a1;
- (id)_providerRequestMesh;
- (void)_recomputeAssociations;
- (void)_updateClusterIdentifier:(id)a0 forCluster:(id)a1;
- (void)resolver:(id)a0 clusterIdentifierChanged:(id)a1;
- (void)startTrackingCluster:(id)a0;
- (void)stopTrackingCluster:(id)a0;
- (void)waitForBootstrapOfCluster:(id)a0 withBlock:(id /* block */)a1;

@end
