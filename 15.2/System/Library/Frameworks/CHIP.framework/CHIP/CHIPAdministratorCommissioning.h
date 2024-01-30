@interface CHIPAdministratorCommissioning : CHIPCluster

@property (readonly) struct AdministratorCommissioningCluster { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct Device *mDevice; unsigned short mEndpoint; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (struct ClusterBase { void /* function */ **x0; unsigned int x1; struct Device *x2; unsigned short x3; } *)getCluster;
- (void)readAttributeClusterRevisionWithResponseHandler:(id /* block */)a0;
- (void)openBasicCommissioningWindow:(unsigned short)a0 responseHandler:(id /* block */)a1;
- (void)openCommissioningWindow:(unsigned short)a0 pAKEVerifier:(id)a1 discriminator:(unsigned short)a2 iterations:(unsigned int)a3 salt:(id)a4 passcodeID:(unsigned short)a5 responseHandler:(id /* block */)a6;
- (void)revokeCommissioning:(id /* block */)a0;

@end
