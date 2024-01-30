@class PhoneSettingsTelephony, PSSpecifier, NSString, PHNetworkFetcher, NSMutableArray;

@interface PhoneSettingsNetworksController : PSListItemsController

@property (readonly, nonatomic) PhoneSettingsTelephony *telephonySettings;
@property (retain) PHNetworkFetcher *fetcher;
@property (nonatomic) BOOL showNetworkList;
@property (retain, nonatomic) PSSpecifier *titleSpecifier;
@property (retain, nonatomic) PSSpecifier *automaticSpecifier;
@property (retain, nonatomic) PSSpecifier *networksGroupSpecifier;
@property (retain, nonatomic) PSSpecifier *searchingSpecifier;
@property (retain) NSMutableArray *networksSpecifiersArray;
@property (retain) NSString *cachedMobileIdentity;

- (id)descriptionDictionary;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)listItemSelected:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)shouldReloadSpecifiersOnResume;
- (void)viewDidLoad;
- (void)_registerEventListeners;
- (void)_updateCachedMobileIdentity;
- (BOOL)_isInManualMode;
- (void)updateNetworkListSpecifiers;
- (void)updateNetworkListSpecifierStates;
- (BOOL)_isInAutomaticMode;
- (void)_handleRadioOffErrorNotification:(id)a0;
- (void)_handleSimChangedNotification:(id)a0;
- (void)_handleNetworkSettingsDisabledNotification:(id)a0;
- (void)_handleNetworksChangedNotification:(id)a0;
- (void)_handleNetworkFetcherStateChangedNotification:(id)a0;
- (void)_handleNetworkFetcherNetworkSelectionStateChangedNotification:(id)a0;
- (void)_handleNetworkFetcherErrorNotification:(id)a0;
- (void)_settingsResumed;
- (void)_autoSwitchTurnedOn;
- (void)_autoSwitchTurnedOff;
- (void)setAutomaticSwitchState:(id)a0 forSpecifier:(id)a1;
- (id)getAutomaticSwitchStateForSpecifier:(id)a0;
- (void)_setAutomaticSwitchOn:(BOOL)a0 animated:(BOOL)a1;
- (int)_currentNetworkSelectionState;

@end
