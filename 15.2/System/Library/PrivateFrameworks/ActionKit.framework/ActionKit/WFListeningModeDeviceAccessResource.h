@class NSArray, WFBluetoothSettingsClient;

@interface WFListeningModeDeviceAccessResource : WFAccessResource

@property (readonly, nonatomic) WFBluetoothSettingsClient *bluetoothClient;
@property (readonly, nonatomic) NSArray *supportedDevices;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } supportedDevicesLock;
@property (copy, nonatomic) id /* block */ availabilityCompletion;

+ (BOOL)isSingleton;

- (unsigned long long)status;
- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (void)makeAvailableWithUserInterface:(id)a0 completionHandler:(id /* block */)a1;
- (id)localizedErrorReasonForStatus:(unsigned long long)a0;
- (id)localizedImportErrorReasonForStatus:(unsigned long long)a0;
- (id)unavailableAccessResourceError;
- (id)localizedAccessResourceErrorString;
- (void)makeSettingsClientIfNecessary;
- (BOOL)supportedDevicesAreFetched;

@end
