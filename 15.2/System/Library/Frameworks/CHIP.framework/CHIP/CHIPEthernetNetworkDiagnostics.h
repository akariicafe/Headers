@interface CHIPEthernetNetworkDiagnostics : CHIPCluster

@property (readonly) struct EthernetNetworkDiagnosticsCluster { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct Device *mDevice; unsigned short mEndpoint; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (struct ClusterBase { void /* function */ **x0; unsigned int x1; struct Device *x2; unsigned short x3; } *)getCluster;
- (void)readAttributeClusterRevisionWithResponseHandler:(id /* block */)a0;
- (void)resetCounts:(id /* block */)a0;
- (void)readAttributePacketRxCountWithResponseHandler:(id /* block */)a0;
- (void)readAttributePacketTxCountWithResponseHandler:(id /* block */)a0;
- (void)readAttributeTxErrCountWithResponseHandler:(id /* block */)a0;
- (void)readAttributeCollisionCountWithResponseHandler:(id /* block */)a0;
- (void)readAttributeOverrunCountWithResponseHandler:(id /* block */)a0;

@end
