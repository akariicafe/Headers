@class NSDictionary, NSMutableDictionary;

@interface FigIrisAutoTrimmerMotionSample : NSObject

@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } originatingFrameTime;
@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } cmTimestamp;
@property (readonly, nonatomic) double deltaPeriod;
@property (readonly, nonatomic) struct { double w; double x; double y; double z; } attitude;
@property (readonly, nonatomic) struct { double w; double x; double y; double z; } delta;
@property (readonly, nonatomic) struct { double w; double x; double y; double z; } accel;
@property (readonly, nonatomic) struct { float x; float y; float z; } gravity;
@property (retain, nonatomic) NSDictionary *inferences;
@property (nonatomic) int vitalityObjectCount;
@property (readonly, nonatomic) NSMutableDictionary *intermediateCalculations;

+ (void)initialize;

- (id)initWithAttitude:(const struct { double x0; double x1; double x2; double x3; } *)a0 gravity:(const struct { float x0; float x1; float x2; } *)a1 motionTimestamp:(double)a2 frameTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 previousSample:(id)a4;
- (void)dealloc;
- (void)prepareIntermediates:(long long)a0;
- (struct { double x0; double x1; double x2; double x3; })attitudeRelativeTo:(id)a0;

@end
