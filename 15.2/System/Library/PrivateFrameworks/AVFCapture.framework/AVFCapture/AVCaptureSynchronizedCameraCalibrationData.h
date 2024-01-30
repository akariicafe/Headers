@class AVCameraCalibrationData;

@interface AVCaptureSynchronizedCameraCalibrationData : AVCaptureSynchronizedData {
    AVCameraCalibrationData *_cameraCalibrationData;
    BOOL _cameraCalibrationDataWasDropped;
    long long _droppedReason;
}

@property (readonly) AVCameraCalibrationData *cameraCalibrationData;
@property (readonly) BOOL cameraCalibrationDataWasDropped;
@property (readonly) long long droppedReason;

- (void)dealloc;
- (id)_initWithCameraCalibrationData:(id)a0 timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 cameraCalibrationDataWasDropped:(BOOL)a2 droppedReason:(long long)a3;

@end
