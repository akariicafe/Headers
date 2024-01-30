@class NSString, HMDCharacteristic, HMFTimer;

@interface HMDAccessoryFirmwareUpdateCharacteristicBasedPolicy : HMDAccessoryFirmwareUpdatePolicy <HMFTimerDelegate>

@property (readonly) NSString *serviceType;
@property (readonly) NSString *characteristicType;
@property (readonly) HMDCharacteristic *characteristic;
@property (readonly) id /* block */ policyHandler;
@property (retain, nonatomic) HMFTimer *debounceTimer;
@property (readonly) unsigned long long debounceDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)configure;
- (void)timerDidFire:(id)a0;
- (BOOL)evaluate;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void)registerForNotifications;
- (void).cxx_destruct;
- (BOOL)_policyStatusFromCharacteristic:(id)a0;
- (void)_startDebounceTimer;
- (void)_stopDebounceTimer;
- (void)handleCharacteristicValuesChanged:(id)a0;
- (id)initWithAccessory:(id)a0 serviceType:(id)a1 characteristicType:(id)a2 debounceDuration:(unsigned long long)a3 policyHandler:(id /* block */)a4 workQueue:(id)a5;

@end
