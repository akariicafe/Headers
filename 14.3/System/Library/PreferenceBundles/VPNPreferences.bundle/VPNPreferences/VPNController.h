@class NSMutableArray, PSSpecifier;

@interface VPNController : PSListController

@property (getter=isNetworkSpinnerVisible) BOOL networkSpinnerVisible;
@property (retain) PSSpecifier *connectEnterpriseSpecifier;
@property (retain) PSSpecifier *connectPersonalSpecifier;
@property (retain) PSSpecifier *currentAOVPNSpecifier;
@property (retain) NSMutableArray *currentAppVPNSpecifiers;
@property (retain) NSMutableArray *currentEnterpriseVPNSpecifiers;
@property (retain) NSMutableArray *currentPersonalVPNSpecifiers;
@property (retain) PSSpecifier *alwaysOnGroupTitleSpecifier;
@property (retain) PSSpecifier *enterpriseGroupTitleSpecifier;
@property (retain) PSSpecifier *personalGroupTitleSpecifier;
@property (retain) PSSpecifier *appGroupTitleSpecifier;
@property (retain) PSSpecifier *addVPNButtonSpecifier;

- (void)handleURL:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)tableView:(id)a0 accessoryButtonTappedForRowWithIndexPath:(id)a1;
- (void)loadView;
- (id)specifiers;
- (void)alertView:(id)a0 willDismissWithButtonIndex:(long long)a1;
- (void)unload;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)vpnConfigurationChanged:(id)a0;
- (void)confirmAirplaneModeDisable:(id)a0;
- (void)willBecomeActive;
- (void)cancelAirplaneModeDisable:(id)a0;
- (unsigned long long)updateNetworkSpinnerVisibility;
- (void)vpnPersonalStatusChanged:(id)a0;
- (void)vpnEnterpriseStatusChanged:(id)a0;
- (void)someVPNStatusChanged:(id)a0;
- (void)setEnterpriseVPNActive:(BOOL)a0 specifier:(id)a1;
- (void)setPersonalVPNActive:(BOOL)a0 specifier:(id)a1;
- (void)setAOVPNEnabled:(id)a0 forSpecifier:(id)a1;
- (id)getAOVPNEnabledForSpecifier:(id)a0;
- (void)setEnterpriseConnectionState:(id)a0 forSpecifier:(id)a1;
- (id)getEnterpriseConnectionStateForSpecifier:(id)a0;
- (id)messageForConnection:(id)a0;
- (void)addListForGrade:(unsigned long long)a0 toSpecifiers:(id)a1;
- (void)setPersonalConnectionState:(id)a0 forSpecifier:(id)a1;
- (id)getPersonalConnectionStateForSpecifier:(id)a0;
- (BOOL)shouldHideAddVPNButton;
- (void)addVPNConfiguration:(id)a0;
- (id)getDNSSummary:(id)a0;
- (void)changeActiveVPN:(id)a0;
- (void)startEnterpriseConnection:(id)a0;
- (void)cancelEnterpriseConnection:(id)a0;
- (void)startPersonalConnection:(id)a0;
- (void)cancelPersonalConnection:(id)a0;
- (id)dnsStatusForSpecifier:(id)a0;
- (void)updateVPNConfigurationsList;

@end
