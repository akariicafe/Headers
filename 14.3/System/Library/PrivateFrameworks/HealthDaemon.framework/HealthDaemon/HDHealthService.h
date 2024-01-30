@class NSUUID, NSString, HDDeviceEntity, NSMutableDictionary, NSMutableArray, HDProfile, NSObject, HDHealthServiceManager, HDHealthPeripheral;
@protocol OS_dispatch_queue;

@interface HDHealthService : NSObject <HDHSCharacteristicsDelegate> {
    NSObject<OS_dispatch_queue> *_dataQueue;
    NSMutableArray *_pendingCharacteristicBuffer;
    HDDeviceEntity *_deviceEntity;
    _Atomic BOOL _deviceInformationLoaded;
}

@property (retain, nonatomic) HDHealthServiceManager *serviceManager;
@property (retain, nonatomic) NSMutableDictionary *writableCharacteristics;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *writeQueue;
@property (retain, nonatomic) NSMutableArray *pendingWrites;
@property (weak, nonatomic) HDProfile *profile;
@property (readonly, weak, nonatomic) HDHealthPeripheral *healthPeripheral;
@property (readonly, nonatomic) NSUUID *peripheralUUID;
@property BOOL deliverData;
@property (retain, nonatomic) NSString *serviceId;
@property (readonly, nonatomic) BOOL characteristicsDiscovered;

+ (id)serviceUUID;
+ (long long)serviceType;
+ (id)implementedProperties;

- (void).cxx_destruct;
- (id)description;
- (void)peripheral:(id)a0 didWriteValueForCharacteristic:(id)a1 error:(id)a2;
- (id)initWithServiceManager:(id)a0 peripheral:(id)a1 advertisementData:(id)a2 profile:(id)a3;
- (void)readProperty:(id)a0;
- (void)peripheral:(id)a0 didDiscoverCharacteristic:(id)a1;
- (void)peripheral:(id)a0 didUpdateValueForCharacteristic:(id)a1 updateTime:(id)a2 error:(id)a3;
- (void)characteristicDataReceived:(id)a0;
- (id)servicesInProfile;
- (BOOL)processAdvertisementData:(id)a0;
- (void)deviceDisconnecting;
- (BOOL)supportsOperation:(id)a0;
- (void)performOperation:(id)a0 onPeripheral:(id)a1 withParameters:(id)a2 completion:(id /* block */)a3;
- (BOOL)supportsWritingCharacteristic:(id)a0;
- (void)writeCharacteristic:(id)a0 expectResponse:(BOOL)a1 completion:(id /* block */)a2;
- (void)deviceInformationSetOnPeripheral;
- (void)peripheral:(id)a0 didDiscoverCharacteristics:(id)a1;
- (void)setWritableCharacteristic:(id)a0;
- (BOOL)_shouldNotifyReceivedData;
- (void)_dataQueue_notifyCharacteristic:(id)a0;
- (void)_bufferCharacteristicToBeNotified:(id)a0;
- (void)executeFirstWrite;
- (void)respondFirstWriteWithData:(id)a0 error:(id)a1;
- (void)markCharacteristicsDiscovered;
- (void)_dataQueue_deliverDataIfPossible;
- (id)_dataQueue_deviceEntity;
- (void)mfaSucceededOnPeripheral;

@end
