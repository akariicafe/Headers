@class BKSApplicationStateMonitor;

@interface MKApplicationStateMonitor : NSObject {
    BKSApplicationStateMonitor *_appStateMonitor;
    unsigned long long _observerCount;
}

@property (nonatomic) BOOL forceBackboardServicesMonitoring;
@property (readonly, nonatomic, getter=isInBackground) BOOL inBackground;
@property (readonly, nonatomic, getter=isActive) BOOL active;

+ (id)sharedInstance;

- (void)stopObserving;
- (void)startObserving;
- (void)_exitBackground;
- (void)_becomeActive;
- (void)_resignActive;
- (void)_performSynchronouslyOnMainQueue:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_enterBackground;
- (void)_handleApplicationStateChange:(id)a0 interestedPID:(int)a1;

@end
