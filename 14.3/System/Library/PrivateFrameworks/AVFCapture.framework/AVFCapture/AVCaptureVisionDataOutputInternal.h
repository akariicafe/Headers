@class AVCaptureDataOutputDelegateCallbackHelper, AVWeakReference;

@interface AVCaptureVisionDataOutputInternal : NSObject {
    AVCaptureDataOutputDelegateCallbackHelper *delegateCallbackHelper;
    AVWeakReference *weakReference;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } minFrameDuration;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } minBurstFrameDuration;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } maxBurstDuration;
    unsigned long long gaussianPyramidOctavesCount;
    float gaussianPyramidBaseOctaveDownscalingFactor;
    unsigned long long maxKeypointsCount;
    BOOL featureBinningEnabled;
    BOOL featureOrientationAssignmentEnabled;
    float keypointDetectionThreshold;
}

- (id)init;
- (void)dealloc;

@end
