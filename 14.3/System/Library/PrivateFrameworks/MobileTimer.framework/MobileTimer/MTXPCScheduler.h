@class NSString;

@interface MTXPCScheduler : NSObject <MTSchedulingDelegate>

@property (copy, nonatomic) NSString *eventName;

+ (id)xpcSchedulerWithEvent:(id)a0;

- (void)unscheduleTimer;
- (void).cxx_destruct;
- (void)scheduleActivityWithCriteria:(id)a0 activityHandler:(id /* block */)a1 performImmediately:(BOOL)a2;
- (id)initWithEvent:(id)a0;
- (void)scheduleActivityWithCriteria:(id)a0 activityHandler:(id /* block */)a1;
- (void)unscheduleActivity;
- (void)scheduleTimerForSeconds:(double)a0;

@end
