@class CRCarPlayPreferences, NSString, PSSpecifier, NSTimer, PSGTVOutManager, NSArray, NSUserDefaults;

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
    NSUserDefaults *_gameControllerPrefs;
}

@property (retain, nonatomic) PSSpecifier *carplayMatterGroup;
@property (retain, nonatomic) PSSpecifier *matterSpecifier;
@property (retain, nonatomic) CRCarPlayPreferences *carPreferences;
@property (nonatomic) BOOL launchHasCompleted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)booleanCapabilitiesToTest;

- (void)_setUseSwitchForOrientationLockWithSpecifier:(id)a0;
- (void)insertOrderedSpecifiers:(id)a0 atID:(id)a1 animated:(BOOL)a2;
- (void)reloadSpecifiers;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)profileNotification:(id)a0;
- (void)delayedAsyncLoadSpecifiers;
- (void)updateTrackpadWithCompletion:(id /* block */)a0;
- (void)pointerDevicesDidChange;
- (void)loadHomeButtonSettings:(id)a0;
- (BOOL)shouldReloadSpecifiersOnResume;
- (void)enableEdge:(id)a0;
- (void)handleTVOutChange;
- (void)handleCarPlayAllowedDidChange;
- (void)updateMatterWithCompletion:(id /* block */)a0;
- (BOOL)_hasCarPlayContent;
- (id)EDGEEnabled:(id)a0;
- (void)pairedVehiclesDidChange;
- (void)loadLegalAndRegulatoryWithSpecifier:(id)a0;
- (void)dealloc;
- (void)gameControllersDidChange;
- (void)updateGameControllersWithCompletion:(id /* block */)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)handleDidBecomeActive;
- (id)specifiers;
- (id)init;
- (void)updateFontsWithCompletion:(id /* block */)a0;
- (void)profileVisibilityChanged:(id)a0;
- (void)updateSoftwareUpdateBadge;
- (BOOL)shouldDeferPushForSpecifierID:(id)a0;
- (void)updateProfilesWithCompletion:(id /* block */)a0;
- (void)reloadAsyncSpecifiersWithCompletion:(id /* block */)a0;
- (void)shutDown:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)homeButtonCustomizeControllerDidFinish:(id)a0;

@end
