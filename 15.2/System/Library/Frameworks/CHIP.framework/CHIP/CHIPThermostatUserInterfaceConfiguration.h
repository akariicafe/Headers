@interface CHIPThermostatUserInterfaceConfiguration : CHIPCluster

@property (readonly) struct ThermostatUserInterfaceConfigurationCluster { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct Device *mDevice; unsigned short mEndpoint; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (struct ClusterBase { void /* function */ **x0; unsigned int x1; struct Device *x2; unsigned short x3; } *)getCluster;
- (void)readAttributeClusterRevisionWithResponseHandler:(id /* block */)a0;
- (void)readAttributeTemperatureDisplayModeWithResponseHandler:(id /* block */)a0;
- (void)writeAttributeTemperatureDisplayModeWithValue:(unsigned char)a0 responseHandler:(id /* block */)a1;
- (void)readAttributeKeypadLockoutWithResponseHandler:(id /* block */)a0;
- (void)writeAttributeKeypadLockoutWithValue:(unsigned char)a0 responseHandler:(id /* block */)a1;
- (void)readAttributeScheduleProgrammingVisibilityWithResponseHandler:(id /* block */)a0;
- (void)writeAttributeScheduleProgrammingVisibilityWithValue:(unsigned char)a0 responseHandler:(id /* block */)a1;

@end
