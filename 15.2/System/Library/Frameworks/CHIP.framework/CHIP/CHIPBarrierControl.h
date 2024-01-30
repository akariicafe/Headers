@interface CHIPBarrierControl : CHIPCluster

@property (readonly) struct BarrierControlCluster { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct Device *mDevice; unsigned short mEndpoint; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (struct ClusterBase { void /* function */ **x0; unsigned int x1; struct Device *x2; unsigned short x3; } *)getCluster;
- (void)readAttributeClusterRevisionWithResponseHandler:(id /* block */)a0;
- (void)barrierControlGoToPercent:(unsigned char)a0 responseHandler:(id /* block */)a1;
- (void)barrierControlStop:(id /* block */)a0;
- (void)readAttributeBarrierMovingStateWithResponseHandler:(id /* block */)a0;
- (void)readAttributeBarrierSafetyStatusWithResponseHandler:(id /* block */)a0;
- (void)readAttributeBarrierCapabilitiesWithResponseHandler:(id /* block */)a0;
- (void)readAttributeBarrierPositionWithResponseHandler:(id /* block */)a0;

@end
