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

- (struct OpaqueCMClock { } *)masterClock;
- (void)setMasterClock:(struct OpaqueCMClock { } *)a0;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (BOOL)physicalMirroringForMovieRecordingEnabled;
- (id)nodeSubType;
- (void)updateVideoOrientation:(int)a0;
- (void)setSourcePosition:(int)a0;
- (int)sourcePosition;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)setPhysicalMirroringForMovieRecordingEnabled:(BOOL)a0;
- (void)_determineExifOrientation;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)_emitBufferForNewStateIfRecording;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)_releaseCachedBBufs;
- (id)init;
- (void)updateVideoMirrored:(BOOL)a0;
- (void)_emitValidatedVideoOrientationSampleBufferForBoxedFormatOutputAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)dealloc;

@end
