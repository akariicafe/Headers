@class AFBluetoothHeadphoneInEarDetectionState, NSString, NSUUID, NSHashTable, CSSiriMobileBluetoothDeviceDataSource, NSObject, AFBluetoothDeviceInfo;
@protocol OS_dispatch_queue;

@interface CSSiriMobileBluetoothDeviceProxy : NSObject <AFBluetoothDevice, AFInvalidating> {
    NSObject<OS_dispatch_queue> *_queue;
    CSSiriMobileBluetoothDeviceDataSource *_dataSource;
    NSHashTable *_observers;
    AFBluetoothDeviceInfo *_deviceInfo;
    AFBluetoothHeadphoneInEarDetectionState *_headphoneInEarDetectionState;
    long long _headphoneListeningMode;
}

@property (readonly, copy, nonatomic) NSString *address;
@property (readonly, copy, nonatomic) NSUUID *deviceUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prewarm;
- (id)deviceInfo;
- (id)identifier;
- (void)reload;
- (void)disconnect:(id /* block */)a0;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)_invalidate;
- (void)connect:(id /* block */)a0;
- (void)getDeviceInfo:(id /* block */)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;
- (void)_reload:(BOOL)a0;
- (void)_enumerateObserversUsingBlock:(id /* block */)a0;
- (id)initWithAddress:(id)a0 dataSource:(id)a1 queue:(id)a2;
- (id)initWithDeviceUID:(id)a0 dataSource:(id)a1 queue:(id)a2;
- (void)_updateDeviceInfo:(id)a0;
- (void)_fetchDeviceInfoWithCompletion:(id /* block */)a0;
- (void)_getDeviceInfo:(id /* block */)a0;
- (void)_accessBTDeviceAndAccessoryManagerUsingBlock:(id /* block */)a0;
- (void)getHeadphoneInEarDetectionState:(id /* block */)a0;
- (void)getHeadphoneListeningMode:(id /* block */)a0;
- (void)setHeadphoneListeningMode:(long long)a0 completion:(id /* block */)a1;
- (void)updateDeviceInfo:(id)a0;

@end
