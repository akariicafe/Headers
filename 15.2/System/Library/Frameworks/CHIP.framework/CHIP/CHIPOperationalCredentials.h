@interface CHIPOperationalCredentials : CHIPCluster

@property (readonly) struct OperationalCredentialsCluster { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct Device *mDevice; unsigned short mEndpoint; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (struct ClusterBase { void /* function */ **x0; unsigned int x1; struct Device *x2; unsigned short x3; } *)getCluster;
- (void)readAttributeClusterRevisionWithResponseHandler:(id /* block */)a0;
- (void)addNOC:(id)a0 iPKValue:(id)a1 caseAdminNode:(unsigned long long)a2 adminVendorId:(unsigned short)a3 responseHandler:(id /* block */)a4;
- (void)addTrustedRootCertificate:(id)a0 responseHandler:(id /* block */)a1;
- (void)opCSRRequest:(id)a0 responseHandler:(id /* block */)a1;
- (void)removeFabric:(unsigned char)a0 responseHandler:(id /* block */)a1;
- (void)removeTrustedRootCertificate:(id)a0 responseHandler:(id /* block */)a1;
- (void)updateFabricLabel:(id)a0 responseHandler:(id /* block */)a1;
- (void)updateNOC:(id)a0 responseHandler:(id /* block */)a1;
- (void)readAttributeFabricsListWithResponseHandler:(id /* block */)a0;
- (void)readAttributeSupportedFabricsWithResponseHandler:(id /* block */)a0;
- (void)readAttributeCommissionedFabricsWithResponseHandler:(id /* block */)a0;

@end
