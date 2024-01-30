@class NSMutableArray, NSDate;

@interface HDSleepPeriodArrayBuilder : NSObject {
    NSMutableArray *_periods;
    NSMutableArray *_segments;
    NSDate *_minDate;
    NSDate *_maxDate;
}

- (id)finish;
- (id)init;
- (void).cxx_destruct;
- (void)addOrderedSegment:(id)a0;

@end
