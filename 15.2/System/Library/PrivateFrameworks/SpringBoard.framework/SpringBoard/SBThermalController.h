@class SBSecurityDefaults, NSString, NSUUID, NSHashTable, SBThermalDefaults, SBExternalWifiDefaults;

@interface SBThermalController : NSObject <SBFThermalBlockProvider> {
    NSUUID *_samplingToken;
    int _hotToken;
    unsigned long long _hotLevel;
    int _coldToken;
    unsigned long long _coldLevel;
    int _sunToken;
    unsigned long long _sunLevel;
    NSHashTable *_observers;
    SBExternalWifiDefaults *_networkDefaults;
    SBThermalDefaults *_thermalDefaults;
    SBSecurityDefaults *_securityDefaults;
}

@property (readonly, nonatomic) long long level;
@property (readonly, nonatomic, getter=isInSunlight) BOOL inSunlight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)logThermalEvent:(id)a0;

- (BOOL)isThermalBlocked;
- (void)startListeningForThermalEvents;
- (void)addThermalObserver:(id)a0;
- (void)_respondToCurrentThermalCondition;
- (void).cxx_destruct;
- (id)init;
- (void)removeThermalObserver:(id)a0;
- (BOOL)_isBlocked;
- (void)_updateThermalJetsamCPUSamplingState;
- (void)dealloc;
- (void)_setBlocked:(BOOL)a0;

@end
