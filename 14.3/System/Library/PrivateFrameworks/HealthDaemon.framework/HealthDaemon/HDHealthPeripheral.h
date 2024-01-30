@class NSUUID, NSString, HKDevice, NSMutableDictionary, HDProfile, NSObject, CBPeripheral, HDHealthServiceManager;
@protocol OS_dispatch_queue;

@interface HDHealthPeripheral : NSObject <CBPeripheralDelegate> {
    BOOL _privateMode;
}

@property (retain, nonatomic) NSMutableDictionary *healthServices;
@property (weak, nonatomic) HDHealthServiceManager *serviceManager;
@property (weak, nonatomic) HDProfile *profile;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *servicesQueue;
@property (nonatomic) BOOL discoveredServices;
@property (retain, nonatomic) NSMutableDictionary *serviceForProperty;
@property (retain, nonatomic) NSMutableDictionary *propertiesAwaiting;
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

- (void)_queue_setDeviceInformation:(id)a0;
- (void).cxx_destruct;
- (void)peripheral:(id)a0 didModifyServices:(id)a1;
- (void)peripheral:(id)a0 didReadRSSI:(id)a1 error:(id)a2;
- (void)peripheral:(id)a0 didDiscoverServices:(id)a1;
- (void)peripheral:(id)a0 didDiscoverCharacteristicsForService:(id)a1 error:(id)a2;
- (void)peripheral:(id)a0 didUpdateValueForCharacteristic:(id)a1 error:(id)a2;
- (void)peripheral:(id)a0 didWriteValueForCharacteristic:(id)a1 error:(id)a2;
- (void)peripheral:(id)a0 didUpdateNotificationStateForCharacteristic:(id)a1 error:(id)a2;
- (void)service:(id)a0 didReadProperty:(id)a1 value:(id)a2 error:(id)a3;
- (void)_queue_respond:(id)a0 forProperty:(id)a1 withError:(id)a2;
- (void)writeCharacteristic:(id)a0 expectResponse:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)_queue_addPropertyHandler:(id /* block */)a0 forProperty:(id)a1;
- (void)_queue_startReadProperty:(id)a0;
- (id)initWithCBPeripheral:(id)a0 name:(id)a1 serviceManager:(id)a2 profile:(id)a3;
- (BOOL)updateCBPeripheral:(id)a0;
- (void)discoverServices;
- (void)addHealthService:(id)a0;
- (BOOL)hasServiceWithUUID:(id)a0;
- (id)healthServiceForType:(long long)a0;
- (void)disconnectServices;
- (void)performOperation:(id)a0 withParameters:(id)a1 completion:(id /* block */)a2;
- (void)getProperty:(id)a0 withHandler:(id /* block */)a1;

@end
