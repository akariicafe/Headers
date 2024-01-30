@class COMediaGroupsAdapter, NSArray, COClusterAliasManager, NSOrderedSet, COMeshController, NSDictionary, COHomeKitAdapter, NSObject, NSString, NSMapTable;
@protocol OS_dispatch_queue;

@interface COCoordinationService : NSObject <COServiceDelegate, COClusterAssertionDelegate, COClusterAliasManagerMeshProvider, COClusterAliasManagerDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _servicesLock;
    BOOL _isMigrating;
}

@property (class, retain, nonatomic) COCoordinationService *singleton;

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly, nonatomic) double pingMinimum;
@property (readonly, nonatomic) double pingMaximum;
@property (readonly, nonatomic) COHomeKitAdapter *hkAdapter;
@property (readonly, nonatomic) COMediaGroupsAdapter *mgAdapter;
@property (readonly, nonatomic) NSOrderedSet *services;
@property (readonly, nonatomic) NSArray *alwaysAssert;
@property (readonly, nonatomic) NSDictionary *legacyServices;
@property (readonly, nonatomic) NSMapTable *assertions;
@property (readonly, nonatomic) COClusterAliasManager *aliasManager;
@property (retain, nonatomic) COMeshController *homeMesh;
@property (retain, nonatomic) COMeshController *zoneMesh;
@property (retain, nonatomic) COMeshController *roomMesh;
@property (retain, nonatomic) COMeshController *groupMesh;
@property (retain, nonatomic) COMeshController *pairMesh;
@property (retain, nonatomic) COMeshController *activityGroupMesh;
@property (retain, nonatomic) COMeshController *dynamicGroupMesh;
@property (retain, nonatomic) NSDictionary *meshes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)startWithConstituentType:(unsigned long long)a0;

- (void)_significantHomeChange:(id)a0;
- (id)_controllerForHomeKitEntity_unsafe:(id)a0 label:(id)a1;
- (id)_controllerForDynamicGroup_unsafe;
- (void)aliasManager:(id)a0 deactivatingMesh:(id)a1 withClusterIdentifier:(id)a2 forClusters:(id)a3 completion:(id /* block */)a4;
- (void)_initializeServices;
- (id)_clusterNameForMeshController:(id)a0;
- (id)_initWithConstituentType:(unsigned long long)a0;
- (void)_controllerForCluster_unsafe:(id)a0 label:(id)a1 result:(id /* block */)a2;
- (void)_withLock:(id /* block */)a0;
- (void)aliasManager:(id)a0 activatingMesh:(id)a1 withClusterIdentifier:(id)a2 forClusters:(id)a3 completion:(id /* block */)a4;
- (id)takeAssertionForCluster:(id)a0;
- (void)_unlinkServicesFromMeshController:(id)a0 withClusterIdentifier:(id)a1 forClusters:(id)a2;
- (void)waitForClusterBootstrap:(id)a0 completion:(id /* block */)a1;
- (void)_continueInitialization;
- (void)_initiateMigrationFrom:(long long)a0;
- (void)ensureOnDemandControllerForCluster:(id)a0 completion:(id /* block */)a1;
- (void)didInvalidateAssertionForCluster:(id)a0;
- (id)aliasManagerRequestsNewMesh:(id)a0;
- (id)_servicesForClusters:(id)a0;
- (void)_withServicesLock:(id /* block */)a0;
- (void)didStopMeshController:(id)a0;
- (void)_activityGroupsChange:(id)a0;
- (void)_completeMigration;
- (id)_controllerForActivityGroup_unsafe;
- (void).cxx_destruct;
- (void)_linkServicesToMeshController:(id)a0 withClusterIdentifier:(id)a1 forClusters:(id)a2;
- (void)_continueMigration;

@end
