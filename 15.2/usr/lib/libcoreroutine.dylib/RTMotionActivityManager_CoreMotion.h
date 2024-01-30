@class NSMutableArray, NSMutableDictionary, RTMotionActivity, NSOperationQueue, NSDate, CMMotionActivityManager, NSObject;
@protocol OS_dispatch_source;

@interface RTMotionActivityManager_CoreMotion : RTMotionActivityManager

@property (retain, nonatomic) CMMotionActivityManager *motionActivityManager;
@property (nonatomic) BOOL motionActivityAvailable;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (nonatomic) long long interestedInActivity;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *dominantMotionActivityTimer;
@property (nonatomic) unsigned long long vehicleConnectedState;
@property (retain, nonatomic) NSMutableDictionary *activityAlarms;
@property (retain, nonatomic) NSDate *lastQueryForMotionActivity;
@property (nonatomic) BOOL dominantMotionActivityBootstrapped;
@property (retain, nonatomic) NSMutableArray *motionActivities;
@property (retain, nonatomic) RTMotionActivity *dominantMotionActivity;
@property (nonatomic) unsigned long long settledState;

+ (double)durationForTrigger:(unsigned int)a0;

- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (void)_onActivity:(id)a0;
- (void)_fetchMotionActivitiesFromStartDate:(id)a0 endDate:(id)a1 handler:(id /* block */)a2;
- (id)initWithPlatform:(id)a0;
- (void)_subscribeForMotionAlarmTypes:(const unsigned int *)a0 alarmsCount:(unsigned long long)a1;
- (void)_invalidateAlarm:(id)a0;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (void)onActivity:(id)a0;
- (void)_bootstrapDominantActivityWithMotionActivites:(id)a0;
- (void)_processDominantActivity;
- (void)_onVehicleConnectedNotification;
- (void)_processActivityAlarm:(id)a0 error:(id)a1;
- (void)_resubscribeForActivityAlarms;
- (void)_onVehicleDisconnectedNotification;
- (void)_processSettledState;
- (void)onVehicleDisconnectedNotification;
- (void)_fetchMotionActivitiesIfNeeded;
- (void)_invalidateActivityAlarms;
- (void).cxx_destruct;
- (void)onVehicleExitNotification;
- (void)onVehicleConnectedNotification;
- (id)_rtAlarmForTrigger:(unsigned int)a0;
- (void)_fetchPredominantMotionActivityTypeFromStartDate:(id)a0 toEndDate:(id)a1 withHandler:(id /* block */)a2;

@end
