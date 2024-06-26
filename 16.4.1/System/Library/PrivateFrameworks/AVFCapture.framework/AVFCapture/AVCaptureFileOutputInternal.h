@interface AVCaptureFileOutputInternal : NSObject {
    struct { long long value; int timescale; unsigned int flags; long long epoch; } maxRecordedDuration;
    long long maxRecordedFileSize;
    long long minFreeDiskSpaceLimit;
    BOOL pausesRecordingOnInterruption;
}

- (id)init;

@end
