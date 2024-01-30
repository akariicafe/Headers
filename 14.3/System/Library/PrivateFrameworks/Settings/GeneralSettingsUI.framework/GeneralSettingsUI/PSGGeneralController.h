@class CRCarPlayPreferences, NSString, NSTimer, PSGTVOutManager, PSSpecifier, NSArray;

@interface PSGGeneralController : PSListController <CRCarPlayPreferencesDelegate, PSGHomeButtonCustomizeControllerDelegate, SFAirDropDiscoveryControllerDelegate, DevicePINControllerDelegate, PSListControllerTestableSpecifiers> {
    NSTimer *_usageTimer;
    PSGTVOutManager *_tvOutManager;
    PSSpecifier *_tvOutSpecifier;
    PSSpecifier *_airDropSpecifier;
    NSArray *_vpnBundleControllers;
    NSArray *_vpnSpecifiers;
    NSArray *_profileBundleControllers;
    NSArray *_profileSpecifiers;
    NSArray *_fontBundleControllers;
    NSArray *_fontSpecifiers;
}

@property (retain, nonatomic) CRCarPlayPreferences *carPreferences;
@property (nonatomic) BOOL _viewWillAppearCalled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)booleanCapabilitiesToTest;

- (void)_setUseSwitchForOrientationLockWithSpecifier:(id)a0;
- (void)handleCarPlayAllowedDidChange;
- (void)delayedAsyncLoadSpecifiers;
- (void)gameControllersDidChange;
- (void)updateFontsWithCompletion:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (void)updateGameControllersWithCompletion:(id /* block */)a0;
- (void)insertOrderedSpecifiers:(id)a0 atID:(id)a1 animated:(BOOL)a2;
- (void)loadLegalAndRegulatoryWithSpecifier:(id)a0;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)updateProfilesWithCompletion:(id /* block */)a0;
- (void)reloadSpecifiers;
- (id)specifiers;
- (BOOL)_hasCarPlayContent;
- (void)pointerDevicesDidChange;
- (void)updateTrackpadWithCompletion:(id /* block */)a0;
- (void)shutDown:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)profileVisibilityChanged:(id)a0;
- (void)profileNotification:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)handleDidBecomeActive;
- (void)updateSoftwareUpdateBadge;
- (void)enableEdge:(id)a0;
- (void)homeButtonCustomizeControllerDidFinish:(id)a0;
- (void)loadHomeButtonSettings:(id)a0;
- (BOOL)shouldReloadSpecifiersOnResume;
- (id)EDGEEnabled:(id)a0;
- (void)pairedVehiclesDidChange;
- (void)updateVPNWithCompletion:(id /* block */)a0;
- (void)reloadAsyncSpecifiersWithCompletion:(id /* block */)a0;
- (void)handleTVOutChange;
- (BOOL)shouldDeferPushForSpecifierID:(id)a0;

@end
