@class AVCaptureDevice, AVCaptureDeviceInputInternal;

@interface AVCaptureDeviceInput : AVCaptureInput {
    AVCaptureDeviceInputInternal *_internal;
}

@property (readonly, nonatomic) AVCaptureDevice *device;
@property (nonatomic) BOOL unifiedAutoExposureDefaultsEnabled;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } videoMinFrameDurationOverride;

+ (void)initialize;
+ (id)deviceInputWithDevice:(id)a0 error:(id *)a1;

- (void)setSession:(id)a0;
- (id)initWithDevice:(id)a0 error:(id *)a1;
- (BOOL)isCameraCalibrationDataDeliveryEnabled;
- (BOOL)isBackgroundBlurAllowed;
- (id)ports;
- (void)_resetSimulatedAperture;
- (void)handleChangedActiveFormat:(id)a0 forDevice:(id)a1;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (struct OpaqueCMClock { } *)clock;
- (void)_bumpChangeSeedForFirstPortWithMediaType:(id)a0;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (void)_handleNotification:(id)a0 payload:(id)a1;
- (BOOL)_authorizedToUseDeviceAndRequestIfNecessary:(id)a0;
- (float)portraitLightingEffectStrength;
- (BOOL)isStudioLightingAllowed;
- (BOOL)isBuiltInMicrophoneStereoAudioCaptureSupported;
- (BOOL)isVisionDataDeliveryEnabled;
- (float)simulatedAperture;
- (BOOL)isMaxGainOverrideSupported;
- (id)notReadyError;
- (id)portsWithMediaType:(id)a0 sourceDeviceType:(id)a1 sourceDevicePosition:(long long)a2;
- (void)setBuiltInMicrophoneStereoAudioCaptureEnabled:(BOOL)a0;
- (void)dealloc;
- (void)setSimulatedAperture:(float)a0;
- (void)setCameraCalibrationDataDeliveryEnabled:(BOOL)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)isBuiltInMicrophoneStereoAudioCaptureEnabled;
- (id)videoDevice;
- (id)multiCamPorts;
- (void)_sourceFormatDidChange:(struct opaqueCMFormatDescription { } *)a0;
- (void)_resetPortraitLightingEffectStrength;
- (float)maxGainOverride;
- (id)init;
- (BOOL)isCenterStageAllowed;
- (id)description;
- (void)setVisionDataDeliveryEnabled:(BOOL)a0;
- (void)_resetVideoMinFrameDurationOverride;
- (void)setMaxGainOverride:(float)a0;
- (void)setBackgroundBlurAllowed:(BOOL)a0;
- (void)_applyVideoMinFrameDurationOverride;
- (void)setPortraitLightingEffectStrength:(float)a0;
- (void)setStudioLightingAllowed:(BOOL)a0;
- (void)setCenterStageAllowed:(BOOL)a0;

@end
