@class HMHome, HUServiceDetailsCameraSettingsReaderWriter, HMCameraProfile;

@interface HUCameraRecordAudioSettingsItem : HFItem <HUServiceDetailsCameraSettingsReaderWriterConfigurator>

@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) HUServiceDetailsCameraSettingsReaderWriter *settingsReaderWriter;
@property (retain, nonatomic) HMCameraProfile *cameraProfile;

- (id)init;
- (void).cxx_destruct;
- (id)itemTitle;
- (id)transactionReason;
- (id)initWithCameraProfile:(id)a0;
- (BOOL)_canReadWriteCameraRecordingSettings;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)cameraSettings;
- (id)characteristicForSettings:(id)a0;
- (id)characteristicValueManager;
- (id)itemTitleLocalizationKey;
- (id)updateRecordAudioSettingWithValue:(BOOL)a0;

@end
