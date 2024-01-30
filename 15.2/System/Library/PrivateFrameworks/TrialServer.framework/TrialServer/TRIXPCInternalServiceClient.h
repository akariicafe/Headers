@class _PASXPCClientHelper;

@interface TRIXPCInternalServiceClient : NSObject <TRIInternalServiceProtocol> {
    _PASXPCClientHelper *_helper;
}

- (void).cxx_destruct;
- (id)init;
- (BOOL)_performSyncXpcWithError:(id *)a0 block:(id /* block */)a1;
- (id)taskRecordsWithError:(id *)a0;
- (id)experimentNotificationsWithExperimentId:(id)a0 cloudKitContainer:(int)a1 teamId:(id)a2 error:(id *)a3;
- (id)rolloutNotificationWithLatestDeploymentForRolloutId:(id)a0 cloudKitContainer:(int)a1 teamId:(id)a2 error:(id *)a3;
- (BOOL)submitTask:(id)a0 options:(id)a1 error:(id *)a2;
- (id)lastFetchDateForContainer:(int)a0 teamId:(id)a1 error:(id *)a2;
- (BOOL)setLastFetchDate:(id)a0 forContainer:(int)a1 teamId:(id)a2 error:(id *)a3;
- (BOOL)setFailureInjectionDelegate:(id)a0 error:(id *)a1;
- (BOOL)suspendSQLiteCKDatabaseQueueWithError:(id *)a0;
- (BOOL)resumeSQLiteCKDatabaseQueueWithError:(id *)a0;
- (BOOL)registerNamespaceWithNamespaceName:(id)a0 compatibilityVersion:(unsigned int)a1 defaultsFileURL:(id)a2 withTeamId:(id)a3 appContainerId:(id)a4 appContainerType:(long long)a5 cloudKitContainerId:(int)a6 error:(id *)a7;
- (BOOL)deregisterNamespaceWithNamespaceName:(id)a0 withTeamId:(id)a1 error:(id *)a2;
- (BOOL)startNamespaceDownloadWithName:(id)a0 withTeamId:(id)a1 options:(id)a2 error:(id *)a3;
- (id)dynamicNamespaceRecordsWithError:(id *)a0;
- (id)subscriptionForNamespaceName:(id)a0 error:(id *)a1;
- (BOOL)setSubscription:(id)a0 namespaceName:(id)a1 error:(id *)a2;
- (BOOL)immediatelySchedulePostUpgradeActivityWithError:(id *)a0;

@end
