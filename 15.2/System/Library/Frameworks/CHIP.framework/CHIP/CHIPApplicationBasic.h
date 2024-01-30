@interface CHIPApplicationBasic : CHIPCluster

@property (readonly) struct ApplicationBasicCluster { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct Device *mDevice; unsigned short mEndpoint; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (struct ClusterBase { void /* function */ **x0; unsigned int x1; struct Device *x2; unsigned short x3; } *)getCluster;
- (void)readAttributeClusterRevisionWithResponseHandler:(id /* block */)a0;
- (void)changeStatus:(unsigned char)a0 responseHandler:(id /* block */)a1;
- (void)readAttributeVendorNameWithResponseHandler:(id /* block */)a0;
- (void)readAttributeVendorIdWithResponseHandler:(id /* block */)a0;
- (void)readAttributeApplicationNameWithResponseHandler:(id /* block */)a0;
- (void)readAttributeProductIdWithResponseHandler:(id /* block */)a0;
- (void)readAttributeApplicationIdWithResponseHandler:(id /* block */)a0;
- (void)readAttributeCatalogVendorIdWithResponseHandler:(id /* block */)a0;
- (void)readAttributeApplicationStatusWithResponseHandler:(id /* block */)a0;

@end
