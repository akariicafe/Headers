@class _PASLock, NSMutableDictionary, NSOperationQueue, CMMotionActivityManager, CMMotionActivity;

@interface ATXMotionManagerWrapper : NSObject {
    CMMotionActivityManager *_motionActivityManager;
    NSOperationQueue *_motionActivityQueue;
    NSMutableDictionary *_delegatesMonitoringForMotionType;
    CMMotionActivity *_mostRecentActivity;
    _PASLock *_currentMotion;
}

+ (id)sharedInstance;
+ (BOOL)hasMotionActivity;

- (id)getCurrentActivity;
- (void)stopUpdatingMotionType:(long long)a0 forDelegate:(id)a1;
- (void)startUpdatingMotionType:(long long)a0 forDelegate:(id)a1;
- (id)_fetchMotionActivities;
- (id)init;
- (void)updateCurrentActivity:(id)a0;
- (id /* block */)_motionActivityHandler;
- (void).cxx_destruct;

@end
