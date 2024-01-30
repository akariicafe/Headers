@interface CHIPContentLauncher : CHIPCluster

@property (readonly) struct ContentLauncherCluster { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct Device *mDevice; unsigned short mEndpoint; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (struct ClusterBase { void /* function */ **x0; unsigned int x1; struct Device *x2; unsigned short x3; } *)getCluster;
- (void)readAttributeClusterRevisionWithResponseHandler:(id /* block */)a0;
- (void)launchContent:(BOOL)a0 data:(id)a1 responseHandler:(id /* block */)a2;
- (void)launchURL:(id)a0 displayString:(id)a1 responseHandler:(id /* block */)a2;
- (void)readAttributeAcceptsHeaderListWithResponseHandler:(id /* block */)a0;
- (void)readAttributeSupportedStreamingTypesWithResponseHandler:(id /* block */)a0;

@end
