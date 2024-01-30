@class NSObject;
@protocol OS_dispatch_queue;

@interface CSSACInfoMonitor : CSEventMonitor {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isDeviceRoleStereo;
}

+ (id)sharedInstance;

- (void)_startMonitoringWithQueue:(id)a0;
- (void)_stopMonitoring;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isDeviceRoleStereo;

@end
