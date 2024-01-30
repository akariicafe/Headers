@class AVCameraCalibrationData;

@interface NUJSAVCameraCalibrationData : NUJSProxy <NUJSAVCameraCalibrationDataExport>

@property (readonly) AVCameraCalibrationData *cameraCalibrationData;

- (id)initWithDepthCameraCalibrationData:(id)a0 context:(id)a1;
- (id)initWithRepresentedObject:(id)a0 context:(id)a1;
- (id)nu_unwrapJSValue;

@end
