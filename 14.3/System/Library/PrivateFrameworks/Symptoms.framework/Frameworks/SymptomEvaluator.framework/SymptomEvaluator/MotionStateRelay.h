@class CMMotionActivityManager, NSOperationQueue, NSObject;
@protocol OS_dispatch_queue;

@interface MotionStateRelay : NSObject {
    NSObject<OS_dispatch_queue> *_alarmQueue;
    BOOL _isMoving;
    CMMotionActivityManager *_activityManager;
    NSOperationQueue *_alarmOperationQueue;
}

@property (readonly, nonatomic) unsigned int currentMotion;
@property (readonly, nonatomic) BOOL isStationary;

+ (id)sharedInstance;
+ (BOOL)automaticallyNotifiesObserversOfIsStationary;
+ (BOOL)automaticallyNotifiesObserversOfCurrentMotion;

- (void)transitionToState:(unsigned int)a0;
- (void)subscribe;
- (void)initializeEngine;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)startMotionMonitoring;
- (id)motionStateString:(unsigned int)a0;
- (void)stopActivityUpdates;
- (void)unsubscribe;
- (BOOL)isMoving;
- (void)destroyEngine;
- (void)stopMotionMonitoring;
- (void)startActivityUpdates;

@end
