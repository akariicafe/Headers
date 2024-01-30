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

- (void)applicationDidActivate:(id)a0;
- (void)applicationWillDeactivate:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
