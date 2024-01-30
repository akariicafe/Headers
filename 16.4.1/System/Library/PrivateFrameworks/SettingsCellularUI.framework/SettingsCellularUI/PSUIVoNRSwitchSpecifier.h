@class PSListController, NSString, CTXPCServiceSubscriptionContext, PSUICoreTelephonyCarrierBundleCache, PSSpecifier, PSUICoreTelephonyCapabilitiesCache, PSConfirmationSpecifier, PSUICoreTelephonyCallCache;

@interface PSUIVoNRSwitchSpecifier : PSSpecifier {
    CTXPCServiceSubscriptionContext *_subscriptionContext;
    PSListController *_listController;
    PSConfirmationSpecifier *_phoneCallWillEndWarning;
    PSConfirmationSpecifier *_vonrUnoptimizedWarning;
    PSUICoreTelephonyCallCache *_callCache;
    PSUICoreTelephonyCapabilitiesCache *_capabilitiesCache;
    PSUICoreTelephonyCarrierBundleCache *_carrierBundleCache;
    PSSpecifier *_parentSpecifier;
    NSString *_instance;
}

- (id)getLogger;
- (void).cxx_destruct;
- (BOOL)showDisableVoNRWarningsIfNeeded;
- (id)groupFooterText;
- (void)setVoNREnabled:(BOOL)a0;
- (id)getVoNREnabled;
- (id)initWithHostController:(id)a0 parentSpecifier:(id)a1;
- (id)initWithHostController:(id)a0 parentSpecifier:(id)a1 callCache:(id)a2 capabilitiesCache:(id)a3 carrierBundleCache:(id)a4;
- (void)reloadSelfInListController;
- (void)setUpPhoneCallWillEndWarningSpecifier;
- (void)setUpVoNRUnoptimizedSpecifierIfNeeded;
- (void)setVoNREnabled:(id)a0 specifier:(id)a1;
- (void)setVoNROff;
- (void)setVoNROn;
- (BOOL)shouldEnableVoNRSwitchCell;
- (BOOL)shouldShowCallWillEndWarning;
- (BOOL)shouldShowVoNRUnoptimizedWarning;
- (BOOL)showEnableVoNRWarningsIfNeeded;
- (void)showPhoneCallWillEndWarning;
- (void)showVoNRUnoptimizedWarning;
- (BOOL)showWarningsIfNeededForEnableState:(BOOL)a0;

@end
