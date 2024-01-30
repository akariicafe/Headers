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

- (void)_shutdown;
- (id)initWithPlatform:(id)a0;
- (void).cxx_destruct;
- (void)_processDominantActivity;
- (void)_onVehicleConnectedNotification;
- (void)onVehicleDisconnectedNotification;
- (void)_processSettledState;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (void)_invalidateAlarm:(id)a0;
- (void)_fetchMotionActivitiesIfNeeded;
- (void)_fetchMotionActivitiesFromStartDate:(id)a0 endDate:(id)a1 handler:(id /* block */)a2;
- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (void)_bootstrapDominantActivityWithMotionActivites:(id)a0;
- (void)_resubscribeForActivityAlarms;
- (void)onActivity:(id)a0;
- (void)_onActivity:(id)a0;
- (void)_subscribeForMotionAlarmTypes:(const unsigned int *)a0 alarmsCount:(unsigned long long)a1;
- (id)_rtAlarmForTrigger:(unsigned int)a0;
- (void)onVehicleConnectedNotification;
- (void)_invalidateActivityAlarms;
- (void)_processActivityAlarm:(id)a0 error:(id)a1;
- (void)_onVehicleDisconnectedNotification;
- (void)_fetchPredominantMotionActivityTypeFromStartDate:(id)a0 toEndDate:(id)a1 withHandler:(id /* block */)a2;
- (void)onVehicleExitNotification;

@end
