@class NSObject;
@protocol OS_dispatch_queue;

@interface CSSACInfoMonitor : CSEventMonitor {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isDeviceRoleStereo;
}

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isDeviceRoleStereo;

@end
