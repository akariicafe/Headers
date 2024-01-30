@class NSNumber, NSMutableDictionary;

@interface PSCapabilityManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *overrides;
@property (retain, nonatomic) NSNumber *overrideForAllBoolValues;

+ (id)sharedManager;

- (id)capabilityAnswer:(id)a0;
- (id)supportsNightShiftCapability;
- (id)supportsRaiseToWakeCapability;
- (id)applicationDisplayIdentifiers;
- (id)init;
- (id)supportsPSCellularDataPlanCapability;
- (void).cxx_destruct;
- (id)supportsPSPencilCapability;
- (id)supportsWalletApplePayCapability;
- (id)supportsLightningAdapterCapability;
- (id)supportsPSTrackpadOnlyCapability;
- (id)supportsPSTrackpadAndMouseCapability;
- (id)supportsPictureInPictureCapability;
- (void)resetOverrides;
- (id)supportsPSHomeScreenPhoneCapability;
- (void)setOverrideValue:(id)a0 forKey:(id)a1;
- (id)supportsInEDUModeCapability;
- (id)supportsPSTTYCapability;
- (id)preferencesCapabilityAnswer:(id)a0;
- (id)supportsListeningExperienceCapbility;
- (id)supportsDisplayZoomCapability;
- (id)supportsPSExposureNotificationsCapability;
- (id)supportsAutoWhiteBalanceCapability;
- (id)supportsPSDeveloperSettingsCapability;
- (BOOL)capabilityBoolAnswer:(id)a0;
- (id)supportsInStoreDemoModeCapability;
- (BOOL)hasCapabilities:(id)a0;

@end
