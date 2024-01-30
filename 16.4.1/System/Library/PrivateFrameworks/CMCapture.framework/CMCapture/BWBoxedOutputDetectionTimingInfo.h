@interface BWBoxedOutputDetectionTimingInfo : NSObject {
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _previousDetectionPTS;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _previousDetectionDuration;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _previousNoDetectionPTS;
    int _lastDetectionCount;
}

- (id)init;

@end
