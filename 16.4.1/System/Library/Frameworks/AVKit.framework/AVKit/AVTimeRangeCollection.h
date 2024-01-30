@class NSArray;

@interface AVTimeRangeCollection : NSObject

@property (readonly) NSArray *timeRanges;
@property (readonly) double combinedDuration;

- (id)initWithTimeRanges:(id)a0;
- (double)displayTimeFromTime:(double)a0;
- (unsigned long long)count;
- (double)timeFromDisplayTime:(double)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithInterstitialTimeRanges:(id)a0;
- (id)arrayOfBoundaryTimes;
- (id)arrayOfDisplayTimes;
- (id)arrayOfDisplayTimesMatching:(id /* block */)a0;
- (id)displayTimeRangeTrimmedToTimeRange:(id)a0;
- (id)initWithTimedMetadataGroups:(id)a0;
- (void)setMapDate:(id)a0 toTime:(double)a1;
- (id)timeRangeAfterTime:(double)a0;
- (id)timeRangeBeforeTime:(double)a0;
- (id)timeRangeClosestToTime:(double)a0;
- (id)timeRangeContainingTime:(double)a0;
- (id)timeRangesBetweenDisplayTime:(double)a0 and:(double)a1;

@end
