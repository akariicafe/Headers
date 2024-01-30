@class NSMutableArray;

@interface USBCableTypeMonitor : NSObject {
    unsigned long long _uid;
    NSMutableArray *_registeredUUIDs;
    struct IONotificationPort { } *_ioUSB30XHCIRemovablePortNotifyPort;
    unsigned int _ioUSB30XHCIRemovablePortNotification;
    unsigned int _ioUSB30XHCIRemovablePortService;
    unsigned int _ioUSB30XHCIRemovablePortMatchIterator;
    unsigned int _ioUSB30XHCIRemovablePortTerminateIterator;
}

+ (id)sharedMonitor;
+ (int)usbCableType;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)stopCableTypeMonitoringForUUID:(id)a0;
- (void)cleanupUSB30XHCIRemovablePortNotifications;
- (void)initUSB30XHCIRemovablePortNotifications;
- (void)sendUSBCableTypeChangedNotification;
- (void)startCableTypeMonitoringForUUID:(id)a0;

@end
