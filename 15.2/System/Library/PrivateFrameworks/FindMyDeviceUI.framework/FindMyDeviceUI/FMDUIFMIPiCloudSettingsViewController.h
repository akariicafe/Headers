@class PSSpecifier, UIProgressHUD, NSObject, ACAccount;
@protocol SPSettingsConfigurating;

@interface FMDUIFMIPiCloudSettingsViewController : PSListController

@property (retain, nonatomic) PSSpecifier *fmipSpecifier;
@property (nonatomic) BOOL togglingFMIPSwitch;
@property (retain, nonatomic) PSSpecifier *sendLastLocationSpecifier;
@property (retain, nonatomic) UIProgressHUD *hud;
@property (nonatomic) BOOL activityInProgress;
@property (retain, nonatomic) NSObject<SPSettingsConfigurating> *spSession;
@property (nonatomic) BOOL offlineFindingEnabled;
@property (nonatomic) BOOL offlineFindingDisabledDueToNotHSA2;
@property (nonatomic) BOOL firstTimeSetup;
@property (retain, nonatomic) ACAccount *account;

- (id)specifiers;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidAppear:(BOOL)a0;
- (id)_clientInfoHeader;
- (void)hideActivityInProgressUI;
- (void)showActivityInProgressUIWithMessage:(id)a0;
- (void)hideActivityInProgressUIWithDelay:(double)a0;
- (BOOL)isShowingActivityInProgressUI;
- (id)_userAgentHeader;
- (void)_reloadSpecifiersOnMainQueue;
- (void)_loadSearchPartyConfiguration;
- (void)_fmipSettingsCacheDidUpdate:(id)a0;
- (void)showActivityInProgress;
- (id)_groupSpecifierForFMIP;
- (id)_specifierForFMIP;
- (id)_fmipSwitchOnForSpecifier:(id)a0;
- (id)_groupSpecifierForOfflineFinding;
- (id)_specifierForOfflineFinding;
- (id)_specifierForSendLastLocation;
- (id)_groupSpecifierForSendLastLocation;
- (void)_setFMIPSwitchOn:(id)a0 forSpecifier:(id)a1;
- (void)_setOfflineFindingSwitchOn:(id)a0 forSpecifier:(id)a1;
- (id)_offlineFindingSwitchOnForSpecifier:(id)a0;
- (BOOL)_doesDeviceSupportOfflineFindingLowPowerMode;
- (void)presentHSA2UpgradeForOfflineFinding;
- (void)setSearchPartyConfigurationActive:(BOOL)a0;
- (void)_setSendLastLocationSwitchOn:(id)a0 forSpecifier:(id)a1;
- (id)_sendLastLocationSwitchOnForSpecifier:(id)a0;
- (void)_showFMIPPrivacyPage;
- (void)_enableFMIP;
- (void)_disableFMIP;
- (void)_showOfflineFindingAlertWhenTurningOff;
- (void)showHSA2UpgradeAlert;
- (BOOL)FMWLANEnabled;
- (void)_showOfflineFindingLearnMorePage;
- (void)hideActivityInProgress;

@end
