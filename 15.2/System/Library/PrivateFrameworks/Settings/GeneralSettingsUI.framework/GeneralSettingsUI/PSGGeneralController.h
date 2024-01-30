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
@property (nonatomic) BOOL launchHasCompleted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)booleanCapabilitiesToTest;

- (id)specifiers;
- (BOOL)shouldDeferPushForSpecifierID:(id)a0;
- (void)handleTVOutChange;
- (void)updateFontsWithCompletion:(id /* block */)a0;
- (void)gameControllersDidChange;
- (void)enableEdge:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)profileVisibilityChanged:(id)a0;
- (void)shutDown:(id)a0;
- (BOOL)shouldReloadSpecifiersOnResume;
- (void)profileNotification:(id)a0;
- (id)EDGEEnabled:(id)a0;
- (void)_setUseSwitchForOrientationLockWithSpecifier:(id)a0;
- (void)homeButtonCustomizeControllerDidFinish:(id)a0;
- (void)insertOrderedSpecifiers:(id)a0 atID:(id)a1 animated:(BOOL)a2;
- (void)reloadAsyncSpecifiersWithCompletion:(id /* block */)a0;
- (void)updateSoftwareUpdateBadge;
- (void)updateTrackpadWithCompletion:(id /* block */)a0;
- (void)updateGameControllersWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)delayedAsyncLoadSpecifiers;
- (void)handleCarPlayAllowedDidChange;
- (void)pairedVehiclesDidChange;
- (void)reloadSpecifiers;
- (void)dealloc;
- (void)pointerDevicesDidChange;
- (void)handleDidBecomeActive;
- (BOOL)_hasCarPlayContent;
- (void)loadHomeButtonSettings:(id)a0;
- (void)loadLegalAndRegulatoryWithSpecifier:(id)a0;
- (void)updateProfilesWithCompletion:(id /* block */)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;

@end
