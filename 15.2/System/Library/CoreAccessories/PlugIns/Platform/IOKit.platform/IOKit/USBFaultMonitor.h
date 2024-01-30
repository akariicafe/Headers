@class NSMutableDictionary, NSMutableArray;

@interface USBFaultMonitor : NSObject {
    NSMutableDictionary *_usbFaultStates;
    NSMutableDictionary *_usbFaultStatesSent;
    NSMutableDictionary *_requestedUSBFaultNotifications;
    struct IONotificationPort { } *_ioUSBCardReaderNotifyPort;
    unsigned int _ioUSBCardReaderNotification;
    unsigned int _ioUSBCardReaderService;
    unsigned int _ioUSBCardReaderMatchIterator;
    unsigned int _ioUSBCardReaderTerminateIterator;
    unsigned long long _uid;
    NSMutableArray *_registeredUUIDs;
}

+ (id)sharedMonitor;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)startFaultMonitoringForUUID:(id)a0;
- (void)stopFaultMonitoringForUUID:(id)a0;
- (BOOL)getFaultState:(int)a0;
- (void)registerFaultInterest:(int)a0;
- (void)initFaultConditionNotifications;
- (void)setFaultState:(int)a0 flag:(BOOL)a1;
- (void)sendUSBFaultNotification;
- (void)checkUSBCardReaderProperty:(unsigned int)a0;

@end
