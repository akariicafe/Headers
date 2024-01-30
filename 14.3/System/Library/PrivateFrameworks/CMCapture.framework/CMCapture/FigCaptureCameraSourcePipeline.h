@class BWFigVideoCaptureDevice, NSArray, FigCaptureSourceDepthDataFormat, FigCaptureSourceVideoFormat, NSDictionary, BWMultiStreamCameraSourceNode, BWNodeOutput, NSMutableArray, BWMemoryPool;
@protocol BWDetectedFacesFilterDelegate;

@interface FigCaptureCameraSourcePipeline : FigCaptureSourcePipeline {
    BOOL _useCaptureOutputForPreview;
    BOOL _allowISPVISForPreview;
    int _deviceType;
    int _devicePosition;
    NSMutableArray *_sourceNodes;
    BWMultiStreamCameraSourceNode *_telephotoSourceNode;
    BWMultiStreamCameraSourceNode *_superWideSourceNode;
    BWMultiStreamCameraSourceNode *_infraredSourceNode;
    NSMutableArray *_synchronizerNodes;
    NSArray *_previewFilters;
    NSDictionary *_previewOutputsBySourceDeviceType;
    NSDictionary *_videoCaptureOutputsArrayBySourceDeviceType;
    unsigned int _nextVideoCaptureOutputIndexBySourceDeviceType[11];
    NSDictionary *_detectedObjectsOutputsBySourceDeviceType;
    NSDictionary *_visionDataOutputsBySourceDeviceType;
    BWMemoryPool *_memoryPool;
    BOOL _overCapturePercentage;
}

@property (nonatomic) id<BWDetectedFacesFilterDelegate> faceFilteringDelegate;
@property (nonatomic) int stillImageOutputRetainedBufferCountOverride;
@property (nonatomic) struct OpaqueCMClock { } *masterClock;
@property (nonatomic) BOOL keepISPStreamingWhenStopping;
@property (readonly, nonatomic) NSDictionary *stillImageOutputsByPortType;
@property (readonly, nonatomic) BWNodeOutput *pointCloudOutput;
@property (readonly, nonatomic) BOOL stillImageOutputDerivesFromVideoCaptureOutput;
@property (readonly, nonatomic) struct OpaqueCMClock { } *clock;
@property (readonly, nonatomic) BOOL requiresMasterClock;
@property (readonly, nonatomic) BWFigVideoCaptureDevice *captureDevice;
@property (readonly, nonatomic) struct OpaqueFigCaptureSource { } *captureSource;
@property (readonly, nonatomic) FigCaptureSourceVideoFormat *captureSourceVideoFormat;
@property (readonly, nonatomic) FigCaptureSourceDepthDataFormat *captureSourceDepthDataFormat;
@property (readonly, nonatomic) NSDictionary *videoOutputColorInfo;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } overscanRect;
@property (readonly, nonatomic) BWNodeOutput *sourceFormatReferenceOutput;
@property (readonly, nonatomic) struct FigCaptureVideoTransform { BOOL x0; int x1; struct { int x0; int x1; } x2; } videoCaptureOutputTransform;
@property (readonly, nonatomic) int motionAttachmentsSource;
@property (readonly, nonatomic) BOOL hardwareDepthFilteringEnabled;
@property (readonly, nonatomic) NSArray *portTypesWithGeometricDistortionCorrectionEnabled;
@property (readonly, nonatomic) BWMultiStreamCameraSourceNode *sourceNode;

+ (void)initialize;

- (int)allocateSharedBufferPools;
- (int)_buildDetectedObjectsOutputNetwork:(id)a0 pipelineConfiguration:(id)a1 graph:(id)a2;
- (id)_addCrossOverNodeToGraph:(id)a0 inputs:(id)a1 mediaType:(unsigned int)a2 name:(id)a3 outErr:(int *)a4;
- (int)_insertCrossOverAndOverCaptureNodesOnOutputsBySourceDeviceType:(id)a0 connectionConfigurations:(id)a1 pipelineConfiguration:(id)a2 graph:(id)a3 outputNetworkType:(int)a4;
- (id)nextVideoCaptureOutputForSourceDeviceType:(int)a0;
- (void)dealloc;
- (int)_buildMultiStreamCameraSourcePipeline:(id)a0 graph:(id)a1 renderDelegate:(id)a2;
- (int)_addOverCaptureDepthSynchronizerForOutputs:(id *)a0 pipelineConfiguration:(id)a1 graph:(id)a2;
- (void)setStreamsSuspendedBySourceDeviceType:(id)a0;
- (int)_buildVideoCaptureOutputNetwork:(id)a0 previewOutputsBySourceDeviceType:(id)a1 pipelineConfiguration:(id)a2 graph:(id)a3;
- (id)_addOverCaptureSourcePipelineToGraph:(id)a0 upstreamVideoCaptureOutputsBySourceDeviceType:(id)a1 depthEnabled:(BOOL)a2 forPreview:(BOOL)a3 outErr:(int *)a4;
- (id)visionDataOutputForSourceDeviceType:(int)a0;
- (void)logCameraStreamingInformationToAggd:(long long)a0 applicationID:(id)a1;
- (int)prepareForStillImageCaptureWithStillImageOutputRetainedBufferCountOverride:(int)a0 clientBracketCount:(int)a1 enableSushiRawAttachmentOption:(BOOL)a2;
- (void)hackRetainedBufferCountsForDualStreamSources;
- (id)previewOutputForSourceDeviceType:(int)a0;
- (int)_addDepthFromInfraredSynchronizer:(id)a0 previewOutputsBySourceDeviceType:(id)a1 pipelineConfiguration:(id)a2 graph:(id)a3;
- (BOOL)newConfigurationRequiresStreamRestart:(id)a0;
- (id)detectedObjectsOutputForSourceDeviceType:(int)a0;
- (void)setPreviewShift:(struct CGPoint { double x0; double x1; })a0 previewScaleFactor:(float)a1 forPortType:(id)a2;
- (int)_buildPreviewOutputNetwork:(id)a0 pipelineConfiguration:(id)a1 graph:(id)a2;
- (id)initWithConfiguration:(id)a0 captureDevice:(id)a1 graph:(id)a2 name:(id)a3 renderDelegate:(id)a4;

@end
