@interface AVCaptureSynchronizedDataInternal : NSObject {
    struct { long long value; int timescale; unsigned int flags; long long epoch; } timestamp;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } adjustedTimestamp;
}

@end
