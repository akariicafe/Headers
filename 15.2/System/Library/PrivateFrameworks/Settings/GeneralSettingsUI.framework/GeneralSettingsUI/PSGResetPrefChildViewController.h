@class NSNumber, NSString, CoreTelephonyClient, UIProgressView, PSGBackupDisabledAppsInfo, PSSpecifier, NSMutableArray, UIAlertController, UILabel, MBManager;
@protocol BSInvalidatable;

@interface PSGResetPrefChildViewController : PSListController <MBManagerDelegate, SBSHardwareButtonEventConsuming, CoreTelephonyClientCarrierBundleDelegate> {
    BOOL _requireRestrictionsCode;
    BOOL _requirePasscode;
    BOOL _returningFromPINSheetWithSuccess;
    BOOL _shouldEraseWithFMiP;
    BOOL _shouldTryEraseAgainWithFMiP;
    BOOL _shouldEraseCellularPlans;
    int _codesNeeded;
    int _codesEntered;
    PSSpecifier *_currentSpecifier;
    PSSpecifier *_locationSpecifier;
    long long _locationSpecifierIndex;
    NSString *_passcode;
    BOOL _shouldSkipCloudStatusCheck;
    BOOL _didFailSync;
    MBManager *_backupManager;
    id<BSInvalidatable> _homeButtonEventConsumerToken;
    UIAlertController *_cloudProgressAlertController;
    UILabel *_cloudProgressAlertLabel;
    UIProgressView *_cloudProgressView;
    struct __CFRunLoopSource { } *_powerSourcesChangedRunLoopSource;
    BOOL _isOnPower;
    PSGBackupDisabledAppsInfo *_backupDisabledAppsInfo;
    BOOL _isFetchingDomainInfo;
    BOOL _needToShowPopupAlertForBackup;
    PSSpecifier *_resetGroupSpecifier;
    NSMutableArray *_mutableSpecifiers;
    BOOL _viewIsDisappearing;
}

@property (nonatomic) BOOL shouldSkipBasebandStatusCheck;
@property (retain, nonatomic) CoreTelephonyClient *_client;
@property (retain, nonatomic) NSNumber *_cachedLocationServicesAvailableValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isLargeText;
+ (id)axMaxSizeCategory;

- (void)carrierBundleChange:(id)a0;
- (id)specifiers;
- (void)confirmationSpecifierConfirmed:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)didAcceptEnteredPIN:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)popupViewDidDisappear;
- (void)profileNotification:(id)a0;
- (void)loadView;
- (void)didAppear;
- (void).cxx_destruct;
- (id)init;
- (void)consumeAnyPressEventForButtonKind:(long long)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (BOOL)_networkConnectivityAvailable;
- (void)configureSpin:(BOOL)a0 ofCellForSpecifier:(id)a1 setEnabled:(BOOL)a2;
- (void)refreshLocationServicesAvailable;
- (void)showPINSheetFromParentViewController:(id)a0;
- (void)resetNetworkPrivacy;
- (void)eraseSettings:(id)a0;
- (void)resetAllCellularNetworks:(id)a0;
- (void)_resetWithMode:(long long)a0 andOptions:(id)a1 withSpecifier:(id)a2;
- (void)_showStockholmLocallyStoredValueOfflineWarningIfNeeded:(id /* block */)a0;
- (void)showResetActionSheet:(id)a0;
- (void)prepareMutableSpecifiers;
- (void)didSelectAlertAction:(id)a0;
- (void)reprovisionAccount;
- (void)resetAKey;
- (void)confirmEraseCellularSettings;
- (void)eraseCellularSettings;
- (void)presentExitBuddyWithUpsellTradeIn:(BOOL)a0;
- (void)updateCloudProgressAlertLabel:(id)a0;
- (void)updateLocationResetSpecifier;
- (void)resetKeyboardDictionary:(id)a0;
- (void)resetIconPositions:(id)a0;
- (void)resetPrivacyWarnings:(id)a0;
- (void)resetNetworkSettings:(id)a0;
- (void)subscriberOptions:(id)a0;
- (void)deviceFullErase:(id)a0;
- (void)changeAlertMessageIfNeeded:(BOOL)a0;

@end
