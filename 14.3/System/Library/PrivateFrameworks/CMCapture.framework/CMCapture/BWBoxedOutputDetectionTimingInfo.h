@interface BWBoxedOutputDetectionTimingInfo : NSObject

@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } previousDetectionPTS;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } previousDetectionDuration;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } previousNoDetectionPTS;
@property (nonatomic) int lastDetectionCount;

- (id)init;
- (void)reset;

@end
