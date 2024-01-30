@class RBSProcessMonitor;

@interface MKApplicationStateMonitor : NSObject {
    RBSProcessMonitor *_processMonitor;
    BOOL _isVisible;
    unsigned long long _observerCount;
}

@property (nonatomic) BOOL forceRunningBoardServicesMonitoring;
@property (readonly, nonatomic, getter=isInBackground) BOOL inBackground;
@property (readonly, nonatomic, getter=isActive) BOOL active;

+ (id)sharedInstance;

- (void)stopObserving;
- (void)startObserving;
- (void)_handleApplicationStateChangeForMonitor:(id)a0 handle:(id)a1 update:(id)a2 interestedPid:(int)a3;
- (void)_exitBackground;
- (BOOL)_applicationStateIsForegroundForTaskState:(unsigned char)a0;
- (id)_stringForTaskState:(unsigned char)a0;
- (void)_resignActive;
- (void)_setupProcessMonitorWithIdentifier:(id)a0 interestedPid:(int)a1;
- (void)dealloc;
- (void)_enterBackground;
- (id)init;
- (void)_becomeActive;
- (void)_performSynchronouslyOnMainQueue:(id /* block */)a0;
- (void).cxx_destruct;

@end
