@class UIWindow, PSSpecifier, VPNConnectionStore, PSConfirmationSpecifier, NSString, NSNumber;

@interface VPNBundleController : PSBundleController <UIApplicationDelegate>

@property (retain) VPNConnectionStore *connectionStore;
@property (retain) NSNumber *lastServiceCount;
@property (retain) PSSpecifier *passwordSetupSpecifier;
@property (retain) PSSpecifier *vpnSpecifier;
@property (retain) PSSpecifier *linkVPNSpecifier;
@property (retain) PSConfirmationSpecifier *toggleVPNSpecifier;
@property (getter=isNetworkSpinnerVisible) BOOL networkSpinnerVisible;
@property (getter=isRootMenuItem) BOOL rootMenuItem;
@property (getter=isToggleSwitchInRootMenu) BOOL toggleSwitchInRootMenu;
@property (getter=isRegistered) BOOL registered;
@property (retain, nonatomic) UIWindow *window;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)networkingIsDisabled;
+ (void)disableAirplaneMode;

- (id)initWithParentListController:(id)a0 properties:(id)a1;
- (void)updateVPNSwitchStatus;
- (void)setVPNActive:(id)a0 forSpecifier:(id)a1;
- (void).cxx_destruct;
- (id)specifiersWithSpecifier:(id)a0;
- (void)dealloc;
- (void)unload;
- (void)vpnConfigurationChanged:(id)a0;
- (void)confirmAirplaneModeDisable:(id)a0;
- (id)vpnActiveForSpecifier:(id)a0;
- (unsigned long long)getStatusAndUpdateNetworkSpinnerVisibility;
- (void)setVPNActive:(BOOL)a0;
- (void)cancelAirplaneModeDisable:(id)a0;
- (id)statusForSpecifier:(id)a0;
- (void)vpnStatusChanged:(id)a0;

@end
