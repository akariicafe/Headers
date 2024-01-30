@class NSUUID, NSString, HDDeviceEntity, NSMutableDictionary, HDProfile, NSObject, NSMutableArray, HDHealthServiceManager, HDHealthPeripheral;
@protocol OS_dispatch_queue;

@interface HDHealthService : NSObject <HDHSCharacteristicsDelegate> {
    NSObject<OS_dispatch_queue> *_dataQueue;
    NSMutableArray *_pendingCharacteristicBuffer;
    HDDeviceEntity *_deviceEntity;
    _Atomic BOOL _deviceInformationLoaded;
    HDHealthServiceManager *_serviceManager;
    NSMutableDictionary *_writableCharacteristics;
    NSObject<OS_dispatch_queue> *_writeQueue;
    NSMutableArray *_pendingWrites;
}

@property (weak, nonatomic) HDProfile *profile;
@property (readonly, weak, nonatomic) HDHealthPeripheral *healthPeripheral;
@property (readonly, nonatomic) NSUUID *peripheralUUID;
@property BOOL deliverData;
@property (retain, nonatomic) NSString *serviceId;
@property (readonly, nonatomic) BOOL characteristicsDiscovered;

+ (id)serviceUUID;
+ (long long)serviceType;
+ (id)implementedProperties;

- (id)description;
- (void).cxx_destruct;
- (void)peripheral:(id)a0 didWriteValueForCharacteristic:(id)a1 error:(id)a2;
- (void)characteristicDataReceived:(id)a0;
- (void)deviceDisconnecting;
- (void)deviceInformationSetOnPeripheral;
- (id)initWithServiceManager:(id)a0 peripheral:(id)a1 advertisementData:(id)a2 profile:(id)a3;
- (void)mfaSucceededOnPeripheral;
- (void)performOperation:(id)a0 onPeripheral:(id)a1 withParameters:(id)a2 completion:(id /* block */)a3;
- (void)peripheral:(id)a0 didDiscoverCharacteristic:(id)a1;
- (void)peripheral:(id)a0 didDiscoverCharacteristics:(id)a1;
- (void)peripheral:(id)a0 didUpdateValueForCharacteristic:(id)a1 updateTime:(id)a2 error:(id)a3;
- (BOOL)processAdvertisementData:(id)a0;
- (void)readProperty:(id)a0;
- (id)servicesInProfile;
- (void)setWritableCharacteristic:(id)a0;
- (BOOL)supportsOperation:(id)a0;
- (BOOL)supportsWritingCharacteristic:(id)a0;
- (void)writeCharacteristic:(id)a0 expectResponse:(BOOL)a1 completion:(id /* block */)a2;

@end
