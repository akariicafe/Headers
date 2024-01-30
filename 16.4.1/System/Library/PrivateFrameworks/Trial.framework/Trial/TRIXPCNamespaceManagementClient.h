@class _PASXPCClientHelper;

@interface TRIXPCNamespaceManagementClient : NSObject <TRINamespaceManagementProtocol> {
    _PASXPCClientHelper *_helper;
    _PASXPCClientHelper *_internalHelper;
}

- (BOOL)setProvisionalFactorPackId:(id)a0 forNamespaceName:(id)a1 error:(id *)a2;
- (BOOL)promoteFactorPackId:(id)a0 forNamespaceName:(id)a1 rolloutDeployment:(id)a2 error:(id *)a3;
- (BOOL)rejectFactorPackId:(id)a0 forNamespaceName:(id)a1 rolloutDeployment:(id)a2 error:(id *)a3;
- (id)activeRolloutInformation:(id *)a0;
- (id)loadNamespaceMetadataForNamespaceName:(id)a0 error:(id *)a1;
- (BOOL)setPurgeabilityLevelsForFactors:(id)a0 forNamespaceName:(id)a1 error:(id *)a2;
- (void)downloadLevelsForFactors:(id)a0 withNamespace:(id)a1 queue:(id)a2 factorsState:(id)a3 options:(id)a4 progress:(id /* block */)a5 completion:(id /* block */)a6;
- (BOOL)immediateDownloadForNamespaceNames:(id)a0 allowExpensiveNetworking:(BOOL)a1 error:(id *)a2;
- (BOOL)registerNamespaceWithNamespaceName:(id)a0 compatibilityVersion:(unsigned int)a1 defaultsFileURL:(id)a2 applicationGroup:(id)a3 cloudKitContainerId:(int)a4 error:(id *)a5;
- (unsigned long long)statusOfDownloadForFactors:(id)a0 withNamespace:(id)a1 factorsState:(id)a2 notificationKey:(id *)a3 error:(id *)a4;
- (BOOL)removeLevelsForFactors:(id)a0 withNamespace:(id)a1 factorsState:(id)a2 removeImmediately:(BOOL)a3 error:(id *)a4;
- (BOOL)startNamespaceDownloadWithName:(id)a0 options:(id)a1 error:(id *)a2;
- (id)init;
- (BOOL)deregisterNamespaceWithNamespaceName:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
