@class NSUUID, NSString;

@interface MSPRemoteCollectionsContainerPersister : MSPContainerPersister <MSPMapsPushDaemonProxyObserver>

@property (nonatomic) BOOL hasRemoteProxy;
@property (retain, nonatomic) NSUUID *lastOperationIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pushDaemonProxyReceivedNotificationData:(id)a0 forType:(id)a1 recordIdentifier:(id)a2;
- (id)init;
- (void).cxx_destruct;
- (void)historyDidChange;
- (void)dealloc;
- (void)favoritesDidChange;
- (void)eraseWithCompletion:(id /* block */)a0;
- (void)fetchStateSnapshotWithCompletion:(id /* block */)a0;
- (void)commitEditWithNewContents:(id)a0 edits:(id)a1 appliedToOldContents:(id)a2 completion:(id /* block */)a3;
- (void)commitByMergingWithStateSnapshot:(id)a0 mergeOptions:(id)a1 completion:(id /* block */)a2;

@end
