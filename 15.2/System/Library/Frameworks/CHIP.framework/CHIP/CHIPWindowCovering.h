@interface CHIPWindowCovering : CHIPCluster

@property (readonly) struct WindowCoveringCluster { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct Device *mDevice; unsigned short mEndpoint; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (struct ClusterBase { void /* function */ **x0; unsigned int x1; struct Device *x2; unsigned short x3; } *)getCluster;
- (void)readAttributeClusterRevisionWithResponseHandler:(id /* block */)a0;
- (void)downOrClose:(id /* block */)a0;
- (void)goToLiftPercentage:(unsigned char)a0 liftPercent100thsValue:(unsigned short)a1 responseHandler:(id /* block */)a2;
- (void)goToLiftValue:(unsigned short)a0 responseHandler:(id /* block */)a1;
- (void)goToTiltPercentage:(unsigned char)a0 tiltPercent100thsValue:(unsigned short)a1 responseHandler:(id /* block */)a2;
- (void)goToTiltValue:(unsigned short)a0 responseHandler:(id /* block */)a1;
- (void)stopMotion:(id /* block */)a0;
- (void)upOrOpen:(id /* block */)a0;
- (void)readAttributeTypeWithResponseHandler:(id /* block */)a0;
- (void)readAttributeCurrentPositionLiftWithResponseHandler:(id /* block */)a0;
- (void)readAttributeCurrentPositionTiltWithResponseHandler:(id /* block */)a0;
- (void)readAttributeConfigStatusWithResponseHandler:(id /* block */)a0;
- (void)readAttributeCurrentPositionLiftPercentageWithResponseHandler:(id /* block */)a0;
- (void)configureAttributeCurrentPositionLiftPercentageWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 change:(unsigned char)a2 responseHandler:(id /* block */)a3;
- (void)reportAttributeCurrentPositionLiftPercentageWithResponseHandler:(id /* block */)a0;
- (void)readAttributeCurrentPositionTiltPercentageWithResponseHandler:(id /* block */)a0;
- (void)configureAttributeCurrentPositionTiltPercentageWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 change:(unsigned char)a2 responseHandler:(id /* block */)a3;
- (void)reportAttributeCurrentPositionTiltPercentageWithResponseHandler:(id /* block */)a0;
- (void)readAttributeOperationalStatusWithResponseHandler:(id /* block */)a0;
- (void)configureAttributeOperationalStatusWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 responseHandler:(id /* block */)a2;
- (void)reportAttributeOperationalStatusWithResponseHandler:(id /* block */)a0;
- (void)readAttributeTargetPositionLiftPercent100thsWithResponseHandler:(id /* block */)a0;
- (void)configureAttributeTargetPositionLiftPercent100thsWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 change:(unsigned short)a2 responseHandler:(id /* block */)a3;
- (void)reportAttributeTargetPositionLiftPercent100thsWithResponseHandler:(id /* block */)a0;
- (void)readAttributeTargetPositionTiltPercent100thsWithResponseHandler:(id /* block */)a0;
- (void)configureAttributeTargetPositionTiltPercent100thsWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 change:(unsigned short)a2 responseHandler:(id /* block */)a3;
- (void)reportAttributeTargetPositionTiltPercent100thsWithResponseHandler:(id /* block */)a0;
- (void)readAttributeEndProductTypeWithResponseHandler:(id /* block */)a0;
- (void)readAttributeCurrentPositionLiftPercent100thsWithResponseHandler:(id /* block */)a0;
- (void)configureAttributeCurrentPositionLiftPercent100thsWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 change:(unsigned short)a2 responseHandler:(id /* block */)a3;
- (void)reportAttributeCurrentPositionLiftPercent100thsWithResponseHandler:(id /* block */)a0;
- (void)readAttributeCurrentPositionTiltPercent100thsWithResponseHandler:(id /* block */)a0;
- (void)configureAttributeCurrentPositionTiltPercent100thsWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 change:(unsigned short)a2 responseHandler:(id /* block */)a3;
- (void)reportAttributeCurrentPositionTiltPercent100thsWithResponseHandler:(id /* block */)a0;
- (void)readAttributeInstalledOpenLimitLiftWithResponseHandler:(id /* block */)a0;
- (void)readAttributeInstalledClosedLimitLiftWithResponseHandler:(id /* block */)a0;
- (void)readAttributeInstalledOpenLimitTiltWithResponseHandler:(id /* block */)a0;
- (void)readAttributeInstalledClosedLimitTiltWithResponseHandler:(id /* block */)a0;
- (void)readAttributeModeWithResponseHandler:(id /* block */)a0;
- (void)writeAttributeModeWithValue:(unsigned char)a0 responseHandler:(id /* block */)a1;
- (void)readAttributeSafetyStatusWithResponseHandler:(id /* block */)a0;
- (void)configureAttributeSafetyStatusWithMinInterval:(unsigned short)a0 maxInterval:(unsigned short)a1 responseHandler:(id /* block */)a2;
- (void)reportAttributeSafetyStatusWithResponseHandler:(id /* block */)a0;

@end
