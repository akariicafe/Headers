@class NSArray, WFBluetoothSettingsClient;

@interface WFListeningModeDeviceAccessResource : WFAccessResource

@property (readonly, nonatomic) WFBluetoothSettingsClient *bluetoothClient;
@property (readonly, nonatomic) NSArray *supportedDevices;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } supportedDevicesLock;
@property (copy, nonatomic) id /* block */ availabilityCompletion;

+ (BOOL)isSingleton;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (unsigned long long)globalLevelStatus;
- (void)makeAvailableAtGlobalLevelWithUserInterface:(id)a0 completionHandler:(id /* block */)a1;
- (unsigned long long)workflowLevelStatus;
- (id)localizedErrorReasonForGlobalLevelStatus:(unsigned long long)a0;
- (id)localizedImportErrorReasonForGlobalLevelStatus:(unsigned long long)a0;
- (id)unavailableAccessResourceError;
- (id)localizedAccessResourceErrorString;
- (void)makeSettingsClientIfNecessary;
- (BOOL)supportedDevicesAreFetched;

@end
