@class BKSApplicationStateMonitor, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, PLForegroundMonitorDelegate;

@interface PLForegroundMonitor : NSObject {
    NSMutableSet *_foregroundBundleIDs;
    NSObject<OS_dispatch_queue> *_applicationStateMonitorQueue;
    BKSApplicationStateMonitor *_applicationStateMonitor;
}

@property (weak, nonatomic) id<PLForegroundMonitorDelegate> delegate;

- (void)_applicationChangeToFG:(id)a0;
- (void)_applicationChangeToBG:(id)a0;
- (void).cxx_destruct;
- (void)_locked_applicationDidMoveToBackground:(id)a0;
- (id)init;
- (void)_handleApplicationStateMonitorNotificationWithUserInfo:(id)a0;
- (void)_locked_applicationDidMoveToForeground:(id)a0;
- (void)dealloc;

@end
