@class NSString, PSSpecifier;

@interface STAllowancesConfigurationGroupSpecifierProvider : STRootGroupSpecifierProvider <STAlwaysAllowListControllerDelegate, STDeviceBedtimeListControllerDelegate>

@property (retain, nonatomic) PSSpecifier *deviceBedtimeSpecifier;
@property (retain, nonatomic) PSSpecifier *appLimitsSpecifier;
@property (retain, nonatomic) PSSpecifier *alwaysAllowedSpecifier;
@property (retain, nonatomic) PSSpecifier *communicationLimitsSpecifier;
@property (retain, nonatomic) PSSpecifier *contentPrivacySpecifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)setCoordinator:(id)a0;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)showDeviceBedtimeViewController:(id)a0;
- (id)appLimitsDetailText;
- (void)showAppLimitsViewController:(id)a0;
- (id)_communicationLimitsDetailText;
- (void)_showCommunicationLimitsViewController:(id)a0;
- (id)alwaysAllowedDetailText;
- (void)showAlwaysAllowedViewController:(id)a0;
- (id)contentPrivacyDetailText;
- (void)showContentPrivacyViewController:(id)a0;
- (void)_communicationLimitsDidChangeFrom:(id)a0 to:(id)a1;
- (void)_deviceBedtimeDidChange:(id)a0;
- (void)_userTypeDidChange:(unsigned long long)a0;
- (void)_isRemoteUserDidChangeFrom:(BOOL)a0 to:(BOOL)a1;
- (void)_hasWatchOSDevicesOnlyDidChange:(BOOL)a0;
- (id)_subtitleTextForDeviceBedtime:(id)a0;
- (BOOL)showDemoModeAlertIfNeeded;
- (void)_resetCommunicationLimitsDetailText;
- (void)alwaysAllowListController:(id)a0 didFinishEditingAlwaysAllowList:(id)a1;
- (void)bedtimeListController:(id)a0 didFinishEditingBedtime:(id)a1;

@end
