@class NSTimer, NSString, PSSpecifier;

@interface STAllowancesConfigurationGroupSpecifierProvider : STRootGroupSpecifierProvider <STAlwaysAllowListControllerDelegate, STDeviceBedtimeListControllerDelegate>

@property (retain, nonatomic) PSSpecifier *deviceBedtimeSpecifier;
@property (retain, nonatomic) PSSpecifier *appLimitsSpecifier;
@property (retain, nonatomic) PSSpecifier *alwaysAllowedSpecifier;
@property (retain, nonatomic) PSSpecifier *communicationLimitsSpecifier;
@property (retain, nonatomic) PSSpecifier *contentPrivacySpecifier;
@property (readonly, nonatomic) BOOL isCommunicationSafetyRegionSupported;
@property (retain, nonatomic) PSSpecifier *communicationSafetySpecifier;
@property (retain, nonatomic) NSTimer *downtimeScheduleRefreshTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCoordinator:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)init;
- (void).cxx_destruct;
- (void)scheduleDowntimeRefreshIfNeeded;
- (id)_communicationLimitsDetailText;
- (void)_communicationLimitsDidChangeFrom:(id)a0 to:(id)a1;
- (id)_communicationSafetyDetailText;
- (void)_communicationSafetyDidChange;
- (void)_deviceBedtimeDidChange:(id)a0;
- (void)_hasWatchOSDevicesOnlyDidChange:(BOOL)a0;
- (BOOL)_isCommunicationSafetyRegionSupportedOrAlreadyEnabled;
- (void)_isManagedDidChangeTo:(BOOL)a0;
- (void)_isRemoteUserDidChangeFrom:(BOOL)a0 to:(BOOL)a1;
- (void)_refreshBedtimeSpecifiersForBedtime:(id)a0;
- (void)_resetCommunicationLimitsDetailText;
- (void)_showCommunicationLimitsViewController:(id)a0;
- (id)_subtitleTextForDeviceBedtime:(id)a0;
- (void)_userTypeDidChange:(unsigned long long)a0;
- (void)alwaysAllowListController:(id)a0 didFinishEditingAlwaysAllowList:(id)a1;
- (id)alwaysAllowedDetailText;
- (id)appLimitsDetailText;
- (void)bedtimeListController:(id)a0 didFinishEditingBedtime:(id)a1;
- (id)contentPrivacyDetailText;
- (void)scheduleDowntimeRefreshAndReloadSpecifiersForBedtime:(id)a0;
- (void)showAlwaysAllowedViewController:(id)a0;
- (void)showAppLimitsViewController:(id)a0;
- (void)showCommunicationSafetyViewController:(id)a0;
- (BOOL)showDemoModeAlertIfNeeded;
- (void)showDeviceBedtimeViewController:(id)a0;

@end
