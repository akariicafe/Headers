@class NSString, HMFTimer, HMDHAPAccessory;

@interface HMDAccessoryFirmwareUpdateCharacteristicBasedPolicy : HMDAccessoryFirmwareUpdatePolicy <HMFLogging, HMFTimerDelegate>

@property (readonly, weak) HMDHAPAccessory *accessory;
@property (readonly) NSString *serviceType;
@property (readonly) NSString *characteristicType;
@property (readonly) id /* block */ policyHandler;
@property (retain, nonatomic) HMFTimer *debounceTimer;
@property (readonly) unsigned long long debounceDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)configure;
- (void)registerForNotifications;
- (void).cxx_destruct;
- (BOOL)evaluate;
- (void)timerDidFire:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)handleCharacteristicValuesChanged:(id)a0;
- (void)_startDebounceTimer;
- (BOOL)_policyStatusFromCharacteristic:(id)a0;
- (void)_stopDebounceTimer;
- (id)initWithAccessory:(id)a0 serviceType:(id)a1 characteristicType:(id)a2 debounceDuration:(unsigned long long)a3 policyHandler:(id /* block */)a4 workQueue:(id)a5;

@end
