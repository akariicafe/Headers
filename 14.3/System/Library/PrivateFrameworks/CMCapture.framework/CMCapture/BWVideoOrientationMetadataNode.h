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
- (void)setPhysicalMirroringForMovieRecordingEnabled:(BOOL)a0;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (id)nodeType;
- (id)init;
- (struct OpaqueCMClock { } *)masterClock;
- (id)nodeSubType;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)dealloc;
- (void)setSourcePosition:(int)a0;
- (void)_releaseCachedBBufs;
- (void)updateVideoOrientation:(int)a0;
- (int)sourcePosition;
- (void)_emitValidatedVideoOrientationSampleBufferForBoxedFormatOutputAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)_determineExifOrientation;
- (void)setMasterClock:(struct OpaqueCMClock { } *)a0;
- (BOOL)physicalMirroringForMovieRecordingEnabled;
- (void)_emitBufferForNewStateIfRecording;
- (void)updateVideoMirrored:(BOOL)a0;

@end
