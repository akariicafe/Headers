@class NSDictionary, NSString;

@interface CORoleService : COService <CORoleAddOnDelegate, COClusterRoleMonitorServiceInterface>

@property (retain, nonatomic) NSDictionary *snapshotState;
@property (retain, nonatomic) NSDictionary *roleObservers;
@property (retain, nonatomic) NSDictionary *memberObservers;
@property (retain, nonatomic) NSDictionary *snapshotObservers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serviceWithDelegate:(id)a0;

- (void)_clientLost:(id)a0;
- (id)_membersWithRole:(id)a0 inCluster:(id)a1;
- (void)_addRoleObserverForClient:(id)a0 ofMember:(id)a1 inCluster:(id)a2;
- (void)_removeMemberObserverForClient:(id)a0 ofRole:(id)a1 inCluster:(id)a2;
- (void)_removeRoleObserverForClient:(id)a0 ofMember:(id)a1 inCluster:(id)a2;
- (void)registerForRoleChangesOfMember:(id)a0 inCluster:(id)a1;
- (BOOL)_applicableToCluster:(id)a0;
- (void)_addOnRemoved:(id)a0;
- (id)_roleOfMember:(id)a0 inCluster:(id)a1;
- (void)_updateSnapshots:(id)a0 inCluster:(id)a1;
- (void)_identifyAndNotifyMemberChangesFromSnapshot:(id)a0 inCluster:(id)a1;
- (id)_remoteInterfaceForClient:(id)a0 withErrorHandler:(id /* block */)a1;
- (void)unregisterForRoleChangesOfMember:(id)a0 inCluster:(id)a1;
- (void)_notifyMemberObserver:(id)a0 membersWithRole:(id)a1 inCluster:(id)a2 didChangeTo:(id)a3;
- (id)initWithListenerProvider:(id)a0 addOnProvider:(id)a1 delegate:(id)a2;
- (void)unregisterForSnapshotChangesInCluster:(id)a0;
- (void)_addSnapshotObserverForClient:(id)a0 inCluster:(id)a1;
- (id)_membersWithRole:(id)a0 inSnapshots:(id)a1;
- (void)_notifyMemberObserversMembersWithRole:(id)a0 inCluster:(id)a1 didChangeTo:(id)a2;
- (void)registerForMemberChangesWithRole:(id)a0 inCluster:(id)a1;
- (void)_notifySnapshotObserver:(id)a0 snapshotOfCluster:(id)a1 didChangeTo:(id)a2;
- (void)_notifySnapshotObserversSnapshotOfCluster:(id)a0 didChangeTo:(id)a1;
- (BOOL)_canRequestCreationOfCluster:(id)a0;
- (id)_snapshotsForCluster:(id)a0;
- (void)_notifyRoleObserver:(id)a0 roleOfMember:(id)a1 inCluster:(id)a2 didChangeTo:(id)a3;
- (void)_notifyRoleObserversRoleOfMember:(id)a0 inCluster:(id)a1 didChangeTo:(id)a2;
- (void)addOn:(id)a0 stateChanged:(id)a1;
- (void)unregisterForMemberChangesWithRole:(id)a0 inCluster:(id)a1;
- (void)_addMemberObserverForClient:(id)a0 ofRole:(id)a1 inCluster:(id)a2;
- (void)_addOnAdded:(id)a0;
- (void)_identifyAndNotifyRoleChangesFromSnapshot:(id)a0 inCluster:(id)a1;
- (void)_removeSnapshotObserverForClient:(id)a0 inCluster:(id)a1;
- (void).cxx_destruct;
- (void)_configureServiceInterfacesOnConnection:(id)a0;
- (id)_roleOfMember:(id)a0 inSnapshots:(id)a1;
- (void)registerForSnapshotChangesInCluster:(id)a0;

@end
