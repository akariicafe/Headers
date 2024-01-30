@class PSUICoreTelephonyCarrierBundleCache, PSConfirmationSpecifier, CTXPCServiceSubscriptionContext, CTNRStatus, PSListController, NSString;

@interface PSUI5GSASwitchSpecifier : PSSpecifier {
    CTXPCServiceSubscriptionContext *_subscriptionContext;
    PSListController *_listController;
    PSUICoreTelephonyCarrierBundleCache *_carrierBundleCache;
    PSConfirmationSpecifier *_enableSAAlert;
    CTNRStatus *_nrStatus;
    NSString *_instance;
}

- (id)getLogger;
- (void).cxx_destruct;
- (void)set5GSAEnabled:(BOOL)a0;
- (void)setUp5GSAAlertSpecifierIfNeeded;
- (void)checkNRStatusAndDisableIfNeeded;
- (id)groupFooterText;
- (void)disable5GSA;
- (void)enable5GSA;
- (id)initWithHostController:(id)a0 parentSpecifier:(id)a1 carrierBundleCache:(id)a2;
- (id)is5GSAEnabled;
- (void)refreshSpecifiersInHostController;
- (void)set5GSASwitch:(id)a0 specifier:(id)a1;
- (BOOL)shouldAddCoverageExtensionFooterText;
- (void)show5GStandaloneExperimentalAlert;

@end
