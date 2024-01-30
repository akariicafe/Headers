@class PSListController, Logger, CTXPCServiceSubscriptionContext, PSUICoreTelephonyCarrierBundleCache, PSSpecifier, PSUICoreTelephonyCapabilitiesCache, PSConfirmationSpecifier, PSUICoreTelephonyCallCache;

@interface PSUIVoLTESwitchSpecifier : PSSpecifier {
    CTXPCServiceSubscriptionContext *_subscriptionContext;
    PSListController *_listController;
    PSConfirmationSpecifier *_unsupportedCarrierWarning;
    PSConfirmationSpecifier *_phoneCallWillEndWarning;
    PSUICoreTelephonyCallCache *_callCache;
    PSUICoreTelephonyCapabilitiesCache *_capabilitiesCache;
    PSUICoreTelephonyCarrierBundleCache *_carrierBundleCache;
    PSSpecifier *_parentSpecifier;
    Logger *_logger;
}

- (id)getLogger;
- (void).cxx_destruct;
- (id)initWithHostController:(id)a0 parentSpecifier:(id)a1;
- (id)groupFooterText;
- (void)addSpinnerIfNeededToCell:(id)a0;
- (void)setVoLTEEnabled:(id)a0 specifier:(id)a1;
- (id)getVoLTEEnabled;
- (BOOL)shouldEnableVoLTESwitchCell;
- (id)initWithHostController:(id)a0 parentSpecifier:(id)a1 callCache:(id)a2 capabilitiesCache:(id)a3 carrierBundleCache:(id)a4;
- (BOOL)showWarningsIfNeededForEnableState:(BOOL)a0;
- (void)setVoLTEEnabled:(BOOL)a0;
- (BOOL)showEnableVoLTEWarningsIfNeeded;
- (BOOL)showDisableVoLTEWarningsIfNeeded;
- (BOOL)shouldShowCallCarrierAlert;
- (void)showCallCarrierAlert;
- (BOOL)shouldShowVoLTECanCauseIssuesWarning;
- (void)showVoLTECanCauseIssuesWarning;
- (BOOL)shouldShowCallWillEndWarning;
- (void)showPhoneCallWillEndWarning;
- (void)setUpPhoneCallWillEndWarningSpecifier;
- (void)setVoLTEOff;
- (void)reloadSelfInListController;
- (void)setUpVoLTEWarningSpecifier;
- (void)setVoLTEOn;
- (id)createCallCarrierAlertForContext:(id)a0;
- (BOOL)isVoLTEProvisioning;

@end
