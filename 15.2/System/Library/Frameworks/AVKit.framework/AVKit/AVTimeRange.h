@class NSDate;

@interface AVTimeRange : NSObject <NSCopying>

@property (readonly) struct { long long x0; int x1; unsigned int x2; long long x3; } startCMTime;
@property (readonly) struct { long long x0; int x1; unsigned int x2; long long x3; } endCMTime;
@property (retain, nonatomic) NSDate *startDate;
@property (readonly) double startTime;
@property (readonly) double duration;
@property (readonly) double endTime;

+ (id)timeRangeZero;

- (long long)compare:(id)a0;
- (id)endDate;
- (id)initWithStartTime:(double)a0 endTime:(double)a1;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (BOOL)containsDate:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithStartTime:(double)a0 duration:(double)a1;
- (id)initWithCMTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (id)initWithAVTimedMetadataGroup:(id)a0;
- (id)initWithUnionOfCMTimeRanges:(id)a0;
- (void)setMapTime:(double)a0 toDate:(id)a1;
- (void)setMapDate:(id)a0 toTime:(double)a1;
- (id)dateForTime:(double)a0;
- (double)timeForDate:(id)a0;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })cmTimeRange;
- (BOOL)containsTime:(double)a0;
- (double)deltaTimeFromOutsideTime:(double)a0;
- (double)pinnedTime:(double)a0;
- (id)timeRangeIntersectingWithTimeRange:(id)a0;
- (id)timeRangeExcludingTimeRange:(id)a0;
- (id)timeRangeByAddingTimeInterval:(double)a0 shiftingDates:(BOOL)a1;
- (id)timeRangeByAddingTimeInterval:(double)a0;
- (BOOL)isEqualToTimeRange:(id)a0;

@end
