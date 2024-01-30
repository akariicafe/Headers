@class Logger, PSConfirmationSpecifier, CTNRStatus, CTXPCServiceSubscriptionContext, PSListController, CoreTelephonyClient;

@interface PSUI5GSASwitchSpecifier : PSSpecifier {
    CTXPCServiceSubscriptionContext *_subscriptionContext;
    PSListController *_listController;
    CoreTelephonyClient *_ctClient;
    PSConfirmationSpecifier *_enableSAAlert;
    CTNRStatus *_nrStatus;
    Logger *_logger;
}

- (void).cxx_destruct;
- (id)initWithHostController:(id)a0 parentSpecifier:(id)a1;
- (BOOL)is5GSASupported;
- (id)getLogger;
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
