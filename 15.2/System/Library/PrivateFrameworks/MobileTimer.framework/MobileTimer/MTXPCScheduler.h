@class NSString;

@interface MTXPCScheduler : NSObject <MTSchedulingDelegate>

@property (copy, nonatomic) NSString *eventName;

+ (id)xpcSchedulerWithEvent:(id)a0;

- (id)initWithEvent:(id)a0;
- (void)scheduleActivityWithCriteria:(id)a0 activityHandler:(id /* block */)a1;
- (void)scheduleActivityWithCriteria:(id)a0 activityHandler:(id /* block */)a1 performImmediately:(BOOL)a2;
- (void).cxx_destruct;
- (void)unscheduleTimer;
- (void)scheduleTimerForSeconds:(double)a0;
- (void)unscheduleActivity;

@end
