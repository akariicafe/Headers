@class FBSDisplayLayoutMonitor, BKSApplicationStateMonitor, NSObject;
@protocol OS_dispatch_queue, NWAppStateEventListenerDelegate;

@interface NWAppEventListener : NSObject {
    BKSApplicationStateMonitor *appStateMonitor;
    FBSDisplayLayoutMonitor *displayLayoutMonitor;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<NWAppStateEventListenerDelegate> appStateDelegate;

- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_handleApplicationNotificationStateChangedForDisplayName:(id)a0 UUID:(id)a1 pid:(int)a2 state:(unsigned int)a3;
- (void)_applicationStateMonitorInit;

@end
