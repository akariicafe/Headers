@class NSMutableArray, NSDate;

@interface HDSHSleepPeriodArrayBuilder : NSObject {
    NSMutableArray *_periods;
    NSMutableArray *_segments;
    NSDate *_minDate;
    NSDate *_maxDate;
}

- (id)finish;
- (id)init;
- (void).cxx_destruct;
- (id)_createPeriodAndReset;
- (void)addOrderedSegment:(id)a0;

@end
