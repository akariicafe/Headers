@interface AKPeripheralAvailabilityManager_iOS : NSObject {
    struct __IOHIDManager { } *stylusHidManager;
}

@property (class, readonly) BOOL onlyDrawWithApplePencil;

@property unsigned long long currentAvailability;

- (void)teardown;
- (id)init;
- (void)dealloc;
- (void)stopMonitoringForPeripheralConnection;
- (void)postConnectionStatusNotification;
- (void)startMonitoringForPeripheralConnection;

@end
