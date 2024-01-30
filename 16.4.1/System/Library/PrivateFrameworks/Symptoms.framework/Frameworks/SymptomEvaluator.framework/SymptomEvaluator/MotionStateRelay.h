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
+ (BOOL)automaticallyNotifiesObserversOfCurrentMotion;
+ (BOOL)automaticallyNotifiesObserversOfIsStationary;

- (BOOL)isMoving;
- (void)stopActivityUpdates;
- (void)startActivityUpdates;
- (void)initializeEngine;
- (void)transitionToState:(unsigned int)a0;
- (void)unsubscribe;
- (void)startMotionMonitoring;
- (id)deviceOrientationString:(int)a0;
- (id)motionStateString:(unsigned int)a0;
- (void)dealloc;
- (void)subscribe;
- (void)setdeviceOrientation:(int)a0;
- (id)init;
- (void)destroyEngine;
- (void)stopMotionMonitoring;
- (void).cxx_destruct;

@end
