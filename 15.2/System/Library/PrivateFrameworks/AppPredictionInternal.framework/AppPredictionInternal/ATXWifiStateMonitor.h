@class NSString, NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface ATXWifiStateMonitor : NSObject {
    struct __WiFiManagerClient { } *_manager;
    struct __WiFiDeviceClient { } *_device;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_lastSeenSSID;
    NSDate *_lastSeenDate;
    BOOL _isActive;
}

@property (readonly, nonatomic) NSString *SSID;

+ (id)sharedInstance;

- (void)_start;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
