@class NSArray;

@interface SBStatusBarDefaults : SBAbstractSpringBoardDefaultDomain

@property (readonly, nonatomic) NSArray *countryCodesShowingEmergencyOnlyStatus;
@property (readonly, nonatomic) BOOL showBatteryLevel;
@property (readonly, nonatomic) BOOL showBatteryPercentage;
@property (readonly, nonatomic) BOOL suppressStatusBarOverrideForScreenSharing;
@property (readonly, nonatomic) BOOL showOptimalCellDataForCarPlay;
@property (readonly, nonatomic) BOOL showOverridesForRecording;
@property (readonly, nonatomic) BOOL showRSSI;
@property (readonly, nonatomic) unsigned long long statusBarLogLevel;
@property (readonly, nonatomic) BOOL showThermalWarning;

- (void)_bindAndRegisterDefaults;

@end
