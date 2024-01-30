@class TRIServerContext;
@protocol TRITaskQueuing;

@interface TRIXPCNamespaceManagementRequestHandler : NSObject <TRIXPCNamespaceManagementServiceProtocol> {
    TRIServerContext *_serverContext;
    id<TRITaskQueuing> _taskQueue;
    struct { unsigned int val[8]; } _auditToken;
}

+ (void)usingServerContext:(id)a0 registerNamespaceWithNamespaceName:(id)a1 compatibilityVersion:(unsigned int)a2 defaultsFileURL:(id)a3 teamId:(id)a4 appContainerId:(id)a5 appContainerType:(long long)a6 cloudKitContainerId:(int)a7 bundleId:(id)a8 completion:(id /* block */)a9;
+ (void)usingServerContext:(id)a0 deregisterNamespaceWithName:(id)a1 teamId:(id)a2 taskQueue:(id)a3 completion:(id /* block */)a4;
+ (void)usingServerContext:(id)a0 taskQueue:(id)a1 startDownloadNamespaceWithName:(id)a2 attribution:(id)a3 completion:(id /* block */)a4;
+ (void)_usingEntitlementWitness:(id)a0 serverContext:(id)a1 taskQueue:(id)a2 startDownloadAssetIndexesByTreatment:(id)a3 namespace:(id)a4 taskAttribution:(id)a5 notificationKey:(id)a6;
+ (void)resumeTaskQueue:(id)a0 forNetworkOptions:(id)a1;

- (void).cxx_destruct;
- (void)registerNamespaceWithNamespaceName:(id)a0 compatibilityVersion:(unsigned int)a1 defaultsFileURL:(id)a2 applicationGroup:(id)a3 cloudKitContainerId:(int)a4 completion:(id /* block */)a5;
- (void)deregisterNamespaceWithNamespaceName:(id)a0 completion:(id /* block */)a1;
- (void)startDownloadNamespaceWithName:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)startDownloadLevelsForFactors:(id)a0 withNamespace:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (id)initWithServerContext:(id)a0 taskQueue:(id)a1 auditToken:(struct { unsigned int x0[8]; })a2;

@end
