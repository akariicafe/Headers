@class AVCaptureDevice, AVCaptureDeviceInputInternal;

@interface AVCaptureDeviceInput : AVCaptureInput {
    AVCaptureDeviceInputInternal *_internal;
}

@property (readonly, nonatomic) AVCaptureDevice *device;
@property (nonatomic) BOOL unifiedAutoExposureDefaultsEnabled;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } videoMinFrameDurationOverride;

+ (void)initialize;
+ (id)deviceInputWithDevice:(id)a0 error:(id *)a1;

- (void)setSimulatedAperture:(float)a0;
- (id)initWithDevice:(id)a0 error:(id *)a1;
- (void)handleChangedActiveFormat:(id)a0 forDevice:(id)a1;
- (struct OpaqueCMClock { } *)clock;
- (id)notReadyError;
- (void)setPortraitLightingEffectStrength:(float)a0;
- (BOOL)isMaxGainOverrideSupported;
- (BOOL)isCenterStageAllowed;
- (void)_resetVideoMinFrameDurationOverride;
- (float)portraitLightingEffectStrength;
- (float)maxGainOverride;
- (void)_applyVideoMinFrameDurationOverride;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (float)simulatedAperture;
- (id)videoDevice;
- (void)setCameraCalibrationDataDeliveryEnabled:(BOOL)a0;
- (void)setVisionDataDeliveryEnabled:(BOOL)a0;
- (void)_resetSimulatedAperture;
- (id)description;
- (void)_handleNotification:(id)a0 payload:(id)a1;
- (void)setSession:(id)a0;
- (void)_resetPortraitLightingEffectStrength;
- (void)setCenterStageAllowed:(BOOL)a0;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (BOOL)isBuiltInMicrophoneStereoAudioCaptureEnabled;
- (id)multiCamPorts;
- (BOOL)_authorizedToUseDeviceAndRequestIfNecessary:(id)a0;
- (id)init;
- (BOOL)isVisionDataDeliveryEnabled;
- (BOOL)isBackgroundBlurAllowed;
- (void)_bumpChangeSeedForFirstPortWithMediaType:(id)a0;
- (id)portsWithMediaType:(id)a0 sourceDeviceType:(id)a1 sourceDevicePosition:(long long)a2;
- (BOOL)isBuiltInMicrophoneStereoAudioCaptureSupported;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)isCameraCalibrationDataDeliveryEnabled;
- (void)_sourceFormatDidChange:(struct opaqueCMFormatDescription { } *)a0;
- (id)ports;
- (void)dealloc;
- (void)setBuiltInMicrophoneStereoAudioCaptureEnabled:(BOOL)a0;
- (void)setBackgroundBlurAllowed:(BOOL)a0;
- (void)setMaxGainOverride:(float)a0;

@end
