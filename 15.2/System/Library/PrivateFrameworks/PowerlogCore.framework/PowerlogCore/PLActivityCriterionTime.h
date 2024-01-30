@class PLMonotonicTimer;

@interface PLActivityCriterionTime : PLActivityCriterion

@property double interval;
@property (nonatomic) double rescheduleDelay;
@property (retain) PLMonotonicTimer *timer;

+ (double)minTimeInterval;
+ (id)timeCriterionWithInterval:(double)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithInterval:(double)a0;
- (void)didCompleteActivity:(id)a0;
- (void)didInterruptActivity:(id)a0;
- (void)didDisableActivity:(id)a0;
- (void)dealloc;
- (void)didEnableActivity:(id)a0;

@end
