@interface CHIPPumpConfigurationAndControl : CHIPCluster

@property (readonly) struct PumpConfigurationAndControlCluster { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct Device *mDevice; unsigned short mEndpoint; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (struct ClusterBase { void /* function */ **x0; unsigned int x1; struct Device *x2; unsigned short x3; } *)getCluster;
- (void)readAttributeClusterRevisionWithResponseHandler:(id /* block */)a0;
- (void)readAttributeMaxPressureWithResponseHandler:(id /* block */)a0;
- (void)readAttributeMaxSpeedWithResponseHandler:(id /* block */)a0;
- (void)readAttributeMaxFlowWithResponseHandler:(id /* block */)a0;
- (void)readAttributeEffectiveOperationModeWithResponseHandler:(id /* block */)a0;
- (void)readAttributeEffectiveControlModeWithResponseHandler:(id /* block */)a0;
- (void)readAttributeCapacityWithResponseHandler:(id /* block */)a0;
- (void)configureAttributeCapacityWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 change:(short)a2 responseHandler:(id /* block */)a3;
- (void)reportAttributeCapacityWithResponseHandler:(id /* block */)a0;
- (void)readAttributeOperationModeWithResponseHandler:(id /* block */)a0;
- (void)writeAttributeOperationModeWithValue:(unsigned char)a0 responseHandler:(id /* block */)a1;

@end
