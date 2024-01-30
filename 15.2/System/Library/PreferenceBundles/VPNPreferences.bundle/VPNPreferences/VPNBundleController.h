@class UIWindow, PSSpecifier, VPNConnectionStore, PSConfirmationSpecifier, NSString, NSNumber;

@interface VPNBundleController : PSBundleController <UIApplicationDelegate>

@property (retain) VPNConnectionStore *connectionStore;
@property (retain) NSNumber *lastServiceCount;
@property (retain) PSSpecifier *passwordSetupSpecifier;
@property (retain) PSSpecifier *vpnSpecifier;
@property (retain) PSSpecifier *linkVPNSpecifier;
@property (retain) PSSpecifier *dnsSpecifier;
@property (retain) PSConfirmationSpecifier *toggleVPNSpecifier;
@property (getter=isNetworkSpinnerVisible) BOOL networkSpinnerVisible;
@property (getter=isRootMenuItem) BOOL rootMenuItem;
@property (getter=isDeviceManagement) BOOL deviceManagement;
@property (getter=isToggleSwitchInRootMenu) BOOL toggleSwitchInRootMenu;
@property (getter=isRegistered) BOOL registered;
@property (retain, nonatomic) UIWindow *window;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)networkingIsDisabled;
+ (void)disableAirplaneMode;

- (void)unload;
- (id)specifiersWithSpecifier:(id)a0;
- (id)initWithParentListController:(id)a0 properties:(id)a1;
- (void)vpnStatusChanged:(id)a0;
- (void)cancelAirplaneModeDisable:(id)a0;
- (void)setVPNActive:(BOOL)a0;
- (void)updateVPNSwitchStatus;
- (void).cxx_destruct;
- (void)confirmAirplaneModeDisable:(id)a0;
- (id)getDNSSummary:(id)a0;
- (unsigned long long)getStatusAndUpdateNetworkSpinnerVisibility;
- (void)dealloc;
- (void)setVPNActive:(id)a0 forSpecifier:(id)a1;
- (id)statusForSpecifier:(id)a0;
- (void)vpnConfigurationChanged:(id)a0;
- (id)vpnActiveForSpecifier:(id)a0;

@end
