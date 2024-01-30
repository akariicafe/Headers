@class RTPlatform;

@interface RTMotionActivityManager : RTService

@property (readonly, nonatomic) RTPlatform *platform;

+ (BOOL)supportsNotificationName:(id)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)motionSettledStateToString:(unsigned long long)a0;
+ (id)motionActivityVehicleConnectedStateToString:(unsigned long long)a0;
+ (void)removeActivities:(id)a0 stoppedBeforeDate:(id)a1;
+ (double)ratioOfMotionActivityType:(unsigned long long)a0 forActivities:(id)a1 startDate:(id)a2 endDate:(id)a3;

- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (void)_fetchMotionActivitiesFromStartDate:(id)a0 endDate:(id)a1 handler:(id /* block */)a2;
- (id)initWithPlatform:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_fetchPredominantMotionActivityTypeFromStartDate:(id)a0 toEndDate:(id)a1 withHandler:(id /* block */)a2;
- (void)fetchMotionActivitiesFromStartDate:(id)a0 endDate:(id)a1 handler:(id /* block */)a2;
- (void)fetchPredominantMotionActivityTypeFromStartDate:(id)a0 toEndDate:(id)a1 withHandler:(id /* block */)a2;

@end
