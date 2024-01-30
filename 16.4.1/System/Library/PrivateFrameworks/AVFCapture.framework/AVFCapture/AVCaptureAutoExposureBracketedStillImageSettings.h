@interface AVCaptureAutoExposureBracketedStillImageSettings : AVCaptureBracketedStillImageSettings

@property (readonly) float exposureTargetBias;

+ (void)initialize;
+ (id)autoExposureSettingsWithExposureTargetBias:(float)a0;

- (id)debugDescription;
- (id)description;
- (id)_initAutoExposureSettingsWithExposureTargetBias:(float)a0;

@end
