@class CTServiceDescriptor, NSString, Logger, CTXPCServiceSubscriptionContext, PSUIVoiceAndDataDrillDownSwitchSpecifiersFactory, CoreTelephonyClient;

@interface PSUIVoiceAndDataDrillDownController : PSListItemsController <CoreTelephonyClientCapabilitiesDelegate, UIAlertViewDelegate> {
    CTXPCServiceSubscriptionContext *_subscriptionContext;
    PSUIVoiceAndDataDrillDownSwitchSpecifiersFactory *_switchFactory;
    int _currentRATMode;
    CoreTelephonyClient *_ctClient;
    CTServiceDescriptor *_serviceDescriptor;
    Logger *_logger;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)specifiers;
- (void)nrDisableStatusChanged:(id)a0 status:(id)a1;
- (void)setSpecifier:(id)a0;
- (id)getLogger;
- (void)context:(id)a0 capabilitiesChanged:(id)a1;
- (void)reloadSpecifier:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)airplaneModeChanged;
- (void)listItemSelected:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)startObservingNotifications;
- (void)handleMaxDataRateChanged;
- (void)updateCurrentRATModeFromSpecifier:(id)a0;
- (void)prepareSpecifiers:(id)a0;
- (void)configureSpecifiers;
- (void)setUpRATModeSpecifierIdentifiers:(id)a0;
- (id)getSwitchSpecifiers;
- (int)RATModeForSpecifier:(id)a0;
- (id)identifierForRATMode:(int)a0;
- (void)configure5GRATModeSpecifiersEnabledState;
- (void)setRATGroupFooterText;
- (BOOL)shouldShowFooterTextWithVoiceExplanation;
- (BOOL)shouldEnable5GRATModeSpecifiers;
- (void)set5GRATModeSpecifierEnabledState:(id)a0;
- (BOOL)shouldShowVoLTESwitch;
- (BOOL)shouldShow5GSASwitch:(id)a0;
- (id)initWithCTClient:(id)a0 switchFactory:(id)a1;

@end
