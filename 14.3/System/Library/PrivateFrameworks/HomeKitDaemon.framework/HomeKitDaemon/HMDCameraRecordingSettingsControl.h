@class HMDService, HMDCameraRecordingSupportedVideoConfiguration, NSArray, HMDHAPAccessory, HMDCameraRecordingSelectedConfiguration, HMDCameraRecordingSupportedAudioConfiguration, NSDictionary, NSString, NSObject, NSDate, HMDCameraRecordingGeneralConfiguration, NSNumber;
@protocol OS_dispatch_queue, HMDCameraRecordingSettingsControlDelegate;

@interface HMDCameraRecordingSettingsControl : HMFObject <HMFLogging>

@property (class, readonly) NSArray *audioConfigurationsByPreferenceOrder;

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, weak) HMDHAPAccessory *accessory;
@property (readonly) HMDService *recordingService;
@property (retain) NSDictionary *recordingConfigurationOverrides;
@property (retain) HMDCameraRecordingGeneralConfiguration *supportedRecordingConfiguration;
@property (retain) HMDCameraRecordingSupportedVideoConfiguration *supportedVideoConfiguration;
@property (retain) HMDCameraRecordingSupportedAudioConfiguration *supportedAudioConfiguration;
@property (readonly) NSArray *videoConfigurationsByPreferenceOrder;
@property (copy) NSDictionary *characteristicByType;
@property BOOL configureCameraInProgress;
@property BOOL canConfigureCameraForRecording;
@property (retain) HMDCameraRecordingSelectedConfiguration *currentSelectedConfiguration;
@property (readonly, copy) NSString *clientIdentifier;
@property (retain) NSDate *configureStartDate;
@property BOOL didTriggerABCForConfigure;
@property (readonly, copy) NSNumber *configuredBitRate;
@property (readonly, copy) NSNumber *configuredIFrameInterval;
@property (readonly, copy) NSNumber *configuredImageWidth;
@property (readonly, copy) NSNumber *configuredImageHeight;
@property (readonly) double configuredFragmentDuration;
@property (readonly) double configuredPrebufferDuration;
@property (readonly, getter=isCameraConfiguredForRecording) BOOL cameraConfiguredForRecording;
@property (weak) id<HMDCameraRecordingSettingsControlDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (BOOL)isSupportedH264Profile:(id)a0;
+ (BOOL)isSupportedVideoCodec:(id)a0;
+ (id)videoCodecForCodecConfiguration:(id)a0;
+ (id)h264ProfileForCodecConfiguration:(id)a0;
+ (BOOL)isSupportedAudioCodec:(id)a0;
+ (id)audioCodecForCodecConfiguration:(id)a0;
+ (id)audioBitRateForCodecConfiguration:(id)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (void)start;
- (id)logIdentifier;
- (void)handleCharacteristicValueUpdated:(id)a0;
- (void)handleAccessoryIsNotConfiguredError;
- (void)configureCameraRecordingSettings;
- (void)handleHomePersonManagerSettingsDidChangeNotification:(id)a0;
- (void)handleAccessoryConnected:(id)a0;
- (void)handleAccessoryDisconnected:(id)a0;
- (void)handleCharacteristicsUpdated:(id)a0;
- (void)handleCameraProfileSettingsDidWriteToAccessory:(id)a0;
- (void)updateCanConfigureCameraForRecording;
- (void)reconfigureCameraRecordingSettingsWithReason:(id)a0;
- (id)_preferredVideoConfigurationOverride;
- (id)_preferredAudioConfigurationOverride;
- (void)triggerABCForConfigure;
- (void)_configureCameraRecordingSettings;
- (void)_readCameraRecordingSettings;
- (void)_readSupportedCameraRecordingConfiguration;
- (void)_selectedConfigurationDidUpdateTo:(id)a0;
- (void)_readSelectedCameraRecordingConfiguration;
- (void)_handleSelectedCameraRecordingConfigurationReadResponse:(id)a0;
- (id)_parseSelectedRecordingConfiguration:(id)a0;
- (void)_handleSupportedConfigurationCharacteristicsReadResponse:(id)a0;
- (id)_parseSupportedRecordingConfiguration:(id)a0;
- (id)_parseSupportedVideoConfiguration:(id)a0;
- (id)_parseSupportedAudioConfiguration:(id)a0;
- (id)_recordingGeneralConfiguration;
- (id)_recordingVideoConfiguration;
- (id)_recordingAudioConfiguration;
- (void)_setSelectedRecordingConfiguration:(id)a0;
- (id)_parseResponse:(id)a0 forCharacteristicType:(id)a1;
- (id)initWithWorkQueue:(id)a0 accessory:(id)a1 recordingManagementService:(id)a2;

@end
