@interface CHIPElectricalMeasurement : CHIPCluster

@property (readonly) struct ElectricalMeasurementCluster { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct Device *mDevice; unsigned short mEndpoint; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (struct ClusterBase { void /* function */ **x0; unsigned int x1; struct Device *x2; unsigned short x3; } *)getCluster;
- (void)readAttributeClusterRevisionWithResponseHandler:(id /* block */)a0;
- (void)readAttributeMeasurementTypeWithResponseHandler:(id /* block */)a0;
- (void)readAttributeTotalActivePowerWithResponseHandler:(id /* block */)a0;
- (void)readAttributeRmsVoltageWithResponseHandler:(id /* block */)a0;
- (void)readAttributeRmsVoltageMinWithResponseHandler:(id /* block */)a0;
- (void)readAttributeRmsVoltageMaxWithResponseHandler:(id /* block */)a0;
- (void)readAttributeRmsCurrentWithResponseHandler:(id /* block */)a0;
- (void)readAttributeRmsCurrentMinWithResponseHandler:(id /* block */)a0;
- (void)readAttributeRmsCurrentMaxWithResponseHandler:(id /* block */)a0;
- (void)readAttributeActivePowerWithResponseHandler:(id /* block */)a0;
- (void)readAttributeActivePowerMinWithResponseHandler:(id /* block */)a0;
- (void)readAttributeActivePowerMaxWithResponseHandler:(id /* block */)a0;

@end
