@class NSArray;

@interface AVTimeRangeCollection : NSObject

@property (readonly) NSArray *timeRanges;
@property (readonly) double combinedDuration;

- (id)initWithTimeRanges:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)count;
- (void)setMapDate:(id)a0 toTime:(double)a1;
- (id)initWithTimedMetadataGroups:(id)a0;
- (id)timeRangeContainingTime:(double)a0;
- (id)timeRangeClosestToTime:(double)a0;
- (id)timeRangeBeforeTime:(double)a0;
- (id)timeRangeAfterTime:(double)a0;
- (id)arrayOfBoundaryTimes;
- (id)arrayOfDisplayTimesMatching:(id /* block */)a0;
- (id)arrayOfDisplayTimes;
- (id)timeRangesBetweenDisplayTime:(double)a0 and:(double)a1;
- (double)displayTimeFromTime:(double)a0;
- (double)timeFromDisplayTime:(double)a0;
- (id)displayTimeRangeTrimmedToTimeRange:(id)a0;

@end
