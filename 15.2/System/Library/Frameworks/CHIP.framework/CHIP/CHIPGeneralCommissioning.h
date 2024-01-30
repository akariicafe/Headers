@interface CHIPGeneralCommissioning : CHIPCluster

@property (readonly) struct GeneralCommissioningCluster { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct Device *mDevice; unsigned short mEndpoint; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)commissioningComplete:(id /* block */)a0;
- (struct ClusterBase { void /* function */ **x0; unsigned int x1; struct Device *x2; unsigned short x3; } *)getCluster;
- (void)readAttributeClusterRevisionWithResponseHandler:(id /* block */)a0;
- (void)armFailSafe:(unsigned short)a0 breadcrumb:(unsigned long long)a1 timeoutMs:(unsigned int)a2 responseHandler:(id /* block */)a3;
- (void)setRegulatoryConfig:(unsigned char)a0 countryCode:(id)a1 breadcrumb:(unsigned long long)a2 timeoutMs:(unsigned int)a3 responseHandler:(id /* block */)a4;
- (void)readAttributeBreadcrumbWithResponseHandler:(id /* block */)a0;
- (void)writeAttributeBreadcrumbWithValue:(unsigned long long)a0 responseHandler:(id /* block */)a1;
- (void)readAttributeBasicCommissioningInfoListWithResponseHandler:(id /* block */)a0;

@end
