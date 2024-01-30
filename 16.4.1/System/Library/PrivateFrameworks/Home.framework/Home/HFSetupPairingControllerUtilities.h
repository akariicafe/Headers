@interface HFSetupPairingControllerUtilities : NSObject

@property (class, readonly, nonatomic) double accessoryDiscoverySoftTimeout;
@property (class, readonly, nonatomic) double accessoryDiscoveryFatalTimeout;

+ (id)_accessoryNotFoundStatusDescriptionSuffixForSetupResult:(id)a0;
+ (BOOL)_context:(id)a0 requiresUserConsentToReplaceInHome:(id)a1;
+ (id)descriptionForPairingPhase:(unsigned long long)a0;
+ (void)getStatusTitle:(id *)a0 statusDescription:(id *)a1 forPairingPhase:(unsigned long long)a2 phaseStartDate:(id)a3 discoveredAccessory:(id)a4 setupResult:(id)a5;
+ (BOOL)isPairingPhaseIdle:(unsigned long long)a0;
+ (unsigned long long)processSetupAccessoryProgressChange:(long long)a0 currentPhase:(unsigned long long)a1 context:(id)a2 discoveredAccessory:(id)a3 setupResult:(id)a4 home:(id)a5 callerClass:(Class)a6;

@end
