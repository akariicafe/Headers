@interface CAMStillImageCaptureResolvedSettings : NSObject

@property (readonly, nonatomic, getter=isHDREnabled) BOOL HDREnabled;
@property (readonly, nonatomic, getter=isPortraitEffectEnabled) BOOL portraitEffectEnabled;
@property (readonly, nonatomic) double lowLightCaptureTime;
@property (readonly, nonatomic) struct CGColor { } *lowLightPreviewColorEstimate;
@property (readonly, nonatomic) BOOL lowLightCaptureHasInitialPreviewFeedbackSensitivity;
@property (readonly, nonatomic) BOOL lowLightCaptureHasConstantPreviewFeedbackSensitivity;
@property (readonly, nonatomic, getter=isCaptureBeforeResolvingSettingsEnabled) BOOL captureBeforeResolvingSettingsEnabled;

- (id)initWithHDREnabled:(BOOL)a0 portraitEffectEnabled:(BOOL)a1 lowLightCaptureTime:(double)a2 lowLightPreviewColorEstimate:(struct CGColor { } *)a3 lowLightCaptureHasInitialPreviewFeedbackSensitivity:(BOOL)a4 lowLightCaptureHasConstantPreviewFeedbackSensitivity:(BOOL)a5 captureBeforeResolvingSettingsEnabled:(BOOL)a6;
- (void)dealloc;

@end
