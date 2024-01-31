@class NSDate;

@interface AVInterstitialDateRange : AVInterstitialTimeRange {
    struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } _mappedTimeRange;
}

@property (readonly) NSDate *startDate;
@property (readonly) NSDate *endDate;

- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timeRange;
- (id)initWithStart:(id)a0 end:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (void)setEndDate:(id)a0;
- (id)initWithTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (BOOL)isEqualToInterstitialTimeRange:(id)a0;
- (id)_initWithTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (void)_setPlayerInterstitialEvent:(id)a0;
- (void)_updateMappedStartTime;

@end
