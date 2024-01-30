@class BWMotionSampleRingBuffer;

@interface BWDeviceMotionActivityDetector : NSObject {
    BWMotionSampleRingBuffer *_motionDataRingBuffer;
    struct OpaqueFigSimpleMutex { } *_ringMutex;
    BOOL _stationary;
    BOOL _newMotionDataAvailable;
    BOOL _robustMethodEnabled;
    BOOL _motionMetadataStatusChecked;
    BOOL _directionalMotionDetectionEnabled;
    double _directionalMotionDetectionAngularRotationThreshold;
    struct { BOOL doingBiasEstimation; double timestamp; struct { double w; double x; double y; double z; } quaternion; } _directionalMotionDetectionReferenceDirection;
}

@property (readonly, nonatomic, getter=isStationary) BOOL stationary;
@property (getter=isDirectionalMotionDetectionEnabled) BOOL directionalMotionDetectionEnabled;

+ (void)initialize;

- (void)processSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)dealloc;
- (id)init;

@end
