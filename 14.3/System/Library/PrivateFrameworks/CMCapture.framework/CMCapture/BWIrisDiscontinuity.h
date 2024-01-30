@class NSArray;

@interface BWIrisDiscontinuity : NSObject {
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _discontinuityTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _duration;
    NSArray *_recipe;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _targetFrameDuration;
    BOOL _onlyRetime;
}

@property (readonly) struct { long long x0; int x1; unsigned int x2; long long x3; } time;
@property (retain, nonatomic) NSArray *timeSkews;
@property (readonly) struct { long long x0; int x1; unsigned int x2; long long x3; } targetFrameDuration;

+ (int)maximumNumberOfConsecutiveDroppedFrames;

- (void)dealloc;
- (long long)_offsetIndexFromDiscontinuityForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)initWithTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 targetFrameDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 onlyRetime:(BOOL)a3 timeSkews:(id)a4;
- (BOOL)containsVideoBufferTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (BOOL)shouldKeepBufferWithTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 nextAdjustedTimeInOut:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a1;

@end
