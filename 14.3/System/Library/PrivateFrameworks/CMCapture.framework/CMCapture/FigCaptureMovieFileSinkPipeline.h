@class BWIrisStagingNode, NSString, BWFigVideoCaptureDevice, FigCaptureMovieFileSinkMiddlePipeline, FigCaptureMovieFileSinkHeadPipeline, BWFileCoordinatorNode, BWVideoOrientationMetadataNode, NSMutableArray;
@protocol BWMRCSceneObserver;

@interface FigCaptureMovieFileSinkPipeline : FigCaptureSinkPipeline {
    FigCaptureMovieFileSinkHeadPipeline *_headPipeline;
    FigCaptureMovieFileSinkMiddlePipeline *_middlePipeline;
    NSMutableArray *_tailPipelines;
    BOOL _momentCaptureMovieRecordingEnabled;
    BOOL _overCaptureTailPipelineRenderingEnabled;
}

@property (readonly, nonatomic) NSString *videoConnectionID;
@property (readonly, nonatomic) NSString *videoSourceID;
@property (readonly, nonatomic) int videoSourceDeviceType;
@property (readonly, nonatomic) BWIrisStagingNode *irisStagingNode;
@property (readonly, nonatomic) BWFileCoordinatorNode *fileCoordinatorNode;
@property (readonly, nonatomic) BWVideoOrientationMetadataNode *videoOrientationMetadataNode;
@property (readonly, nonatomic) NSMutableArray *movieFileSinkNodes;
@property (readonly, nonatomic) NSMutableArray *videoCompressorNodes;
@property (readonly, nonatomic) NSMutableArray *sdofCompressorNodes;
@property (readonly, nonatomic) BWFigVideoCaptureDevice *captureDevice;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } irisVISCleanOutputRectForCLAP;
@property (readonly, nonatomic) struct { int x0; int x1; } offlineVISDimensions;
@property (readonly, nonatomic) BOOL overCaptureEnabled;
@property (nonatomic) BOOL overCaptureTailPipelineRenderingEnabled;
@property (nonatomic, setter=setMRCSceneObserver:) id<BWMRCSceneObserver> mrcSceneObserver;
@property (nonatomic) BOOL sceneClassifierSuspended;
@property (readonly, nonatomic) BOOL allTailsAreRecording;
@property (readonly, nonatomic) BOOL atLeastOneTailIsRecording;

+ (void)initialize;

- (void)dealloc;
- (id)middlePipeline;
- (void)setUpBackPressureForResolvedRetainedBufferCounts;
- (void)setRecording:(BOOL)a0 forTailPipelineIndex:(unsigned long long)a1;
- (void)setRecordingForAllTailPipelines:(BOOL)a0;
- (id)initWithConfiguration:(id)a0 videoSourceCaptureOutput:(id)a1 audioSourceCaptureOutput:(id)a2 detectedObjectBoxedMetadataOutputs:(id)a3 objectDetectionSourceOutput:(id)a4 metadataSourcePipelineOutputs:(id)a5 graph:(id)a6 name:(id)a7 inferenceScheduler:(id)a8 captureDevice:(id)a9 audioSourceDelegate:(id)a10 fileCoordinatorStatusDelegate:(id)a11 recordingStatusDelegate:(id)a12 irisRequestDelegate:(id)a13 masterClock:(struct OpaqueCMClock { } *)a14 delayedCompressorCleanupEnabled:(BOOL)a15;

@end
