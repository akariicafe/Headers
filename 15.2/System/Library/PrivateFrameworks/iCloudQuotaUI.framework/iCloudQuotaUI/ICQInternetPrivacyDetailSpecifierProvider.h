@class NSArray, NSString, PSSpecifier, AIDAAccountManager, ICQInternetPrivacyViewModel;
@protocol ICQInternetPrivacyDetailDelegate, AAUISpecifierProviderDelegate;

@interface ICQInternetPrivacyDetailSpecifierProvider : NSObject <AAUISpecifierProvider>

@property (retain, nonatomic) AIDAAccountManager *accountManager;
@property (retain, nonatomic) ICQInternetPrivacyViewModel *viewModel;
@property (retain, nonatomic) NSArray *banners;
@property (retain, nonatomic) NSString *wiFiName;
@property (retain, nonatomic) NSString *cellularName;
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
- (id)initWithViewModel:(id)a0 accountManager:(id)a1;
- (void)_reloadSpecifiers;
- (void)_startFetchingBannerModels;
- (id)_explanationSpecifiers;
- (id)_bannerSpecifiers;
- (void)_setServiceEnabled:(id)a0 forSpecifier:(id)a1;
- (id)_serviceEnabledForSpecifier:(id)a0;
- (void)_IPAddressLocationSpecifierWasTapped:(id)a0;
- (id)_IPAddressLocationSpecifier;
- (id)_serviceEnabledSpecifier;
- (void)_turnOffWifiSpecifierWasTapped;
- (void)_unsupportedWiFiLearnMoreSpecifierWasTapped;
- (void)_turnOffCellularSpecifierWasTapped;
- (void)_unsupportedCellularLearnMoreSpecifierWasTapped;
- (void)_turnOnSafariSpecifierWasTapped;
- (void)_turnOnDNSSpecifierWasTapped;
- (void)_unsupportedRegionLearnMoreSpecifierWasTapped;
- (void)_turnOnWifiSpecifierWasTapped;
- (void)_turnOnCellularSpecifierWasTapped;
- (void)_openSystemStatusSpecifierWasTapped;
- (id)_turnOnSafariAlert;
- (id)_turnOnDNSAlert;
- (id)_turnOffUnsupportedWifiAlert;
- (id)_turnOffUnsupportedCellularAlert;
- (void)_refreshStatusAndPostNotification;
- (id)_switchOffUnsupportedCellularAlert;
- (id)_switchOffUnsupportedWifiAlert;
- (id)_switchOffAlert;
- (void)_updateEnableStatusTo:(BOOL)a0;
- (void)presentIncompatibleSitesHelp;

@end
