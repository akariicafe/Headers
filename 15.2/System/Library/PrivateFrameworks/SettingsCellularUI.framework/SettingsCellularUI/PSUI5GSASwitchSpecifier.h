@class Logger, PSUICoreTelephonyCarrierBundleCache, PSConfirmationSpecifier, CTXPCServiceSubscriptionContext, CTNRStatus, PSListController, CoreTelephonyClient;

@interface PSUI5GSASwitchSpecifier : PSSpecifier {
    CTXPCServiceSubscriptionContext *_subscriptionContext;
    PSListController *_listController;
    PSUICoreTelephonyCarrierBundleCache *_carrierBundleCache;
    CoreTelephonyClient *_ctClient;
    PSConfirmationSpecifier *_enableSAAlert;
    CTNRStatus *_nrStatus;
    Logger *_logger;
}

- (id)getLogger;
- (void).cxx_destruct;
- (BOOL)is5GSASupported;
- (id)initWithHostController:(id)a0 parentSpecifier:(id)a1 carrierBundleCache:(id)a2;
- (id)groupFooterText;
- (void)set5GSASwitch:(id)a0 specifier:(id)a1;
- (id)is5GSAEnabled;
- (void)checkNRStatusAndDisableIfNeeded;
- (void)enable5GSA;
- (void)show5GStandaloneExperimentalAlert;
- (void)disable5GSA;
- (void)setUp5GSAAlertSpecifierIfNeeded;
- (void)refreshSelfInHostController;
- (void)set5GSAEnabled:(BOOL)a0;

@end
