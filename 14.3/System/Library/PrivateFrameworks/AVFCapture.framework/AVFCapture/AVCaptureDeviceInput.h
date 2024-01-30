@class AVCaptureDevice, AVCaptureDeviceInputInternal;

@interface AVCaptureDeviceInput : AVCaptureInput {
    AVCaptureDeviceInputInternal *_internal;
}

@property (readonly, nonatomic) AVCaptureDevice *device;
@property (nonatomic) BOOL unifiedAutoExposureDefaultsEnabled;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } videoMinFrameDurationOverride;

+ (void)initialize;
+ (id)deviceInputWithDevice:(id)a0 error:(id *)a1;

- (id)ports;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (void)setSession:(id)a0;
- (void)_handleNotification:(id)a0 payload:(id)a1;
- (struct OpaqueCMClock { } *)clock;
- (void)setBuiltInMicrophoneStereoAudioCaptureEnabled:(BOOL)a0;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession { } *)a0;
- (void)handleChangedActiveFormat:(id)a0 forDevice:(id)a1;
- (id)init;
- (id)multiCamPorts;
- (BOOL)_authorizedToUseDeviceAndRequestIfNecessary:(id)a0;
- (BOOL)isCameraCalibrationDataDeliveryEnabled;
- (void)dealloc;
- (float)simulatedAperture;
- (void)_resetPortraitLightingEffectStrength;
- (void)setCameraCalibrationDataDeliveryEnabled:(BOOL)a0;
- (void)setVisionDataDeliveryEnabled:(BOOL)a0;
- (id)description;
- (void)_resetSimulatedAperture;
- (id)initWithDevice:(id)a0 error:(id *)a1;
- (id)videoDevice;
- (BOOL)isBuiltInMicrophoneStereoAudioCaptureEnabled;
- (void)setSimulatedAperture:(float)a0;
- (void)_resetVideoMinFrameDurationOverride;
- (id)portsWithMediaType:(id)a0 sourceDeviceType:(id)a1 sourceDevicePosition:(long long)a2;
- (void)setMaxGainOverride:(float)a0;
- (BOOL)isMaxGainOverrideSupported;
- (float)portraitLightingEffectStrength;
- (BOOL)isBuiltInMicrophoneStereoAudioCaptureSupported;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)notReadyError;
- (void)setPortraitLightingEffectStrength:(float)a0;
- (void)_sourceFormatDidChange:(struct opaqueCMFormatDescription { } *)a0;
- (BOOL)isVisionDataDeliveryEnabled;
- (void)_applyVideoMinFrameDurationOverride;
- (float)maxGainOverride;

@end
