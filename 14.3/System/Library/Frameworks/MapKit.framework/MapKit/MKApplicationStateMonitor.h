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
- (void)_resignActive;
- (void).cxx_destruct;
- (void)_becomeActive;
- (void)dealloc;
- (void)startObserving;
- (void)_enterBackground;
- (void)_exitBackground;
- (void)_handleApplicationStateChange:(id)a0 interestedPID:(int)a1;
- (void)_performSynchronouslyOnMainQueue:(id /* block */)a0;

@end
