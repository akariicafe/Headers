@class NSArray, HKQuantityType, HKQuantity;

@interface FITrailingIntervalController : NSObject {
    NSArray *_slices;
    HKQuantityType *_quantityType;
    NSArray *_uncommittedSamples;
}

@property (retain, nonatomic) HKQuantity *threshold;
@property (readonly, nonatomic) BOOL thresholdReached;
@property (readonly, nonatomic) double committedDuration;
@property (readonly, nonatomic) HKQuantity *quantity;
@property (readonly, nonatomic) NSArray *pauseResumeEvents;

- (void)addSample:(id)a0;
- (void)addSamples:(id)a0;
- (void).cxx_destruct;
- (void)_addResumeEvent:(id)a0;
- (void)_addPauseEvent:(id)a0;
- (void)_determineAndProcessThresholdReached;
- (void)_processUncommittedSamples;
- (void)_updateSlicesWithSamples:(id)a0;
- (double)activeDurationUntilDate:(id)a0;
- (BOOL)addEvent:(id)a0 withError:(id *)a1;
- (double)idleDurationUntilDate:(id)a0;
- (id)initWithQuantityType:(id)a0 threshold:(id)a1 startDate:(id)a2;

@end
