@class NSString, NSArray, AVCaptureDeviceFormat, AVCaptureDeviceInternal, AVCaptureDeviceInputSource;

@interface AVCaptureDevice : NSObject {
    AVCaptureDeviceInternal *_internal;
}

@property (readonly, nonatomic) NSString *uniqueID;
@property (readonly, nonatomic) NSString *modelID;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSString *manufacturer;
@property (readonly, nonatomic) int transportType;
@property (readonly, nonatomic, getter=isConnected) BOOL connected;
@property (readonly, nonatomic, getter=isInUseByAnotherApplication) BOOL inUseByAnotherApplication;
@property (readonly, nonatomic, getter=isSuspended) BOOL suspended;
@property (readonly, nonatomic) NSArray *linkedDevices;
@property (readonly, nonatomic) NSArray *formats;
@property (retain, nonatomic) AVCaptureDeviceFormat *activeFormat;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } activeVideoMinFrameDuration;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } activeVideoMaxFrameDuration;
@property (readonly, nonatomic) NSArray *inputSources;
@property (retain, nonatomic) AVCaptureDeviceInputSource *activeInputSource;

+ (void)initialize;
+ (id)_devicesWithPriorRegisteredDevices:(id)a0;
+ (id)defaultDeviceWithMediaType:(id)a0;
+ (id)defaultDeviceWithDeviceType:(id)a0 mediaType:(id)a1 position:(long long)a2;
+ (id)deviceWithUniqueID:(id)a0;
+ (void)_filterConnectedDevices:(id)a0 withDeviceTypes:(id)a1 mediaType:(id)a2 position:(long long)a3;
+ (id)_legacyDevicesWithMediaType:(id)a0;
+ (void)_filterConnectedLegacyDevices:(id)a0;
+ (id)_defaultDeviceWithDeviceType:(id)a0 mediaType:(id)a1 position:(long long)a2 prefersUnsuspendedAndAllowsAnyPosition:(BOOL)a3;
+ (id)devices;
+ (void)_registerOnceForServerConnectionDiedNotification;
+ (id)extrinsicMatrixFromDevice:(id)a0 toDevice:(id)a1;
+ (long long)authorizationStatusForMediaType:(id)a0;
+ (id)devicesWithMediaType:(id)a0;
+ (void)requestAccessForMediaType:(id)a0 completionHandler:(id /* block */)a1;
+ (void)_reconnectDevices:(id)a0;
+ (id)_devices;
+ (id)_devicesWithDeviceTypes:(id)a0 mediaType:(id)a1 position:(long long)a2;

- (BOOL)isWideColorSupported;
- (long long)position;
- (BOOL)isSpatialOverCaptureEnabled;
- (void)setFlashMode:(long long)a0;
- (float)maxExposureTargetBias;
- (long long)exposureMode;
- (long long)digitalFlashMode;
- (void)setTimeLapseCaptureRate:(float)a0;
- (float)timeLapseCaptureRate;
- (void)setTorchMode:(long long)a0;
- (long long)flashMode;
- (void)setImageControlMode:(long long)a0;
- (double)videoZoomFactor;
- (void)setGeometricDistortionCorrectionEnabled:(BOOL)a0;
- (BOOL)isLowLightVideoCaptureEnabled;
- (float)ISO;
- (BOOL)isFlashModeSupported:(long long)a0;
- (BOOL)isVideoHDREnabled;
- (long long)whiteBalanceMode;
- (BOOL)isTorchActive;
- (BOOL)isVariableFrameRateVideoCaptureEnabled;
- (BOOL)isVideoHDRSuspended;
- (struct OpaqueCMClock { } *)deviceClock;
- (void)setVideoHDREnabled:(BOOL)a0;
- (void)_checkTCCAccess;
- (id)deviceType;
- (BOOL)supportsAVCaptureSessionPreset:(id)a0;
- (long long)torchMode;
- (void)setFaceDetectionDrivenImageProcessingEnabled:(BOOL)a0;
- (BOOL)isTorchAvailable;
- (void)setActiveDepthDataFormat:(id)a0;
- (double)maxAvailableVideoZoomFactor;
- (BOOL)setTorchModeOnWithLevel:(float)a0 error:(id *)a1;
- (long long)autoFocusRangeRestriction;
- (void)close;
- (BOOL)isVirtualDevice;
- (BOOL)isMachineReadableCodeDetectionSupported;
- (id)constituentDeviceWithDeviceType:(id)a0;
- (void)_setActiveVideoMaxFrameDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct CGPoint { double x0; double x1; })focusPointOfInterest;
- (BOOL)isFaceDetectionDuringVideoPreviewSupported;
- (BOOL)isOpen;
- (void)setEyeClosedDetectionEnabled:(BOOL)a0;
- (BOOL)isLockingFocusWithCustomLensPositionSupported;
- (BOOL)smileDetectionEnabled;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })activeMaxExposureDurationClientOverride;
- (float)lensAperture;
- (int)minMacroblocksForHighProfileUpTo30fps;
- (void)setSmoothAutoFocusEnabled:(BOOL)a0;
- (BOOL)isFlashAvailable;
- (void)setActiveMaxExposureDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (BOOL)isWhiteBalanceModeSupported:(long long)a0;
- (void)cancelVideoZoomRamp;
- (id)supportedMetadataObjectIdentifiers;
- (void)setTimeOfFlightProjectorMode:(long long)a0;
- (void)resetVideoMinFrameDurationOverrideForOwner:(id)a0;
- (BOOL)isHDRSceneDetectedForPhotoOutput;
- (BOOL)hasFlash;
- (void)_setPhotoSettingsForSceneMonitoring:(id)a0;
- (long long)focusMode;
- (BOOL)isHEVCMemoryUsageMinimizationSupported;
- (void)setProvidesStortorgetMetadata:(BOOL)a0;
- (void)setSubjectAreaChangeMonitoringEnabled:(BOOL)a0;
- (void)dealloc;
- (void)setAutomaticallyAdjustsImageControlMode:(BOOL)a0;
- (void)setFocusModeLockedWithLensPosition:(float)a0 completionHandler:(id /* block */)a1;
- (void)setVideoMinFrameDurationOverride:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 forOwner:(id)a1;
- (id)availableBoxedMetadataFormatDescriptions;
- (float)exposureTargetBias;
- (BOOL)isVideoStabilizationSupported;
- (id)bravoCameraSelectionBehavior;
- (BOOL)automaticallyAdjustsVideoHDREnabled;
- (struct { float x0; float x1; float x2; })deviceWhiteBalanceGainsForChromaticityValues:(struct { float x0; float x1; })a0;
- (void)unlockForConfiguration;
- (BOOL)isAdjustingFocus;
- (struct { int x0; int x1; })maxH264PhotoDimensions;
- (BOOL)isRampingVideoZoom;
- (BOOL)isActiveVideoMaxFrameDurationSet;
- (id)_digitalFlashExposureTimes;
- (int)minMacroblocksForHighProfileAbove30fps;
- (id)digitalFlashSceneForPhotoOutput;
- (void)_setActiveVideoMinFrameDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (BOOL)isFlashActive;
- (BOOL)eyeClosedDetectionEnabled;
- (BOOL)isBuiltInStereoAudioCaptureSupported;
- (long long)timeOfFlightBankCount;
- (void)setGlobalToneMappingEnabled:(BOOL)a0;
- (struct { int x0; int x1; })maxH264VideoDimensions;
- (BOOL)_startUsingDevice:(id *)a0;
- (BOOL)cachesFigCaptureSourceConfigurationChanges;
- (void)_stopUsingDevice;
- (BOOL)startUsingDevice:(id *)a0;
- (void)stopUsingDevice;
- (BOOL)isLowLightBoostSupported;
- (BOOL)isLowLightBoostEnabled;
- (BOOL)automaticallyEnablesLowLightBoostWhenAvailable;
- (void)setAutomaticallyEnablesLowLightBoostWhenAvailable:(BOOL)a0;
- (void)setBravoCameraSelectionBehavior:(id)a0;
- (BOOL)providesStortorgetMetadata;
- (BOOL)isTimeOfFlightProjectorModeSupported:(long long)a0;
- (long long)activeColorSpace;
- (BOOL)isSubjectAreaChangeMonitoringEnabled;
- (long long)nonDestructiveCropAspectRatio;
- (void)setSmileDetectionEnabled:(BOOL)a0;
- (void)setExposurePointOfInterest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)usesQuantizationScalingMatrix_H264_Steep_16_48;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })activeDepthDataMinFrameDuration;
- (void)setNonDestructiveCropEnabled:(BOOL)a0;
- (BOOL)isFaceDetectionDrivenImageProcessingEnabled;
- (float)maxWhiteBalanceGain;
- (BOOL)isAutoFocusRangeRestrictionSupported;
- (BOOL)isLockingWhiteBalanceWithCustomDeviceGainsSupported;
- (unsigned long long)degradedCaptureQualityFactors;
- (float)minExposureTargetBias;
- (id)description;
- (void)_setStillImageStabilizationAutomaticallyEnabled:(BOOL)a0;
- (double)dualCameraSwitchOverVideoZoomFactor;
- (void)_setCameraCalibrationDataDeliveryEnabled:(BOOL)a0;
- (float)focalLength;
- (long long)_digitalFlashStatus;
- (void)_setVideoHDREnabled:(BOOL)a0;
- (float)lensPosition;
- (struct { float x0; float x1; })temperatureAndTintValuesForDeviceWhiteBalanceGains:(struct { float x0; float x1; float x2; })a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })activeMaxExposureDuration;
- (BOOL)isExposureModeSupported:(long long)a0;
- (void)setAutoFocusRangeRestriction:(long long)a0;
- (BOOL)isTorchModeSupported:(long long)a0;
- (int)powerConsumptionAt30FPSForOISMode:(int)a0;
- (float)ISODigitalThreshold;
- (int)faceRectangleAngle;
- (long long)timeOfFlightProjectorMode;
- (BOOL)isHEIFSupported;
- (BOOL)isSmoothAutoFocusEnabled;
- (void)setExposureTargetBias:(float)a0 completionHandler:(id /* block */)a1;
- (void)_setDepthDataDeliveryEnabled:(BOOL)a0;
- (BOOL)isEyeDetectionSupported;
- (BOOL)isGeometricDistortionCorrectionSupported;
- (void)setLowLightVideoCaptureEnabled:(BOOL)a0;
- (float)torchLevel;
- (id)cameraPoseMatrix;
- (BOOL)isFaceDetectionSupported;
- (void)setCachesFigCaptureSourceConfigurationChanges:(BOOL)a0;
- (struct { float x0; float x1; })chromaticityValuesForDeviceWhiteBalanceGains:(struct { float x0; float x1; float x2; })a0;
- (BOOL)isLockedForConfiguration;
- (void)setNonDestructiveCropAspectRatio:(long long)a0;
- (void)rampToVideoZoomFactor:(double)a0 withRate:(float)a1;
- (long long)imageControlMode;
- (void)setWhiteBalanceModeLockedWithDeviceWhiteBalanceGains:(struct { float x0; float x1; float x2; })a0 completionHandler:(id /* block */)a1;
- (BOOL)isAdjustingWhiteBalance;
- (BOOL)isHEVCSupported;
- (void)setFocusPointOfInterest:(struct CGPoint { double x0; double x1; })a0;
- (void)setActiveDepthDataMinFrameDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (BOOL)isFocusModeSupported:(long long)a0;
- (BOOL)lockForConfiguration:(id *)a0;
- (id)AVVideoSettingsForSessionPreset:(id)a0;
- (BOOL)isAdjustingExposure;
- (BOOL)hevcAllowBFramesForHighCTUCount;
- (BOOL)isEyeClosedDetectionSupported;
- (id)initSubclass;
- (BOOL)isGlobalToneMappingEnabled;
- (id)virtualDeviceSwitchOverVideoZoomFactors;
- (struct CGPoint { double x0; double x1; })exposurePointOfInterest;
- (BOOL)eyeDetectionEnabled;
- (BOOL)hasTorch;
- (id)activeDepthDataFormat;
- (BOOL)isFocusPointOfInterestSupported;
- (BOOL)isHEVCRelaxedAverageBitRateTargetSupported;
- (void)setDigitalFlashMode:(long long)a0;
- (BOOL)isActiveVideoMinFrameDurationSet;
- (BOOL)isGeometricDistortionCorrectionEnabled;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })faceRectangle;
- (id)debugDescription;
- (struct { float x0; float x1; float x2; })deviceWhiteBalanceGainsForTemperatureAndTintValues:(struct { float x0; float x1; })a0;
- (id)constituentDevices;
- (BOOL)open:(id *)a0;
- (BOOL)appliesSessionPresetMaxIntegrationTimeOverrideToActiveFormat;
- (void)setFocusMode:(long long)a0;
- (int)hevcTurboModeVersion;
- (BOOL)automaticallyAdjustsImageControlMode;
- (void)setSpatialOverCaptureEnabled:(BOOL)a0;
- (BOOL)isCameraIntrinsicMatrixDeliverySupported;
- (float)exposureTargetOffset;
- (struct { float x0; float x1; float x2; })grayWorldDeviceWhiteBalanceGains;
- (void)setWhiteBalanceMode:(long long)a0;
- (void)setActiveColorSpace:(long long)a0;
- (void)setAutomaticallyAdjustsVideoHDREnabled:(BOOL)a0;
- (void)setEyeDetectionEnabled:(BOOL)a0;
- (void)setVideoHDRSuspended:(BOOL)a0;
- (BOOL)isFlashSceneDetectedForPhotoOutput;
- (BOOL)supportsMultiCamCaptureWithDevice:(id)a0;
- (void)setVideoZoomFactor:(double)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })exposureDuration;
- (BOOL)isConstituentPhotoCalibrationDataSupported;
- (BOOL)_isFlashScene;
- (BOOL)hasMediaType:(id)a0;
- (BOOL)isHEVCPreferred;
- (BOOL)isAutoRedEyeReductionSupported;
- (void)rampExponentiallyToVideoZoomFactor:(float)a0 withDuration:(double)a1;
- (BOOL)isImageControlModeSupported:(long long)a0;
- (BOOL)isLensStabilizationSupported;
- (void)setVariableFrameRateVideoCaptureEnabled:(BOOL)a0;
- (id)systemPressureState;
- (long long)shallowDepthOfFieldEffectStatus;
- (void)setExposureModeCustomWithDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 ISO:(float)a1 completionHandler:(id /* block */)a2;
- (BOOL)isExposurePointOfInterestSupported;
- (BOOL)hevcAllowBFramesForHighCTUCountAndHighResolution;
- (BOOL)isSmileDetectionSupported;
- (double)minAvailableVideoZoomFactor;
- (BOOL)_isDepthDataDeliveryEnabled;
- (struct { float x0; float x1; float x2; })deviceWhiteBalanceGains;
- (void)setExposureMode:(long long)a0;
- (BOOL)isSmoothAutoFocusSupported;
- (BOOL)isNonDestructiveCropEnabled;

@end
