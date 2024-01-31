@class NSArray;

@interface AVTimeRangeCollection : NSObject

@property (readonly) NSArray *timeRanges;
@property (readonly) double combinedDuration;

- (id)init;
- (unsigned long long)count;
- (double)displayTimeFromTime:(double)a0;
- (void).cxx_destruct;
- (id)initWithTimeRanges:(id)a0;
- (double)timeFromDisplayTime:(double)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithInterstitialTimeRanges:(id)a0;
- (id)arrayOfBoundaryTimes;
- (id)arrayOfDisplayTimes;
- (id)arrayOfDisplayTimesMatching:(id /* block */)a0;
- (id)displayTimeRangeTrimmedToTimeRange:(id)a0;
- (id)initWithTimedMetadataGroups:(id)a0;
- (BOOL)isEqualToTimeRangeCollection:(id)a0;
- (void)setMapDate:(id)a0 toTime:(double)a1;
- (id)timeRangeAfterTime:(double)a0;
- (id)timeRangeBeforeTime:(double)a0;
- (id)timeRangeClosestToTime:(double)a0;
- (id)timeRangeContainingTime:(double)a0;
- (id)timeRangesBetweenDisplayTime:(double)a0 and:(double)a1;

@end
