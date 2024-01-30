@class NSUUID, NSString, HKDevice, NSMutableDictionary, HDProfile, NSObject, CBPeripheral, HDHealthServiceManager;
@protocol OS_dispatch_queue;

@interface HDHealthPeripheral : NSObject <CBPeripheralDelegate> {
    BOOL _privateMode;
    BOOL _discoveredServices;
    NSMutableDictionary *_healthServices;
    HDHealthServiceManager *_serviceManager;
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_servicesQueue;
    NSMutableDictionary *_serviceForProperty;
    NSMutableDictionary *_propertiesAwaiting;
}

@property (readonly, nonatomic) CBPeripheral *cbPeripheral;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly) long long state;
@property (readonly) NSString *stateDescription;
@property (readonly) NSString *name;
@property (readonly, nonatomic) HKDevice *deviceInformation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)implementedProperties;

- (void).cxx_destruct;
- (void)peripheral:(id)a0 didDiscoverServices:(id)a1;
- (void)peripheral:(id)a0 didDiscoverCharacteristicsForService:(id)a1 error:(id)a2;
- (void)peripheral:(id)a0 didModifyServices:(id)a1;
- (void)peripheral:(id)a0 didReadRSSI:(id)a1 error:(id)a2;
- (void)peripheral:(id)a0 didUpdateNotificationStateForCharacteristic:(id)a1 error:(id)a2;
- (void)peripheral:(id)a0 didUpdateValueForCharacteristic:(id)a1 error:(id)a2;
- (void)peripheral:(id)a0 didWriteValueForCharacteristic:(id)a1 error:(id)a2;
- (void)addHealthService:(id)a0;
- (void)disconnectServices;
- (void)discoverServices;
- (void)getProperty:(id)a0 withHandler:(id /* block */)a1;
- (BOOL)hasServiceWithUUID:(id)a0;
- (id)healthServiceForType:(long long)a0;
- (id)initWithCBPeripheral:(id)a0 name:(id)a1 serviceManager:(id)a2 profile:(id)a3;
- (void)performOperation:(id)a0 withParameters:(id)a1 completion:(id /* block */)a2;
- (void)service:(id)a0 didReadProperty:(id)a1 value:(id)a2 error:(id)a3;
- (BOOL)updateCBPeripheral:(id)a0;
- (void)writeCharacteristic:(id)a0 expectResponse:(BOOL)a1 completion:(id /* block */)a2;

@end
