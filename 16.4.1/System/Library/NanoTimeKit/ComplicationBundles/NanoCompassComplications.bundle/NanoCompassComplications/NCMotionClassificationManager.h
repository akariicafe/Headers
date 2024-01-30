@class CMMotionActivityManager, NSArray, CMPedometer;

@interface NCMotionClassificationManager : NSObject {
    CMMotionActivityManager *_motionActivityManager;
    CMPedometer *_pedometer;
    NSArray *_motionEventQueue;
    id /* block */ _motionClassificationHandler;
}

@property (readonly, nonatomic) long long motionType;
@property (readonly, nonatomic, getter=isStationary) BOOL stationary;

- (id)init;
- (void).cxx_destruct;
- (void)_computeStatus;
- (void)_housekeepingWith:(id)a0;
- (void)_startMotionActivityUpdate;
- (void)_updateMotionActivity:(id)a0;
- (void)_updateMotionType:(long long)a0 isDeviceStationary:(BOOL)a1;
- (void)_updateStatusFromPedometer;
- (void)startMotionActivityUpdatesWithHandler:(id /* block */)a0;
- (void)stopMotionActivityUpdates;

@end
