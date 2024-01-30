@class BWVideoOrientationTimeMachine, NSObject;
@protocol OS_dispatch_queue;

@interface BWVideoOrientationMetadataNode : BWNode {
    struct OpaqueCMClock { } *_clock;
    struct OpaqueCMClock { } *_masterClock;
    int _videoOrientation;
    BOOL _videoMirrored;
    int _sourcePosition;
    struct opaqueCMFormatDescription { } *_boxedMetadataFormatDescription;
    unsigned int _localIDOfOrientationMetadata;
    BOOL _recordVideoOrientationAndMirroringChanges;
    BOOL _physicalMirroringForMovieRecordingEnabled;
    BOOL _flipMetadataHorizontally;
    BOOL _recording;
    int _exifOrientation;
    struct OpaqueCMBlockBuffer *_bbufCache[8];
    BWVideoOrientationTimeMachine *_videoOrientationTimeMachine;
    NSObject<OS_dispatch_queue> *_emitSamplesDispatchQueue;
}

@property (readonly, nonatomic) BWVideoOrientationTimeMachine *videoOrientationTimeMachine;

+ (void)initialize;

- (void)prepareForCurrentConfigurationToBecomeLive;
- (id)nodeType;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (void)didReachEndOfDataForInput:(id)a0;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)setMasterClock:(struct OpaqueCMClock { } *)a0;
- (int)sourcePosition;
- (void)updateVideoOrientation:(int)a0;
- (void)updateVideoMirrored:(BOOL)a0;
- (void)dealloc;
- (id)init;
- (void)setSourcePosition:(int)a0;
- (BOOL)physicalMirroringForMovieRecordingEnabled;
- (void)setPhysicalMirroringForMovieRecordingEnabled:(BOOL)a0;
- (struct OpaqueCMClock { } *)masterClock;

@end
