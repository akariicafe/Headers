@class CTServiceDescriptor, NSString, PSUICoreTelephonyCarrierBundleCache, CTXPCServiceSubscriptionContext, PSUI5GStandaloneCache, PSUIVoiceAndDataDrillDownSwitchSpecifiersFactory, CoreTelephonyClient;

@interface PSUIVoiceAndDataDrillDownController : PSListItemsController <CoreTelephonyClientCapabilitiesDelegate, UIAlertViewDelegate> {
    CTXPCServiceSubscriptionContext *_subscriptionContext;
    PSUIVoiceAndDataDrillDownSwitchSpecifiersFactory *_switchFactory;
    PSUICoreTelephonyCarrierBundleCache *_cbCache;
    PSUI5GStandaloneCache *_saCache;
    int _currentRATMode;
    CoreTelephonyClient *_ctClient;
    CTServiceDescriptor *_serviceDescriptor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setSpecifier:(id)a0;
- (void)airplaneModeChanged;
- (id)getLogger;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)startObservingNotifications;
- (void)context:(id)a0 capabilitiesChanged:(id)a1;
- (id)specifiers;
- (id)init;
- (void)reloadSpecifier:(id)a0;
- (void).cxx_destruct;
- (void)nrDisableStatusChanged:(id)a0 status:(id)a1;
- (void)listItemSelected:(id)a0;
- (int)RATModeForSpecifier:(id)a0;
- (BOOL)shouldEnable5GRATModeSpecifiers;
- (void)configure5GRATModeSpecifiersEnabledState;
- (void)configureSpecifiers;
- (id)getSwitchSpecifiers;
- (void)handleMaxDataRateChanged;
- (id)identifierForRATMode:(int)a0;
- (id)initWithCTClient:(id)a0 switchFactory:(id)a1 carrierBundleCache:(id)a2 standaloneCache:(id)a3;
- (void)prepareSpecifiers:(id)a0;
- (void)set5GRATModeSpecifierEnabledState:(id)a0;
- (void)setRATGroupFooterText;
- (void)setUpRATModeSpecifierIdentifiers:(id)a0;
- (BOOL)shouldShow5GReliabilityWarning;
- (BOOL)shouldShow5GSASwitch;
- (BOOL)shouldShowFooterTextWithVoiceExplanation;
- (BOOL)shouldShowVoLTESwitch;
- (BOOL)shouldShowVoNRSwitch;
- (void)updateCurrentRATModeFromSpecifier:(id)a0;

@end
