@class HKDateIntervalTree, NSMutableArray, NSDate;

@interface HDSHSleepPeriodSegmentArrayBuilder : NSObject {
    NSMutableArray *_segments;
    long long _category;
    double _minimumInterSegmentTimeInterval;
    NSDate *_minDate;
    NSDate *_maxDate;
    HKDateIntervalTree *_sampleIntervals;
}

- (id)finish;
- (id)initWithCategory:(long long)a0;
- (void).cxx_destruct;
- (void)addOrderedSample:(id)a0;
- (id)_createSegmentAndReset;

@end
