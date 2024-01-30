@class NSArray, PSSpecifier, NSString, AIDAAccountManager, ICQInternetPrivacyViewModel;
@protocol ICQInternetPrivacyDetailDelegate, AAUISpecifierProviderDelegate;

@interface ICQInternetPrivacyDetailSpecifierProvider : NSObject <AAUISpecifierProvider>

@property (retain, nonatomic) AIDAAccountManager *accountManager;
@property (retain, nonatomic) ICQInternetPrivacyViewModel *viewModel;
@property (retain, nonatomic) NSArray *banners;
@property (retain, nonatomic) PSSpecifier *enableSwitchSpecifer;
@property (weak, nonatomic) id<ICQInternetPrivacyDetailDelegate> detailDelegate;
@property (weak, nonatomic) id<AAUISpecifierProviderDelegate> delegate;
@property (copy, nonatomic) NSArray *specifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAccountManager:(id)a0;
- (void).cxx_destruct;
- (id)_switchOffAlert;
- (id)_turnOnDNSAlert;
- (void)_turnOnSafariSpecifierWasTapped;
- (id)_IPAddressLocationSpecifier;
- (void)_IPAddressLocationSpecifierWasTapped:(id)a0;
- (id)_bannerSpecifiers;
- (id)_explanationSpecifiers;
- (void)_openSystemStatusSpecifierWasTapped;
- (void)_pausePrivateRelay;
- (void)_refreshStatusAndPostNotification;
- (void)_reloadSpecifiers;
- (id)_serviceEnabledForSpecifier:(id)a0;
- (id)_serviceEnabledSpecifier;
- (void)_setServiceEnabled:(id)a0 forSpecifier:(id)a1;
- (void)_startFetchingBannerModels;
- (id)_switchOffUnsupportedCellularAlert;
- (id)_switchOffUnsupportedWifiAlert;
- (void)_turnOffCellularSpecifierWasTapped;
- (id)_turnOffUnsupportedCellularAlert;
- (id)_turnOffUnsupportedWifiAlert;
- (void)_turnOffWifiSpecifierWasTapped;
- (void)_turnOnCellularSpecifierWasTapped;
- (void)_turnOnDNSSpecifierWasTapped;
- (id)_turnOnSafariAlert;
- (void)_turnOnWifiSpecifierWasTapped;
- (void)_unsupportedCellularLearnMoreSpecifierWasTapped;
- (void)_unsupportedRegionLearnMoreSpecifierWasTapped;
- (void)_unsupportedWiFiLearnMoreSpecifierWasTapped;
- (void)_updateEnableStatusTo:(BOOL)a0;
- (id)initWithViewModel:(id)a0 accountManager:(id)a1;
- (void)presentIncompatibleSitesHelp;

@end
