@class NSMutableArray, NSDate;

@interface HDSleepPeriodArrayBuilder : NSObject {
    NSMutableArray *_periods;
    NSMutableArray *_segments;
    NSDate *_minDate;
    NSDate *_maxDate;
}

- (id)finish;
- (void).cxx_destruct;
- (id)init;
- (void)addOrderedSegment:(id)a0;

@end
