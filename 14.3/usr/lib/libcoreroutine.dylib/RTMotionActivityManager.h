@class RTPlatform;

@interface RTMotionActivityManager : RTService

@property (readonly, nonatomic) RTPlatform *platform;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)supportsNotificationName:(id)a0;
+ (id)motionSettledStateToString:(unsigned long long)a0;
+ (id)motionActivityVehicleConnectedStateToString:(unsigned long long)a0;
+ (void)removeActivities:(id)a0 stoppedBeforeDate:(id)a1;
+ (double)ratioOfMotionActivityType:(unsigned long long)a0 forActivities:(id)a1 startDate:(id)a2 endDate:(id)a3;

- (id)initWithPlatform:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (void)_fetchMotionActivitiesFromStartDate:(id)a0 endDate:(id)a1 handler:(id /* block */)a2;
- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (void)_fetchPredominantMotionActivityTypeFromStartDate:(id)a0 toEndDate:(id)a1 withHandler:(id /* block */)a2;
- (void)fetchMotionActivitiesFromStartDate:(id)a0 endDate:(id)a1 handler:(id /* block */)a2;
- (void)fetchPredominantMotionActivityTypeFromStartDate:(id)a0 toEndDate:(id)a1 withHandler:(id /* block */)a2;

@end
