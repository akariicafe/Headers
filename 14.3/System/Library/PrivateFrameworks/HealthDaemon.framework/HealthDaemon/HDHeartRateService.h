@interface HDHeartRateService : HDHealthService {
    BOOL _deliverData;
}

@property (nonatomic) long long preferredSensorLocation;

+ (id)serviceUUID;
+ (long long)serviceType;

- (id)initWithServiceManager:(id)a0 peripheral:(id)a1 advertisementData:(id)a2 profile:(id)a3;
- (void)peripheral:(id)a0 didDiscoverCharacteristic:(id)a1;
- (void)peripheral:(id)a0 didUpdateValueForCharacteristic:(id)a1 updateTime:(id)a2 error:(id)a3;
- (BOOL)supportsOperation:(id)a0;
- (void)performOperation:(id)a0 onPeripheral:(id)a1 withParameters:(id)a2 completion:(id /* block */)a3;
- (void)resetEnergyExpendedOnPeripheral:(id)a0 completion:(id /* block */)a1;
- (BOOL)deliverData;
- (void)handleHeartRate:(id)a0;
- (void)handleBodyLocation:(id)a0;
- (void)setDeliverData:(BOOL)a0;

@end
