@class NSArray, MSVTimer, NSMutableArray, NSDate;

@interface MSVVariableIntervalTimer : NSObject {
    NSMutableArray *_intervals;
    MSVTimer *_timer;
    NSDate *_currentIntervalStartDate;
}

@property (readonly, nonatomic) double currentInterval;
@property (readonly, nonatomic) double timeUntilNextInterval;
@property (readonly, nonatomic) NSArray *remainingIntervals;
@property (readonly, nonatomic, getter=isValid) BOOL valid;

- (void).cxx_destruct;
- (id)initWithIntervals:(id)a0 name:(id)a1 queue:(id)a2 block:(id /* block */)a3;
- (void)_processTimerEventWithQueue:(id)a0 block:(id /* block */)a1;

@end
