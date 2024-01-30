@interface CFXDefaultThermalPolicy : JFXCameraFPSThermalPolicy

- (unsigned long long)priority;
- (void)cameraFPSForThermalLevel:(int)a0 deviceType:(id)a1 minRate:(out int *)a2 maxRate:(out int *)a3;

@end
