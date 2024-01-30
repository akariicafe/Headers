@interface AVCaptureAutoExposureBracketedStillImageSettings : AVCaptureBracketedStillImageSettings

@property (readonly) float exposureTargetBias;

+ (void)initialize;
+ (id)autoExposureSettingsWithExposureTargetBias:(float)a0;

- (id)description;
- (id)debugDescription;
- (id)_initAutoExposureSettingsWithExposureTargetBias:(float)a0;

@end
