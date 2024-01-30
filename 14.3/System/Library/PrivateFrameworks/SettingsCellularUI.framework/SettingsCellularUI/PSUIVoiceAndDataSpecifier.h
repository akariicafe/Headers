@class PSListController, Logger, CoreTelephonyClient, CTXPCServiceSubscriptionContext, CTServiceDescriptor, PSSpecifier, PSUICoreTelephonyCarrierBundleCache, NSArray, PSUICoreTelephonyCallCache, PSUIDeviceWiFiState, PSUICoreTelephonyRegistrationCache, PSConfirmationSpecifier;

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
    PSUIDeviceWiFiState *_deviceWifiState;
    NSArray *_supportedDataRates;
    BOOL _3GOverrideTo4G;
    BOOL _LTEOverrideTo4G;
    PSConfirmationSpecifier *_warningFor5G;
    BOOL _showLegacyRAT;
    Logger *_logger;
}

- (void).cxx_destruct;
- (void)startObservingNotifications;
- (id)initWithName:(id)a0 identifier:(id)a1 hostController:(id)a2 subscriptionContext:(id)a3 groupSpecifierToUpdateFooterFor:(id)a4;
- (void)setRATMode:(id)a0 specifier:(id)a1;
- (id)getRATMode;
- (void)setUpInternalState;
- (void)setUpRATSpecifers;
- (id)getLogger;
- (id)initWithName:(id)a0 identifier:(id)a1 hostController:(id)a2 subscriptionContext:(id)a3 groupSpecifierToUpdateFooterFor:(id)a4 serviceDescriptor:(id)a5 coreTelephonyClient:(id)a6 callCache:(id)a7 registrationCache:(id)a8 carrierBundleCache:(id)a9 deviceWifiState:(id)a10;
- (void)handleMaxDataRateChanged;
- (BOOL)shouldOverrideRATModeForCBKey:(id)a0;
- (void)populateSpecifiers:(id)a0 values:(id)a1;
- (id)getRATModesFromDataRate:(long long)a0;
- (id)getLocalizedStringsFromDataRate:(long long)a0;
- (id)getSmartDataModeState;
- (BOOL)shouldShow5GUnsupportedWarningForTargetRATMode:(int)a0 currentRATMode:(int)a1;
- (void)show5GUnsupportedWarning:(id)a0;
- (BOOL)shouldShowCallEndWarningForTargetRATMode:(int)a0 currentRATMode:(int)a1;
- (void)showCallMayEndWarningForTargetRATMode:(int)a0 currentRATMode:(int)a1;
- (void)setMaxDataRateForRATMode:(int)a0;
- (void)setSmartDataModeState:(int)a0;
- (void)setUp5GWarningSpecifier:(id)a0;
- (void)accepted5GWarning:(id)a0;
- (void)rejected5GWarning;
- (void)update5GWarningSpecifierTargetRATModeWithUserInput:(id)a0;
- (id)createCallMayEndConfirmationSpecifierForTargetRATMode:(int)a0 currentRATMode:(int)a1;
- (id)localizedRATModeStringForPrefix:(id)a0 targetMode:(int)a1;
- (void)acceptedRATSelectionDuringCall:(id)a0;
- (void)canceledRATSelectionDuringCall;
- (int)warningRATModeForTargetMode:(int)a0 currentMode:(int)a1;
- (id)suffixStringFromRATMode:(int)a0;
- (id)localizedWarningStringForKey:(id)a0 andRATMode:(int)a1;
- (id)getLocalizedStringFromRATMode:(int)a0;

@end
