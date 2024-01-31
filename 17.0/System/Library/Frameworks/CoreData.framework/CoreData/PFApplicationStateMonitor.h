@class NSObject, PFCloudKitThrottledNotificationObserver;
@protocol PFApplicationStateMonitorDelegate;

@interface PFApplicationStateMonitor : NSObject {
    PFCloudKitThrottledNotificationObserver *_appActivateLifecycleObserver;
    PFCloudKitThrottledNotificationObserver *_appDeactivateLifecycleObserver;
    _Atomic int _transitionCounter;
    long long _backgroundTimeout;
    unsigned long long _applicationState;
    NSObject<PFApplicationStateMonitorDelegate> *_delegate;
}

- (id)init;
- (void)dealloc;
- (void)applicationWillDeactivate:(id)a0;
- (void)applicationDidActivate:(id)a0;
- (void).cxx_destruct;

@end
