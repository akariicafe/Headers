@class NSString;

@interface PIVideoCrossfadeLoopAdjustmentController : PIAdjustmentController

@property (class, readonly, nonatomic) NSString *crossfadeDurationValueKey;
@property (class, readonly, nonatomic) NSString *crossfadeDurationTimescaleKey;
@property (class, readonly, nonatomic) NSString *startTimeValueKey;
@property (class, readonly, nonatomic) NSString *startTimeTimescaleKey;
@property (class, readonly, nonatomic) NSString *loopTimeRangeStartValueKey;
@property (class, readonly, nonatomic) NSString *loopTimeRangeStartTimescaleKey;
@property (class, readonly, nonatomic) NSString *loopTimeRangeDurationValueKey;
@property (class, readonly, nonatomic) NSString *loopTimeRangeDurationTimescaleKey;

@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } crossfadeDuration;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } startTime;
@property (nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } loopTimeRange;

@end
