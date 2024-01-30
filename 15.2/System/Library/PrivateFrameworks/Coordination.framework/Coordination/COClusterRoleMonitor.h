@class NSArray, NSString, NSXPCConnection;
@protocol COClusterRoleMonitorConnectionProvider;

@interface COClusterRoleMonitor : NSObject <COClusterRoleMonitorClientInterface> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (weak, nonatomic) NSXPCConnection *lastConnection;
@property (readonly, nonatomic) id<COClusterRoleMonitorConnectionProvider> provider;
@property (copy, nonatomic) NSArray *memberObservers;
@property (readonly, copy, nonatomic) NSString *cluster;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_remoteInterfaceWithErrorHandler:(id /* block */)a0;
- (id)_serviceConnection;
- (void)_lostConnectionToService;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_withLock:(id /* block */)a0;
- (void)roleOfMember:(id)a0 inCluster:(id)a1 didChangeTo:(id)a2;
- (id)initWithConnectionProvider:(id)a0 cluster:(id)a1;
- (void)_registerMemberObserver:(id)a0;
- (void)_unregisterMemberObserver:(id)a0;
- (id)initWithCluster:(id)a0;
- (id)addObserverForMember:(id)a0 toDispatchQueue:(id)a1 block:(id /* block */)a2;
- (void)removeObserverForMember:(id)a0;
- (id)_synchronousRemoteInterfaceWithErrorHandler:(id /* block */)a0;

@end
