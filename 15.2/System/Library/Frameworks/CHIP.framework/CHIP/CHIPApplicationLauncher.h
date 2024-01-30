@interface CHIPApplicationLauncher : CHIPCluster

@property (readonly) struct ApplicationLauncherCluster { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct Device *mDevice; unsigned short mEndpoint; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (struct ClusterBase { void /* function */ **x0; unsigned int x1; struct Device *x2; unsigned short x3; } *)getCluster;
- (void)readAttributeClusterRevisionWithResponseHandler:(id /* block */)a0;
- (void)readAttributeApplicationIdWithResponseHandler:(id /* block */)a0;
- (void)readAttributeCatalogVendorIdWithResponseHandler:(id /* block */)a0;
- (void)launchApp:(id)a0 catalogVendorId:(unsigned short)a1 applicationId:(id)a2 responseHandler:(id /* block */)a3;
- (void)readAttributeApplicationLauncherListWithResponseHandler:(id /* block */)a0;

@end
