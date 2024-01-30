@protocol _DKSyncRemoteContextStorageDelegate;

@interface _DKSyncRapportContextStorage : _DKSyncRapportStorage <_DKSyncRemoteContextStorage>

@property (retain, nonatomic) id<_DKSyncRemoteContextStorageDelegate> delegate;

+ (id)sharedInstance;

- (void)subscribeToContextValueChangeNotificationsFromPeer:(id)a0 registrationIdentifier:(id)a1 predicate:(id)a2 highPriority:(BOOL)a3 completion:(id /* block */)a4;
- (void)unsubscribeFromContextValueChangeNotificationsFromPeer:(id)a0 registrationIdentifier:(id)a1 predicate:(id)a2 highPriority:(BOOL)a3 completion:(id /* block */)a4;
- (void)registerRequestIDsWithClient:(id)a0;
- (void).cxx_destruct;
- (void)fetchContextValuesFromPeer:(id)a0 forKeyPaths:(id)a1 highPriority:(BOOL)a2 completion:(id /* block */)a3;
- (void)sendContextValuesToPeer:(id)a0 registrationIdentifier:(id)a1 archivedObjects:(id)a2 highPriority:(BOOL)a3 completion:(id /* block */)a4;

@end
