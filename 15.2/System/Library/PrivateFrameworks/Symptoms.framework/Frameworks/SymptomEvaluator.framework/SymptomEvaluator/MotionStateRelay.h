@class CMMotionActivityManager, NSOperationQueue, NSObject;
@protocol OS_dispatch_queue;

@interface MotionStateRelay : NSObject {
    int deviceOrientationStateToken;
    NSObject<OS_dispatch_queue> *_alarmQueue;
    BOOL _isMoving;
    CMMotionActivityManager *_activityManager;
    NSOperationQueue *_alarmOperationQueue;
}

@property (nonatomic) int deviceOrientation;
@property (readonly, nonatomic) unsigned int currentMotion;
@property (readonly, nonatomic) BOOL isStationary;

+ (id)sharedInstance;
+ (BOOL)automaticallyNotifiesObserversOfIsStationary;
+ (BOOL)automaticallyNotifiesObserversOfCurrentMotion;

- (void)transitionToState:(unsigned int)a0;
- (void)stopActivityUpdates;
- (void)stopMotionMonitoring;
- (void)setdeviceOrientation:(int)a0;
- (void)startActivityUpdates;
- (void).cxx_destruct;
- (void)unsubscribe;
- (id)init;
- (void)destroyEngine;
- (void)subscribe;
- (id)motionStateString:(unsigned int)a0;
- (void)startMotionMonitoring;
- (BOOL)isMoving;
- (void)dealloc;
- (void)initializeEngine;
- (id)deviceOrientationString:(int)a0;

@end
