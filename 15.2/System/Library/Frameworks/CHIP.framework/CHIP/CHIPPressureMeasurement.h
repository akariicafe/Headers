@interface CHIPPressureMeasurement : CHIPCluster

@property (readonly) struct PressureMeasurementCluster { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct Device *mDevice; unsigned short mEndpoint; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (struct ClusterBase { void /* function */ **x0; unsigned int x1; struct Device *x2; unsigned short x3; } *)getCluster;
- (void)readAttributeClusterRevisionWithResponseHandler:(id /* block */)a0;
- (void)readAttributeMeasuredValueWithResponseHandler:(id /* block */)a0;
- (void)readAttributeMinMeasuredValueWithResponseHandler:(id /* block */)a0;
- (void)readAttributeMaxMeasuredValueWithResponseHandler:(id /* block */)a0;
- (void)configureAttributeMeasuredValueWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 change:(short)a2 responseHandler:(id /* block */)a3;
- (void)reportAttributeMeasuredValueWithResponseHandler:(id /* block */)a0;

@end
