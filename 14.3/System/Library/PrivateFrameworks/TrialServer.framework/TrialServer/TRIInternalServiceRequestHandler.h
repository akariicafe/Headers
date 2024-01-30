@class TRIServerContext;
@protocol TRITaskQueuing, TRITrialInternalEntitled;

@interface TRIInternalServiceRequestHandler : NSObject <TRIXPCInternalServiceProtocol> {
    TRIServerContext *_serverContext;
    id<TRITaskQueuing> _taskQueue;
    id<TRITrialInternalEntitled> _entitlementWitness;
}

- (void).cxx_destruct;
- (void)taskRecordsWithCompletion:(id /* block */)a0;
- (void)experimentNotificationsWithExperimentId:(id)a0 cloudKitContainer:(int)a1 teamId:(id)a2 completion:(id /* block */)a3;
- (void)submitTask:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)lastFetchDateForContainer:(int)a0 teamId:(id)a1 completion:(id /* block */)a2;
- (void)setLastFetchDate:(id)a0 forContainer:(int)a1 teamId:(id)a2 completion:(id /* block */)a3;
- (void)registerNamespaceWithNamespaceName:(id)a0 compatibilityVersion:(unsigned int)a1 defaultsFileURL:(id)a2 teamId:(id)a3 appContainerId:(id)a4 appContainerType:(long long)a5 cloudKitContainerId:(int)a6 completion:(id /* block */)a7;
- (void)deregisterNamespaceWithNamespaceName:(id)a0 teamId:(id)a1 completion:(id /* block */)a2;
- (void)startDownloadNamespaceWithName:(id)a0 teamId:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (void)dynamicNamespaceRecordsWithCompletion:(id /* block */)a0;
- (id)initWithServerContext:(id)a0 taskQueue:(id)a1 entitlementWitness:(id)a2;

@end
