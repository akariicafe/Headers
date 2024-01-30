@interface CHIPWiFiNetworkDiagnostics : CHIPCluster

@property (readonly) struct WiFiNetworkDiagnosticsCluster { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct Device *mDevice; unsigned short mEndpoint; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (struct ClusterBase { void /* function */ **x0; unsigned int x1; struct Device *x2; unsigned short x3; } *)getCluster;
- (void)readAttributeClusterRevisionWithResponseHandler:(id /* block */)a0;
- (void)resetCounts:(id /* block */)a0;
- (void)readAttributeBssidWithResponseHandler:(id /* block */)a0;
- (void)readAttributeSecurityTypeWithResponseHandler:(id /* block */)a0;
- (void)readAttributeWiFiVersionWithResponseHandler:(id /* block */)a0;
- (void)readAttributeChannelNumberWithResponseHandler:(id /* block */)a0;
- (void)readAttributeRssiWithResponseHandler:(id /* block */)a0;

@end
