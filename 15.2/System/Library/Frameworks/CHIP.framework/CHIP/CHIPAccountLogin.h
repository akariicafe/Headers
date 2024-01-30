@interface CHIPAccountLogin : CHIPCluster

@property (readonly) struct AccountLoginCluster { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct Device *mDevice; unsigned short mEndpoint; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (struct ClusterBase { void /* function */ **x0; unsigned int x1; struct Device *x2; unsigned short x3; } *)getCluster;
- (void)getSetupPIN:(id)a0 responseHandler:(id /* block */)a1;
- (void)login:(id)a0 setupPIN:(id)a1 responseHandler:(id /* block */)a2;
- (void)readAttributeClusterRevisionWithResponseHandler:(id /* block */)a0;

@end
