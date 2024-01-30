@class BKSApplicationStateMonitor, SLGNotificationActivatedLogger;

@interface SBCameraHardwareButtonStudyLogger : NSObject {
    BKSApplicationStateMonitor *_processMonitor;
    SLGNotificationActivatedLogger *_logger;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)logButtonEvent:(struct __IOHIDEvent { } *)a0;
- (void)logPocketState:(long long)a0;
- (void)_startProcessMonitor;
- (void)_stopProcessMonitor;

@end
