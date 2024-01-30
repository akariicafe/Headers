@class NSNumber, NSMutableDictionary, AXCapabilityManager;

@interface PSCapabilityManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *overrides;
@property (retain, nonatomic) NSNumber *overrideForAllBoolValues;
@property (retain, nonatomic) AXCapabilityManager *axCapabilityManager;

+ (id)sharedManager;

- (id)supportsAutoWhiteBalanceCapability;
- (id)supportsPSCellularDataPlanCapability;
- (BOOL)hasCapabilities:(id)a0;
- (id)supportsNightShiftCapability;
- (id)supportsPSHomeScreenPhoneCapability;
- (id)supportsRetailKioskModeCapability;
- (id)supportPSPhotoFormatEnhancedProRAWCapability;
- (id)supportsPSPencilCapability;
- (BOOL)capabilityBoolAnswer:(id)a0;
- (id)supportsPSTrackpadAndMouseCapability;
- (id)supportsContinuityCamera;
- (id)supportsPSTrackpadOnlyCapability;
- (id)supportsPSDeveloperSettingsCapability;
- (id)supportsPSTTYCapability;
- (id)supportsLightningAdapterCapability;
- (id)supportsRaiseToWakeCapability;
- (id)supportsInStoreDemoModeCapability;
- (void)setOverrideValue:(id)a0 forKey:(id)a1;
- (id)preferencesCapabilityAnswer:(id)a0;
- (id)supportPSPhotoFormatProRAWCapability;
- (void)resetOverrides;
- (id)supportsDisplayZoomCapability;
- (id)supportsListeningExperienceCapbility;
- (id)applicationDisplayIdentifiers;
- (id)init;
- (id)supportsPSExposureNotificationsCapability;
- (id)supportPSRecordHDRVideoCapability;
- (id)capabilityAnswer:(id)a0;
- (id)supportsWalletApplePayCapability;
- (id)supportsPictureInPictureCapability;
- (id)supportPSPhoneNoiseCancellationCapability;
- (void).cxx_destruct;
- (id)supportsInEDUModeCapability;

@end
