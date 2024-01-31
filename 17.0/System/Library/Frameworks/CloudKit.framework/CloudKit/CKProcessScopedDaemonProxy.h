@class NSXPCInterface;
@protocol NSObject, CKXPCProcessScopedDaemon;

@interface CKProcessScopedDaemonProxy : NSObject

@property (class, readonly, copy) NSXPCInterface *CKXPCClientToDaemonProcessScopedInterface;
@property (class, readonly, copy) NSXPCInterface *CKXPCDaemonToClientProcessScopedInterface;

@property (retain, nonatomic) id<CKXPCProcessScopedDaemon> processScopedDaemonProxyCreator;
@property BOOL hasValidProcessScopedDaemonProxyCreator;
@property (retain, nonatomic) id<NSObject> connectionInterruptedObserver;

+ (id)sharedProcessScopedDaemonProxy;

- (void)fetchUsabilityForTestAccountCredentials:(id)a0 completionHandler:(id /* block */)a1;
- (void)dealloc;
- (id)globalDeviceIdentifier;
- (id)initInternal;
- (void)_getProcessScopedDaemonProxyCreatorSynchronous:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)accountsDidRevokeAccessToBundleID:(id)a0 containerIdentifiers:(id)a1;
- (void)accountsWillDeleteAccount:(id)a0 completionHandler:(id /* block */)a1;
- (void)accountsDidGrantAccessToBundleID:(id)a0 containerIdentifiers:(id)a1;
- (void)wipeServerConfigurationsAndDie;
- (unsigned long long)maxInlineMergeableDeltaSize;
- (void).cxx_destruct;
- (void)wipeAllCachesAndDie;
- (void)updatePushTokens;
- (void)dumpAllClientsStatusReportToFileHandle:(id)a0 completionHandler:(id /* block */)a1;
- (void)_getProcessScopedDaemonProxySynchronous:(BOOL)a0 errorHandler:(id /* block */)a1 daemonProxyHandler:(id /* block */)a2;
- (void)kill;
- (void)accountWithID:(id)a0 changedWithChangeType:(long long)a1;
- (void)clearPCSCachesForKnownContainersWithCompletionHandler:(id /* block */)a0;

@end
