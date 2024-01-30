@class NSNumber, NSMutableDictionary;

@interface PSCapabilityManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *overrides;
@property (retain, nonatomic) NSNumber *overrideForAllBoolValues;

+ (id)sharedManager;

- (id)supportsInStoreDemoModeCapability;
- (id)supportsWalletApplePayCapability;
- (id)supportsPSExposureNotificationsCapability;
- (BOOL)hasCapabilities:(id)a0;
- (id)supportsPSCellularDataPlanCapability;
- (id)supportsPSPencilCapability;
- (id)supportsPSTTYCapability;
- (id)capabilityAnswer:(id)a0;
- (id)supportsPictureInPictureCapability;
- (id)applicationDisplayIdentifiers;
- (id)supportsDisplayZoomCapability;
- (void).cxx_destruct;
- (BOOL)capabilityBoolAnswer:(id)a0;
- (id)init;
- (id)supportsPSTrackpadAndMouseCapability;
- (id)supportsLightningAdapterCapability;
- (id)supportsAutoWhiteBalanceCapability;
- (void)resetOverrides;
- (id)supportsListeningExperienceCapbility;
- (id)supportsInEDUModeCapability;
- (void)setOverrideValue:(id)a0 forKey:(id)a1;
- (id)supportPSPhoneNoiseCancellationCapability;
- (id)supportPSRecordHDRVideoCapability;
- (id)supportsPSTrackpadOnlyCapability;
- (id)supportsPSDeveloperSettingsCapability;
- (id)supportsNightShiftCapability;
- (id)supportPSPhotoFormatProRAWCapability;
- (id)supportsRaiseToWakeCapability;
- (id)preferencesCapabilityAnswer:(id)a0;
- (id)supportsPSHomeScreenPhoneCapability;

@end
