@interface CHIPNetworkCommissioning : CHIPCluster

@property (readonly) struct NetworkCommissioningCluster { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct Device *mDevice; unsigned short mEndpoint; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (struct ClusterBase { void /* function */ **x0; unsigned int x1; struct Device *x2; unsigned short x3; } *)getCluster;
- (void)readAttributeClusterRevisionWithResponseHandler:(id /* block */)a0;
- (void)addThreadNetwork:(id)a0 breadcrumb:(unsigned long long)a1 timeoutMs:(unsigned int)a2 responseHandler:(id /* block */)a3;
- (void)addWiFiNetwork:(id)a0 credentials:(id)a1 breadcrumb:(unsigned long long)a2 timeoutMs:(unsigned int)a3 responseHandler:(id /* block */)a4;
- (void)disableNetwork:(id)a0 breadcrumb:(unsigned long long)a1 timeoutMs:(unsigned int)a2 responseHandler:(id /* block */)a3;
- (void)enableNetwork:(id)a0 breadcrumb:(unsigned long long)a1 timeoutMs:(unsigned int)a2 responseHandler:(id /* block */)a3;
- (void)getLastNetworkCommissioningResult:(unsigned int)a0 responseHandler:(id /* block */)a1;
- (void)removeNetwork:(id)a0 breadcrumb:(unsigned long long)a1 timeoutMs:(unsigned int)a2 responseHandler:(id /* block */)a3;
- (void)scanNetworks:(id)a0 breadcrumb:(unsigned long long)a1 timeoutMs:(unsigned int)a2 responseHandler:(id /* block */)a3;
- (void)updateThreadNetwork:(id)a0 breadcrumb:(unsigned long long)a1 timeoutMs:(unsigned int)a2 responseHandler:(id /* block */)a3;
- (void)updateWiFiNetwork:(id)a0 credentials:(id)a1 breadcrumb:(unsigned long long)a2 timeoutMs:(unsigned int)a3 responseHandler:(id /* block */)a4;
- (void)readAttributeFeatureMapWithResponseHandler:(id /* block */)a0;

@end
