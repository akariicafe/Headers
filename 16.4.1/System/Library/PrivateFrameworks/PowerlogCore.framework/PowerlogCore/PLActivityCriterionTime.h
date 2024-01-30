@class PLMonotonicTimer;

@interface PLActivityCriterionTime : PLActivityCriterion

@property double interval;
@property (nonatomic) double rescheduleDelay;
@property (retain) PLMonotonicTimer *timer;

+ (id)timeCriterionWithInterval:(double)a0;
+ (double)minTimeInterval;

- (void)didEnableActivity:(id)a0;
- (void)didInterruptActivity:(id)a0;
- (void)didCompleteActivity:(id)a0;
- (void)didDisableActivity:(id)a0;
- (id)initWithInterval:(double)a0;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;

@end
