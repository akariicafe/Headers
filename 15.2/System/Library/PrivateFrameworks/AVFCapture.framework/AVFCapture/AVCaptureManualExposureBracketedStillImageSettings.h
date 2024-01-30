@interface AVCaptureManualExposureBracketedStillImageSettings : AVCaptureBracketedStillImageSettings

@property (readonly) struct { long long value; int timescale; unsigned int flags; long long epoch; } exposureDuration;
@property (readonly) float ISO;

+ (void)initialize;
+ (id)manualExposureSettingsWithExposureDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 ISO:(float)a1;

- (id)description;
- (id)debugDescription;
- (id)_initManualExposureSettingsWithExposureDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 ISO:(float)a1;

@end
