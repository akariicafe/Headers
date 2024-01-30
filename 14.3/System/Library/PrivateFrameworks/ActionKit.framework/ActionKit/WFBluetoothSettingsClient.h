@class BluetoothManager, NSMutableDictionary, NSString;

@interface WFBluetoothSettingsClient : WFSettingsClient <WFBooleanStateSetting>

@property (readonly, nonatomic) BluetoothManager *manager;
@property (copy, nonatomic) id /* block */ availabilityCompletion;
@property (readonly, nonatomic) NSMutableDictionary *observeBlocksPerDeviceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)createClientWithCompletionHandler:(id /* block */)a0;

- (void)registerForNotifications;
- (void).cxx_destruct;
- (void)dealloc;
- (void)getStateWithCompletionHandler:(id /* block */)a0;
- (void)setState:(BOOL)a0 completionHandler:(id /* block */)a1;
- (id)initWithBluetoothManager:(id)a0;
- (void)waitForAvailabilityWithCompletionHandler:(id /* block */)a0;
- (void)getPairedDevicesMatchingType:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)observePairedDevicesMatchingType:(unsigned long long)a0 update:(id /* block */)a1;
- (void)devicesChanged:(id)a0;
- (void)availabilityChanged:(id)a0;

@end
