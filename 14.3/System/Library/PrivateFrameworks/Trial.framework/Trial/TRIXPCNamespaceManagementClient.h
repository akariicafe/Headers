@class _PASXPCClientHelper;

@interface TRIXPCNamespaceManagementClient : NSObject <TRINamespaceManagementProtocol> {
    _PASXPCClientHelper *_helper;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)startNamespaceDownloadWithName:(id)a0 options:(id)a1 error:(id *)a2;
- (BOOL)registerNamespaceWithNamespaceName:(id)a0 compatibilityVersion:(unsigned int)a1 defaultsFileURL:(id)a2 applicationGroup:(id)a3 cloudKitContainerId:(int)a4 error:(id *)a5;
- (id)startDownloadLevelsForFactors:(id)a0 withNamespace:(id)a1 options:(id)a2 error:(id *)a3;
- (BOOL)deregisterNamespaceWithNamespaceName:(id)a0 error:(id *)a1;

@end
