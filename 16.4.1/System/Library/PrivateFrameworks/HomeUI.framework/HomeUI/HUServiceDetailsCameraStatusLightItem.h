@class HUServiceDetailsCameraSettingsReaderWriter;

@interface HUServiceDetailsCameraStatusLightItem : HUServiceDetailsAbstractItem <HUServiceDetailsCameraSettingsReaderWriterConfigurator>

@property (retain, nonatomic) HUServiceDetailsCameraSettingsReaderWriter *settingsReaderWriter;

- (void).cxx_destruct;
- (id)itemTitle;
- (id)transactionReason;
- (BOOL)_canReadWriteAccessModeIndicator;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)cameraSettings;
- (id)characteristicForSettings:(id)a0;
- (id)characteristicValueManager;
- (id)itemTitleLocalizationKey;
- (id)updateUserSettingsWithValue:(BOOL)a0;

@end
