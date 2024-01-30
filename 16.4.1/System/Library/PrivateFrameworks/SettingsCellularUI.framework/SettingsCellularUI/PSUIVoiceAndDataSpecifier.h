@class PSListController, CoreTelephonyClient, CTXPCServiceSubscriptionContext, CTServiceDescriptor, PSSpecifier, PSUICoreTelephonyCarrierBundleCache, PSSimStatusCache, PSUICoreTelephonyCallCache, PSUIDeviceWiFiState, PSUICoreTelephonyRegistrationCache, NSArray;

@interface PSUIVoiceAndDataSpecifier : PSSpecifier {
    PSListController *_hostController;
    PSSpecifier *_mobileDataGroup;
    CTXPCServiceSubscriptionContext *_subscriptionContext;
    CTServiceDescriptor *_serviceDescriptor;
    CoreTelephonyClient *_ctClient;
    PSListController *_drillDownController;
    PSUICoreTelephonyCallCache *_callCache;
    PSUICoreTelephonyRegistrationCache *_regCache;
    PSUICoreTelephonyCarrierBundleCache *_carrierBundleCache;
    PSSimStatusCache *_simStatusCache;
    PSUIDeviceWiFiState *_deviceWifiState;
    NSArray *_supportedDataRates;
    BOOL _3GOverrideTo4G;
    BOOL _LTEOverrideTo4G;
    BOOL _showLegacyRAT;
}

- (id)getLogger;
- (void)startObservingNotifications;
- (void).cxx_destruct;
- (void)acceptedRATSelectionDuringCall:(id)a0;
- (void)canceledRATSelectionDuringCall;
- (id)createCallMayEndConfirmationSpecifierForTargetRATMode:(int)a0 currentRATMode:(int)a1;
- (id)getLocalizedStringFromRATMode:(int)a0;
- (id)getLocalizedStringsFromDataRate:(long long)a0;
- (id)getRATMode;
- (id)getRATModesFromDataRate:(long long)a0;
- (id)getSmartDataModeState;
- (void)handleMaxDataRateChanged;
- (id)initWithHostController:(id)a0 subscriptionContext:(id)a1 groupSpecifierToUpdateFooterFor:(id)a2;
- (id)initWithHostController:(id)a0 subscriptionContext:(id)a1 groupSpecifierToUpdateFooterFor:(id)a2 serviceDescriptor:(id)a3 coreTelephonyClient:(id)a4 callCache:(id)a5 registrationCache:(id)a6 carrierBundleCache:(id)a7 simStatusCache:(id)a8 deviceWifiState:(id)a9;
- (id)localizedRATModeStringForPrefix:(id)a0 targetMode:(int)a1;
- (id)localizedWarningStringForKey:(id)a0 andRATMode:(int)a1;
- (void)populateSpecifiers:(id)a0 values:(id)a1;
- (void)setMaxDataRateForRATMode:(int)a0;
- (void)setRATMode:(id)a0 specifier:(id)a1;
- (void)setSmartDataModeState:(int)a0;
- (void)setUpInternalState;
- (void)setUpRATSpecifers;
- (BOOL)shouldOverrideRATModeForCBKey:(id)a0;
- (BOOL)shouldShowCallEndWarningForTargetRATMode:(int)a0 currentRATMode:(int)a1;
- (void)showCallMayEndWarningForTargetRATMode:(int)a0 currentRATMode:(int)a1;
- (id)suffixStringFromRATMode:(int)a0;
- (int)warningRATModeForTargetMode:(int)a0 currentMode:(int)a1;

@end
