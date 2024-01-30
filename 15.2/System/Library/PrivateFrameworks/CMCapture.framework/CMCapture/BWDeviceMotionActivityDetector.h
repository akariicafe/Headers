@class BWMotionSampleRingBuffer;

@interface BWDeviceMotionActivityDetector : NSObject {
    BWMotionSampleRingBuffer *_motionDataRingBuffer;
    struct OpaqueFigSimpleMutex { } *_ringMutex;
    BOOL _stationary;
    BOOL _newMotionDataAvailable;
    BOOL _robustMethodEnabled;
    BOOL _motionMetadataStatusChecked;
}

@property (readonly, nonatomic, getter=isStationary) BOOL stationary;

+ (void)initialize;

- (id)init;
- (void)_detectIfStationary;
- (void)dealloc;
- (void)processSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;

@end
