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

- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (id)specifiers;
- (id)init;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)hideActivityInProgressUI;
- (void)hideActivityInProgressUIWithDelay:(double)a0;
- (BOOL)isShowingActivityInProgressUI;
- (void)showActivityInProgressUIWithMessage:(id)a0;
- (id)_userAgentHeader;
- (id)_clientInfoHeader;
- (BOOL)FMWLANEnabled;
- (void)_disableFMIP;
- (BOOL)_doesDeviceSupportOfflineFindingLowPowerMode;
- (void)_enableFMIP;
- (void)_fmipSettingsCacheDidUpdate:(id)a0;
- (id)_fmipSwitchOnForSpecifier:(id)a0;
- (id)_groupSpecifierForFMIP;
- (id)_groupSpecifierForOfflineFinding;
- (id)_groupSpecifierForSendLastLocation;
- (void)_loadSearchPartyConfiguration;
- (id)_offlineFindingSwitchOnForSpecifier:(id)a0;
- (void)_reloadSpecifiersOnMainQueue;
- (id)_sendLastLocationSwitchOnForSpecifier:(id)a0;
- (void)_setFMIPSwitchOn:(id)a0 forSpecifier:(id)a1;
- (void)_setOfflineFindingSwitchOn:(id)a0 forSpecifier:(id)a1;
- (void)_setSendLastLocationSwitchOn:(id)a0 forSpecifier:(id)a1;
- (void)_showFMIPPrivacyPage;
- (void)_showOfflineFindingAlertWhenTurningOff;
- (void)_showOfflineFindingLearnMorePage;
- (id)_specifierForFMIP;
- (id)_specifierForOfflineFinding;
- (id)_specifierForSendLastLocation;
- (void)hideActivityInProgress;
- (void)presentHSA2UpgradeForOfflineFinding;
- (void)setSearchPartyConfigurationActive:(BOOL)a0;
- (void)showActivityInProgress;
- (void)showHSA2UpgradeAlert;

@end
