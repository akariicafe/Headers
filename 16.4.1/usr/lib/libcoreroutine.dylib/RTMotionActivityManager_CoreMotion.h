@class NSMutableArray, NSMutableDictionary, RTMotionActivity, NSOperationQueue, NSDate, CMMotionActivityManager, NSObject;
@protocol OS_dispatch_source;

@interface RTMotionActivityManager_CoreMotion : RTMotionActivityManager

@property (retain, nonatomic) CMMotionActivityManager *motionActivityManager;
@property (nonatomic) BOOL motionActivityAvailable;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *dominantMotionActivityTimer;
@property (retain, nonatomic) NSMutableDictionary *activityAlarms;
@property (retain, nonatomic) NSDate *lastQueryForMotionActivity;
@property (nonatomic) BOOL dominantMotionActivityBootstrapped;
@property (retain, nonatomic) NSMutableArray *motionActivities;
@property (retain, nonatomic) RTMotionActivity *dominantMotionActivity;
@property (nonatomic) unsigned long long settledState;
@property (nonatomic) long long interestedInActivity;
@property (nonatomic) unsigned long long vehicleConnectedState;

+ (long long)activityAlarmTriggerFromCMActivityAlarmTrigger:(unsigned int)a0;
+ (double)durationForTrigger:(unsigned int)a0;

- (id)initWithPlatform:(id)a0;
- (void)_onActivity:(id)a0;
- (void)_invalidateAlarm:(id)a0;
- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (void)_fetchMotionActivitiesIfNeeded;
- (void)onActivity:(id)a0;
- (void)_processDominantActivity;
- (void)onVehicleConnectedNotification;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (void)_resetMotionActivitiesIfNeeded;
- (void)_processSettledState;
- (void)_onVehicleConnectedNotification;
- (void)_onVehicleDisconnectedNotification;
- (void)onVehicleExitNotification;
- (void)_fetchPredominantMotionActivityTypeFromStartDate:(id)a0 toEndDate:(id)a1 withHandler:(id /* block */)a2;
- (void)_fetchPredominantMotionActivityWithHandler:(id /* block */)a0;
- (void)_invalidateActivityAlarms;
- (void)onVehicleDisconnectedNotification;
- (void)_processActivityAlarm:(id)a0 error:(id)a1;
- (void)_bootstrapDominantActivityWithMotionActivites:(id)a0;
- (void)_fetchMotionActivitiesFromStartDate:(id)a0 endDate:(id)a1 handler:(id /* block */)a2;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_subscribeForMotionAlarmTypes:(id)a0;
- (void)_resubscribeForActivityAlarms;
- (id)_rtAlarmForTrigger:(unsigned int)a0;

@end
