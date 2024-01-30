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

- (id)init;
- (void).cxx_destruct;
- (void)stopUpdatingMotionType:(long long)a0 forDelegate:(id)a1;
- (id)getCurrentActivity;
- (id /* block */)_motionActivityHandler;
- (id)_fetchMotionActivities;
- (void)updateCurrentActivity:(id)a0;
- (void)startUpdatingMotionType:(long long)a0 forDelegate:(id)a1;

@end
