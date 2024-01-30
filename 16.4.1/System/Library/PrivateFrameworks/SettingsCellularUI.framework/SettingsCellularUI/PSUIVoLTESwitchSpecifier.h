@class PSListController, CTXPCServiceSubscriptionContext, PSSimStatusCache, PSUICoreTelephonyCarrierBundleCache, PSSpecifier, PSUICoreTelephonyCapabilitiesCache, PSConfirmationSpecifier, PSUICoreTelephonyCallCache;

@interface PSUIVoLTESwitchSpecifier : PSSpecifier {
    CTXPCServiceSubscriptionContext *_subscriptionContext;
    PSListController *_listController;
    PSConfirmationSpecifier *_phoneCallWillEndWarning;
    PSUICoreTelephonyCallCache *_callCache;
    PSUICoreTelephonyCapabilitiesCache *_capabilitiesCache;
    PSUICoreTelephonyCarrierBundleCache *_carrierBundleCache;
    PSSimStatusCache *_simStatusCache;
    PSSpecifier *_parentSpecifier;
}

- (id)getLogger;
- (void).cxx_destruct;
- (id)getVoLTEEnabled;
- (id)groupFooterText;
- (BOOL)showEnableVoLTEWarningsIfNeeded;
- (void)addSpinnerIfNeededToCell:(id)a0;
- (id)createCallCarrierAlertForContext:(id)a0;
- (id)initWithHostController:(id)a0 parentSpecifier:(id)a1;
- (id)initWithHostController:(id)a0 parentSpecifier:(id)a1 callCache:(id)a2 capabilitiesCache:(id)a3 carrierBundleCache:(id)a4 simStatusCache:(id)a5;
- (BOOL)isVoLTEProvisioning;
- (void)reloadSelfInListController;
- (void)setUpPhoneCallWillEndWarningSpecifier;
- (void)setVoLTEEnabled:(BOOL)a0;
- (void)setVoLTEEnabled:(id)a0 specifier:(id)a1;
- (void)setVoLTEOff;
- (BOOL)shouldEnableVoLTESwitchCell;
- (BOOL)shouldShowCallCarrierAlert;
- (BOOL)shouldShowCallWillEndWarning;
- (BOOL)shouldShowVoLTEUnsupportedWarning;
- (void)showCallCarrierAlert;
- (BOOL)showDisableVoLTEWarningsIfNeeded;
- (void)showPhoneCallWillEndWarning;
- (BOOL)showWarningsIfNeededForEnableState:(BOOL)a0;

@end
