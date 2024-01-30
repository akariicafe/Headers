@class NSDictionary, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface PowerUIChargingController : NSObject

@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) int chargingStateNotification;
@property (retain, nonatomic) NSDictionary *stateDescriptions;
@property (nonatomic) unsigned long long currentControllerClientState;
@property (nonatomic) unsigned long long lastChargingStatus;

+ (id)sharedInstance;

- (BOOL)enableCharging;
- (id)readNumberForPreferenceKey:(id)a0;
- (BOOL)disableCharging;
- (void)setNumber:(id)a0 forPreferenceKey:(id)a1;
- (void)resetState;
- (void)overrideLastChargingStatus;
- (BOOL)shouldPriortizeDecisionForClientState:(unsigned long long)a0;
- (BOOL)disableChargingWithClientState:(unsigned long long)a0;
- (BOOL)setChargingStatus:(BOOL)a0;
- (BOOL)enableChargingWithClientState:(unsigned long long)a0;
- (id)init;
- (struct PowerUIControllerChargingStatus { BOOL x0; BOOL x1; })lastChargeStatus;
- (id)status;
- (void).cxx_destruct;

@end
