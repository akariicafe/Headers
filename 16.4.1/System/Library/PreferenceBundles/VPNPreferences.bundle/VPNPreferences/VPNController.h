@class NSMutableArray, PSSpecifier;

@interface VPNController : PSListController

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
@property (retain) PSSpecifier *privacyLinkSpecifier;

- (void)willBecomeActive;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)dealloc;
- (id)specifiers;
- (id)init;
- (void)handleURL:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)loadView;
- (void)alertView:(id)a0 willDismissWithButtonIndex:(long long)a1;
- (void)tableView:(id)a0 accessoryButtonTappedForRowWithIndexPath:(id)a1;
- (void)setPersonalVPNActive:(BOOL)a0 specifier:(id)a1;
- (void)addListForGrade:(unsigned long long)a0 toSpecifiers:(id)a1;
- (void)addVPNConfiguration:(id)a0;
- (void)cancelAirplaneModeDisable:(id)a0;
- (void)cancelEnterpriseConnection:(id)a0;
- (void)cancelPersonalConnection:(id)a0;
- (void)changeActiveVPN:(id)a0;
- (void)confirmAirplaneModeDisable:(id)a0;
- (id)dnsStatusForSpecifier:(id)a0;
- (id)getAOVPNEnabledForSpecifier:(id)a0;
- (id)getDNSSummary:(id)a0;
- (id)getEnterpriseConnectionStateForSpecifier:(id)a0;
- (id)getPersonalConnectionStateForSpecifier:(id)a0;
- (id)messageForConnection:(id)a0;
- (void)privacyLinkAction;
- (void)setAOVPNEnabled:(id)a0 forSpecifier:(id)a1;
- (void)setEnterpriseConnectionState:(id)a0 forSpecifier:(id)a1;
- (void)setEnterpriseVPNActive:(BOOL)a0 specifier:(id)a1;
- (void)setPersonalConnectionState:(id)a0 forSpecifier:(id)a1;
- (BOOL)shouldHideAddVPNButton;
- (void)someVPNStatusChanged:(id)a0;
- (void)startEnterpriseConnection:(id)a0;
- (void)startPersonalConnection:(id)a0;
- (void)updateVPNConfigurationsList;
- (void)vpnConfigurationChanged:(id)a0;
- (void)vpnEnterpriseStatusChanged:(id)a0;
- (void)vpnPersonalStatusChanged:(id)a0;

@end
