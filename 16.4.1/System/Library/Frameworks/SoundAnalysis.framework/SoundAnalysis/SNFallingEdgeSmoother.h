@class NSValue;

@interface SNFallingEdgeSmoother : NSObject {
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _smoothingDuration;
    NSValue *_lastEventTime;
}

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSmoothingDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (BOOL)processValue:(BOOL)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;

@end
