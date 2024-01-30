@class NSString, SBAirplaneModeController, SBTelephonyManager;

@interface SBApplicationLaunchAlertEvaluatorForNetworkBasedAlertItems : NSObject <SBApplicationLaunchAlertEvaluator> {
    SBAirplaneModeController *_airplaneModeController;
    SBTelephonyManager *_telephonyManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_telephonyManager;
- (id)_airplaneModeController;
- (id)init;
- (void).cxx_destruct;
- (id)initWithAirplaneModeController:(id)a0 telephonyManager:(id)a1;
- (unsigned long long)shouldShowLaunchAlertForApplication:(id)a0;

@end
