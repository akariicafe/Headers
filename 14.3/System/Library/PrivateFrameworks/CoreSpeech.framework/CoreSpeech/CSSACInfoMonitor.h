@class NSObject;
@protocol OS_dispatch_queue;

@interface CSSACInfoMonitor : CSEventMonitor {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isDeviceRoleStereo;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (BOOL)isDeviceRoleStereo;

@end
