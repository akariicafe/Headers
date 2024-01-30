@class IMSystemMonitor, NSMutableDictionary, NSString, NSHashTable;

@interface IDSCTAdapter : NSObject <CoreTelephonyClientDelegate, CoreTelephonyClientSubscriberDelegate, CoreTelephonyClientPNRDelegate, CoreTelephonyClientCarrierBundleDelegate, IMSystemMonitorListener>

@property (retain, nonatomic) NSHashTable *listeners;
@property (retain, nonatomic) id coreTelephonyClient;
@property (retain, nonatomic) id cache;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (retain, nonatomic) NSMutableDictionary *registrationStateByLabelID;
@property (retain, nonatomic) IMSystemMonitor *systemMonitor;
@property (readonly, nonatomic) BOOL dualSIMCapabilityEnabled;
@property (readonly, nonatomic) BOOL isAnySIMUsable;
@property (readonly, nonatomic) BOOL isAnySIMInserted;
@property (readonly, nonatomic) BOOL supportsIdentification;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (BOOL)isPhoneNumber:(id)a0 equivalentToExistingPhoneNumber:(id)a1;

- (void)subscriptionInfoDidChange;
- (void)carrierBundleChange:(id)a0;
- (id)contextForSim:(id)a0;
- (id)_unlocked_currentSIMsWithError:(id *)a0;
- (void)systemApplicationDidBecomeActive;
- (void).cxx_destruct;
- (void)_unlocked_iterateListenersForSelector:(SEL)a0 block:(id /* block */)a1;
- (void)dealloc;
- (void)removeListener:(id)a0;
- (void)addListener:(id)a0;
- (BOOL)isPhoneNumberEmergencyNumber:(id)a0;
- (id)CTPNRForSIM:(id)a0;
- (void)pnrReadyStateNotification:(id)a0 regState:(BOOL)a1;
- (void)operatorBundleChange:(id)a0;
- (void)phoneNumberChanged:(id)a0;
- (id)initWithCoreTelephonyClient:(id)a0 systemMonitor:(id)a1;
- (id)SIMForIdentifier:(id)a0;
- (void)context:(id)a0 pnrSupportChanged:(BOOL)a1;
- (void)_locked_accessCache:(id /* block */)a0;
- (void)SIMStatusDidChange:(id)a0 status:(id)a1;
- (id)carrierBundleValueFromAllSIMsForKey:(id)a0 ofType:(Class)a1 withFallback:(id)a2;
- (void)_checkRegistrationStateForContext:(id)a0;
- (BOOL)_legacy_supportsSMSIdentification;
- (void)dualSimCapabilityDidChange;
- (id)currentSIMsWithError:(id *)a0;
- (id)carrierBundleValueFromSIM:(id)a0 forKey:(id)a1 ofType:(Class)a2 withFallback:(id)a3;
- (void)_iterateListenersForSelector:(SEL)a0 block:(id /* block */)a1;
- (BOOL)isPNRNumber:(id)a0 andPhoneBookNumber:(id)a1 differentEnoughFromSIMIdentifier:(id)a2 toReregisterWithNewNumber:(id *)a3;

@end
