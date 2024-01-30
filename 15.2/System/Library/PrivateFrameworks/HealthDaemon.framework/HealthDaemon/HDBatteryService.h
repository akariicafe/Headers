@class CBCharacteristic;

@interface HDBatteryService : HDHealthService {
    CBCharacteristic *_batteryCharacteristic;
}

+ (id)serviceUUID;
+ (long long)serviceType;
+ (id)implementedProperties;

- (void).cxx_destruct;
- (void)readProperty:(id)a0;
- (void)peripheral:(id)a0 didDiscoverCharacteristic:(id)a1;
- (void)peripheral:(id)a0 didUpdateValueForCharacteristic:(id)a1 updateTime:(id)a2 error:(id)a3;

@end
