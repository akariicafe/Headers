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

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)startCableTypeMonitoringForUUID:(id)a0;
- (void)stopCableTypeMonitoringForUUID:(id)a0;
- (void)initUSB30XHCIRemovablePortNotifications;
- (void)cleanupUSB30XHCIRemovablePortNotifications;
- (void)sendUSBCableTypeChangedNotification;

@end
