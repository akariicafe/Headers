@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_source;

@interface SCROBrailleDisplayAutoDetector : NSObject {
    BOOL _isDetectingDisplays;
    struct IONotificationPort { } *_notificationPort;
    NSMutableDictionary *_iteratorDict;
    NSObject<OS_dispatch_source> *_serialSource;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;
+ (id)sharedDetector;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_driverBundleIdentifiers;
- (void)_autodetectIOServices:(id)a0;
- (void)_initializeAutodetectSerialPorts:(id)a0;
- (BOOL)_serialDataMatchesDriver:(id)a0 driverBundleIdentifiers:(id)a1 fileDescriptor:(int)a2;
- (void)serialPortsWerePublished:(unsigned int)a0;
- (void)_detectSerialPorts:(id)a0;
- (id)_serialPortMatchingDictionary;
- (void)_registerForSerialPortNotifications;
- (void)_openSerialPortService:(id)a0 sortedDriverBundleIdentifiers:(id)a1;
- (BOOL)isAutoDetectEnabled;
- (void)detectDisplays;
- (void)stopDetectingDisplays;

@end
