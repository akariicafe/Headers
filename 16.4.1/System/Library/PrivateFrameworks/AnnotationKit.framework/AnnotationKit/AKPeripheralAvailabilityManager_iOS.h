@interface AKPeripheralAvailabilityManager_iOS : NSObject {
    struct __IOHIDManager { } *stylusHidManager;
}

@property (class, readonly) BOOL onlyDrawWithApplePencil;

@property unsigned long long currentAvailability;

- (void)dealloc;
- (void)teardown;
- (id)init;
- (void)postConnectionStatusNotification;
- (void)startMonitoringForPeripheralConnection;
- (void)stopMonitoringForPeripheralConnection;

@end
