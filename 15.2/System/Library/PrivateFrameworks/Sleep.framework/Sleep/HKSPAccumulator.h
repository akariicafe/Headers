@class HKSPThrottler, NSMutableSet;
@protocol NAScheduler;

@interface HKSPAccumulator : NSObject {
    HKSPThrottler *_throttler;
    id<NAScheduler> _scheduler;
    NSMutableSet *_accumulatedValues;
}

- (void)accumulateValue:(id)a0;
- (id)initWithInterval:(double)a0 updateBlock:(id /* block */)a1 scheduler:(id)a2;
- (id)initWithInterval:(double)a0 updateBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (void)accumulateValues:(id)a0;

@end
