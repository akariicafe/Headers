@class CAMConflictingControlConfiguration, NSDate, CAMCaptureConfiguration, NSUserDefaults;

@interface CAMUserPreferences : NSObject

@property (class, readonly, nonatomic) CAMUserPreferences *preferences;

@property (retain, nonatomic, getter=_underlyingUserDefaults, setter=_setUnderlyingUserDefaults:) NSUserDefaults *_underlyingUserDefaults;
@property (retain, nonatomic, setter=_setResetTimeoutDate:) NSDate *resetTimeoutDate;
@property (nonatomic, setter=_setDidResetTorchMode:) BOOL didResetTorchMode;
@property (readonly, nonatomic) BOOL _preferHEVCWhenAvailable;
@property (readonly, nonatomic) double _resetTimeoutOverride;
@property (readonly, nonatomic) BOOL _shouldDisableCameraSwitchingDuringVideoRecording;
@property (retain, nonatomic) CAMCaptureConfiguration *captureConfiguration;
@property (retain, nonatomic) CAMConflictingControlConfiguration *conflictingControlConfiguration;
@property (readonly, nonatomic) BOOL shouldShowGridView;
@property (readonly, nonatomic) BOOL QRBannersEnabledInSettings;
@property (nonatomic) BOOL forceEnableQRBanners;
@property (readonly, nonatomic) BOOL shouldShowQRBanners;
@property (readonly, nonatomic) BOOL responsiveShutterEnabled;
@property (readonly, nonatomic) BOOL shouldCaptureHDREV0;
@property (readonly, nonatomic) BOOL shouldUseModernHDRBehavior;
@property (nonatomic) BOOL shouldMirrorFrontCameraCaptures;
@property (readonly, nonatomic) BOOL shouldUseVolumeUpBurst;
@property (readonly, nonatomic) BOOL shouldUseContentAwareDistortionCorrection;
@property (nonatomic) BOOL didAcknowledgePortraitModeDescription;
@property (readonly, nonatomic) BOOL usingMostCompatibleEncoding;
@property (readonly, nonatomic) BOOL didConfirmVideo4k60MostCompatible;
@property (readonly, nonatomic) BOOL didConfirmSlomo1080p240MostCompatible;
@property (readonly, nonatomic) long long videoConfiguration;
@property (readonly, nonatomic) long long slomoConfiguration;
@property (readonly, nonatomic, getter=isVideoConfigurationControlEnabled) BOOL videoConfigurationControlEnabled;
@property (readonly, nonatomic, getter=isPALVideoEnabled) BOOL PALVideoEnabled;
@property (readonly, nonatomic) long long VFRMode;
@property (readonly, nonatomic, getter=isLowLightVideoEnabled) BOOL lowLightVideoEnabled;
@property (readonly, nonatomic) BOOL shouldForceMonoAudioRecording;
@property (readonly, nonatomic) BOOL HDR10BitVideoEnabled;
@property (readonly, nonatomic, getter=isPhotoOverCaptureEnabled) BOOL photoOverCaptureEnabled;
@property (readonly, nonatomic, getter=isVideoOverCaptureEnabled) BOOL videoOverCaptureEnabled;
@property (readonly, nonatomic, getter=isAutoAdjustmentsEnabled) BOOL autoAdjustmentsEnabled;
@property (nonatomic) BOOL didAcknowledgeCTMDescription;
@property (readonly, nonatomic, getter=isOverCapturePreviewEnabled) BOOL overCapturePreviewEnabled;
@property (nonatomic) long long previewViewAspectMode;
@property (readonly, nonatomic) long long photoEncodingBehavior;
@property (nonatomic) long long photoModeLastCapturedEffectFilterType;
@property (nonatomic) long long squareModeLastCapturedEffectFilterType;
@property (nonatomic) long long portraitModeLastCapturedEffectFilterType;
@property (readonly, nonatomic) BOOL semanticDevelopmentEnabled;
@property (readonly, nonatomic) BOOL rawControlEnabled;
@property (readonly, nonatomic) BOOL preserveRAW;
@property (readonly, nonatomic) BOOL preserveEffectFilter;
@property (readonly, nonatomic) BOOL preserveCaptureMode;
@property (readonly, nonatomic) BOOL preserveLivePhoto;
@property (readonly, nonatomic) BOOL preserveExposure;
@property (readonly, nonatomic, getter=isLockAsShutterEnabled) BOOL lockAsShutterEnabled;
@property (readonly, nonatomic) BOOL shouldDelayRemotePersistence;
@property (readonly, nonatomic) BOOL burstFollowsEncoderSettings;
@property (readonly, nonatomic) long long preferredMinimumFreeBytes;
@property (readonly, nonatomic) long long overriddenBackCaptureInterval;
@property (readonly, nonatomic) long long overriddenFrontCaptureInterval;

+ (long long)defaultLightingTypeForMode:(long long)a0;
+ (BOOL)_fallBackToCameraDefaultsForBundleIdentifier:(id)a0;
+ (id)defaultCaptureConfiguration;
+ (void)performResponsiveShutterMigration;
+ (BOOL)shouldEnableHDR10BitVideoForHEVCEnabled:(BOOL)a0 capabilities:(id)a1;
+ (id)_defaultExposureBiasesByMode;
+ (long long)defaultFilterTypeForMode:(long long)a0;
+ (void)performLowLightVideoMigration;

- (void).cxx_destruct;
- (BOOL)isAutoFPSVideoEnabledForMode:(long long)a0 device:(long long)a1 videoConfiguration:(long long)a2 encodingBehavior:(long long)a3;
- (long long)_sanitizeLightingType:(long long)a0 forMode:(long long)a1;
- (void)updateResetTimeoutDate;
- (BOOL)readPreferencesWithOverrides:(id)a0 emulationMode:(long long)a1 callActive:(BOOL)a2;
- (long long)maxSupportedPhotoQualityPrioritizationForMode:(long long)a0;
- (long long)ppt_readPortraitLightingType;
- (BOOL)mirrorCameraCapturesForDevicePosition:(long long)a0 mode:(long long)a1;
- (long long)videoEncodingBehaviorForConfiguration:(long long)a0 wantsHDR10BitVideo:(BOOL)a1;
- (BOOL)shouldDisableCameraSwitchingDuringVideoRecordingForMode:(long long)a0;
- (void)writePreferences;
- (long long)_sanitizeEffectFilterType:(long long)a0 forMode:(long long)a1;
- (void)_publishAnalyticsIfNeeded;
- (BOOL)isOverCaptureEnabledForCTMCaptureType:(long long)a0;
- (id)filterTypesForMode:(long long)a0;
- (BOOL)shouldResetCaptureConfiguration;

@end
