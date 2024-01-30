@interface FigCaptureAPSSphereInteractionCalibrationContext : FigCaptureCalibrationContext

+ (void)initialize;
+ (id)calibrationDataStringForInternalLogging:(id)a0;
+ (unsigned int)calibrationStatusFromRawStreamCalibrationData:(id)a0;
+ (id)createRawStreamCalibrationDataWithFailureReasons:(int)a0;
+ (void)printDebugInfoForRawStreamCalibrationData:(id)a0;

- (id)initWithSupportedDeviceNames:(id)a0;
- (void)reportLoggingWithCalibrationData:(id)a0 isValid:(BOOL)a1 magneticFieldMagnitude:(double)a2;

@end
