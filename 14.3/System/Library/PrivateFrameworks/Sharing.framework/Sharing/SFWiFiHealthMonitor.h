@class CURetrier, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SFWiFiHealthMonitor : NSObject {
    BOOL _invalidateCalled;
    int _lockdownActivated;
    int _lockdownActivationNotifyToken;
    struct __WiFiDeviceClient { } *_wifiDevice;
    BOOL _wifiDeviceSetup;
    struct __WiFiManagerClient { } *_wifiManager;
    BOOL _wifiManagerSetup;
    CURetrier *_wifiRetrier;
    unsigned long long _wifiStatusBadTicks;
    unsigned long long _wifiStatusGoodTicks;
    double _wifiStatusDebounceSecs;
    NSObject<OS_dispatch_source> *_wifiStatusDebounceTimer;
    long long _wifiStatusExternal;
    long long _wifiStatusInternal;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) id /* block */ statusHandler;

- (void)_wifiEnsureStopped;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)_wifiAutoJoinNotification:(id)a0;
- (void)_activate;
- (id)description;
- (void)activate;
- (void)_update;
- (void)_invalidate;
- (void)_wifiEnsureStarted;
- (void)invalidate;
- (void)_wifiStatusChangedInternal:(long long)a0;
- (void)_wifiStatusChangedExternal:(long long)a0;

@end
