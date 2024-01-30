@class AVInterstitialDateRange, NSDate, AVInterstitialTimeRange;

@interface AVTimeRange : NSObject <NSCopying>

@property (readonly) AVInterstitialTimeRange *interstice;
@property (readonly) AVInterstitialDateRange *dateBasedInterstice;
@property (readonly, getter=isHidden) BOOL hidden;
@property (readonly, getter=isSkipped) BOOL skipped;
@property (readonly, getter=isCollapsedInTimeLine) BOOL collapsedInTimeLine;
@property (readonly) struct { long long x0; int x1; unsigned int x2; long long x3; } startCMTime;
@property (readonly) struct { long long x0; int x1; unsigned int x2; long long x3; } endCMTime;
@property (retain, nonatomic) NSDate *startDate;
@property (readonly) double startTime;
@property (readonly) double duration;
@property (readonly) double endTime;

+ (id)timeRangeWithInterstice:(id)a0;
+ (id)timeRangeZero;

- (BOOL)containsDate:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)endDate;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (long long)compare:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithStartTime:(double)a0 endTime:(double)a1;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })cmTimeRange;
- (BOOL)containsTime:(double)a0;
- (id)dateForTime:(double)a0;
- (double)deltaTimeFromOutsideTime:(double)a0;
- (id)initWithAVTimedMetadataGroup:(id)a0;
- (id)initWithCMTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (id)initWithStartTime:(double)a0 duration:(double)a1;
- (id)initWithUnionOfCMTimeRanges:(id)a0;
- (BOOL)isEqualToTimeRange:(id)a0;
- (double)pinnedTime:(double)a0;
- (BOOL)requiresLinearPlaybackForTime:(double)a0;
- (void)setMapDate:(id)a0 toTime:(double)a1;
- (void)setMapTime:(double)a0 toDate:(id)a1;
- (double)timeForDate:(id)a0;
- (id)timeRangeByAddingTimeInterval:(double)a0;
- (id)timeRangeByAddingTimeInterval:(double)a0 shiftingDates:(BOOL)a1;
- (id)timeRangeExcludingTimeRange:(id)a0;
- (id)timeRangeIntersectingWithTimeRange:(id)a0;

@end
