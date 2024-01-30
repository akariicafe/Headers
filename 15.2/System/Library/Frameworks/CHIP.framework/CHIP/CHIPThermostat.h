@interface CHIPThermostat : CHIPCluster

@property (readonly) struct ThermostatCluster { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct Device *mDevice; unsigned short mEndpoint; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (struct ClusterBase { void /* function */ **x0; unsigned int x1; struct Device *x2; unsigned short x3; } *)getCluster;
- (void)readAttributeClusterRevisionWithResponseHandler:(id /* block */)a0;
- (void)readAttributeFeatureMapWithResponseHandler:(id /* block */)a0;
- (void)clearWeeklySchedule:(id /* block */)a0;
- (void)getRelayStatusLog:(id /* block */)a0;
- (void)getWeeklySchedule:(unsigned char)a0 modeToReturn:(unsigned char)a1 responseHandler:(id /* block */)a2;
- (void)setWeeklySchedule:(unsigned char)a0 dayOfWeekForSequence:(unsigned char)a1 modeForSequence:(unsigned char)a2 payload:(unsigned char)a3 responseHandler:(id /* block */)a4;
- (void)setpointRaiseLower:(unsigned char)a0 amount:(char)a1 responseHandler:(id /* block */)a2;
- (void)readAttributeLocalTemperatureWithResponseHandler:(id /* block */)a0;
- (void)configureAttributeLocalTemperatureWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 change:(short)a2 responseHandler:(id /* block */)a3;
- (void)reportAttributeLocalTemperatureWithResponseHandler:(id /* block */)a0;
- (void)readAttributeAbsMinHeatSetpointLimitWithResponseHandler:(id /* block */)a0;
- (void)readAttributeAbsMaxHeatSetpointLimitWithResponseHandler:(id /* block */)a0;
- (void)readAttributeAbsMinCoolSetpointLimitWithResponseHandler:(id /* block */)a0;
- (void)readAttributeAbsMaxCoolSetpointLimitWithResponseHandler:(id /* block */)a0;
- (void)readAttributeOccupiedCoolingSetpointWithResponseHandler:(id /* block */)a0;
- (void)writeAttributeOccupiedCoolingSetpointWithValue:(short)a0 responseHandler:(id /* block */)a1;
- (void)readAttributeOccupiedHeatingSetpointWithResponseHandler:(id /* block */)a0;
- (void)writeAttributeOccupiedHeatingSetpointWithValue:(short)a0 responseHandler:(id /* block */)a1;
- (void)readAttributeMinHeatSetpointLimitWithResponseHandler:(id /* block */)a0;
- (void)writeAttributeMinHeatSetpointLimitWithValue:(short)a0 responseHandler:(id /* block */)a1;
- (void)readAttributeMaxHeatSetpointLimitWithResponseHandler:(id /* block */)a0;
- (void)writeAttributeMaxHeatSetpointLimitWithValue:(short)a0 responseHandler:(id /* block */)a1;
- (void)readAttributeMinCoolSetpointLimitWithResponseHandler:(id /* block */)a0;
- (void)writeAttributeMinCoolSetpointLimitWithValue:(short)a0 responseHandler:(id /* block */)a1;
- (void)readAttributeMaxCoolSetpointLimitWithResponseHandler:(id /* block */)a0;
- (void)writeAttributeMaxCoolSetpointLimitWithValue:(short)a0 responseHandler:(id /* block */)a1;
- (void)readAttributeControlSequenceOfOperationWithResponseHandler:(id /* block */)a0;
- (void)writeAttributeControlSequenceOfOperationWithValue:(unsigned char)a0 responseHandler:(id /* block */)a1;
- (void)readAttributeSystemModeWithResponseHandler:(id /* block */)a0;
- (void)writeAttributeSystemModeWithValue:(unsigned char)a0 responseHandler:(id /* block */)a1;
- (void)readAttributeStartOfWeekWithResponseHandler:(id /* block */)a0;
- (void)readAttributeNumberOfWeeklyTransitionsWithResponseHandler:(id /* block */)a0;
- (void)readAttributeNumberOfDailyTransitionsWithResponseHandler:(id /* block */)a0;

@end
