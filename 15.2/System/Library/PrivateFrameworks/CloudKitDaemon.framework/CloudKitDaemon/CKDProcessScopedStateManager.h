@interface CKDProcessScopedStateManager : NSObject <CKXPCProcessScopedDaemon>

+ (id)sharedManager;

- (void)clearPCSCachesForKnownContainersWithCompletionHandler:(id /* block */)a0;
- (void)kickOffPendingLongLivedOperations;
- (void)accountsWillDeleteAccount:(id)a0 completionHandler:(id /* block */)a1;
- (void)updatePushTokens;
- (void)dumpAllClientsStatusReportToFileHandle:(id)a0 completionHandler:(id /* block */)a1;
- (void)flushOperationMetricsToPowerLog;
- (id)_init;
- (void)wipeServerConfigurationsAndDie;
- (void)accountsDidRevokeAccessToBundleID:(id)a0 containerIdentifiers:(id)a1;
- (void)accountWithID:(id)a0 changedWithChangeType:(long long)a1;
- (void)accountsDidGrantAccessToBundleID:(id)a0 containerIdentifiers:(id)a1;
- (void)wipeAllCachesAndDie;

@end
