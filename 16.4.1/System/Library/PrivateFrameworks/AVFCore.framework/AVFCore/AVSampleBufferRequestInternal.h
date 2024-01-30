@class AVSampleCursor;

@interface AVSampleBufferRequestInternal : NSObject {
    AVSampleCursor *startCursor;
    long long direction;
    AVSampleCursor *limitCursor;
    long long preferredMinSampleCount;
    long long maxSampleCount;
    long long mode;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } overrideTime;
}

@end
