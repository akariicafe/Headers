@class NSString, NSArray, BWSceneClassifierSinkNode, BWImageQueueSinkNode, BWPreviewStitcherNode, NSDictionary, BWStreamingFilterNode, BWPreviewTimeMachineSinkNode, BWNodeOutput, BWPixelTransferNode;
@protocol BWMRCSceneObserver;

@interface FigCapturePreviewSinkPipeline : FigCaptureSinkPipeline {
    BWSceneClassifierSinkNode *_sceneClassifierSinkNode;
    BWNodeOutput *_sceneClassifierPipelineUpstreamOutput;
    NSArray *_filters;
    BWPreviewStitcherNode *_previewStitcher;
    BOOL _overCaptureEnabled;
    double _videoStabilizationOverscan;
    long long _primaryCaptureRectUniqueID;
}

@property (nonatomic, setter=setMRCSceneObserver:) id<BWMRCSceneObserver> mrcSceneObserver;
@property (readonly, nonatomic) NSString *sourceID;
@property (readonly, nonatomic) int sourceDeviceType;
@property (readonly, nonatomic) BWImageQueueSinkNode *imageQueueSinkNode;
@property (readonly, nonatomic) BWStreamingFilterNode *filterNode;
@property (readonly, nonatomic) BWPixelTransferNode *scalerNode;
@property (readonly, nonatomic) BWPreviewTimeMachineSinkNode *timeMachineSinkNode;
@property (readonly, nonatomic) BWNodeOutput *metadataSinkOutput;
@property (readonly, nonatomic) BWNodeOutput *videoDataSinkOutput;
@property (readonly, nonatomic) BWNodeOutput *videoThumbnailSinkOutput;
@property (readonly, nonatomic) BWNodeOutput *depthDataSinkOutput;
@property (readonly, nonatomic) NSDictionary *imageQueueUpdatedPayloadToBeSentAfterCommitConfiguration;
@property (readonly, nonatomic) BOOL depthFilterRenderingEnabled;
@property (readonly, nonatomic) struct FigCaptureVideoTransform { BOOL mirrored; int rotationDegrees; struct { int width; int height; } dimensions; } outputTransform;
@property (readonly, nonatomic) struct FigCaptureVideoTransform { BOOL mirrored; int rotationDegrees; struct { int width; int height; } dimensions; } videoThumbnailSinkOutputTransform;
@property (nonatomic) BOOL discardsImageQueueSampleData;
@property (nonatomic) BOOL sceneClassifierSuspended;
@property (retain, nonatomic) NSArray *filters;
@property (nonatomic) float simulatedAperture;
@property (nonatomic) float portraitLightingEffectStrength;
@property (readonly) double primaryCaptureRectAspectRatio;
@property (readonly) struct CGPoint { double x0; double x1; } primaryCaptureRectCenter;
@property (readonly) long long primaryCaptureRectUniqueID;
@property BOOL displaysWidestCameraOnly;

+ (void)initialize;

- (void)dealloc;
- (void)setStoppingForModeSwitch:(BOOL)a0;
- (void)setVideoStabilizationOverscanCropEnabled:(BOOL)a0;
- (void)setPrimaryCaptureRectAspectRatio:(double)a0 center:(struct CGPoint { double x0; double x1; })a1 fencePortSendRight:(id)a2 uniqueID:(long long)a3;
- (id)initWithConfiguration:(id)a0 sourcePreviewOutput:(id)a1 imageQueueSinkNode:(id)a2 graph:(id)a3 name:(id)a4 inferenceScheduler:(id)a5 captureDevice:(id)a6 previewTapDelegate:(id)a7;
- (void)prepareForRenderingWithPreparedPixelBufferPool;
- (int)_buildVideoPreviewSinkPipeline:(id)a0 sourcePreviewOutput:(id)a1 graph:(id)a2 inferenceScheduler:(id)a3 captureDevice:(id)a4 previewTapDelegate:(id)a5;
- (int)_appendFilteredPreviewPipeline:(id *)a0 desiredPipelineStage:(id)a1 videoPreviewSinkConnectionConfiguration:(id)a2 graph:(id)a3 inferenceScheduler:(id)a4 captureDevice:(id)a5 focusBlurMapForDepthFiltersEnabled:(BOOL)a6 depthFromMonocularNetworkEnabled:(BOOL)a7;
- (int)_buildImageQueuePreviewSinkPipeline:(id)a0 previewPipelineStage:(id)a1 videoPreviewSinkConnectionConfiguration:(id)a2 previewScalerOutputBuffersAreShared:(BOOL)a3 debugOverlayEnabled:(BOOL)a4 deferredPrepareEnabled:(BOOL)a5 remoteVideoPreview:(BOOL)a6 ispPreviewJitterCompensationEnabled:(BOOL)a7 graph:(id)a8 previewTapDelegate:(id)a9;
- (void)_stashPreviewImageQueueUpdatedNotificationPayload:(int)a0 previewDimensions:(struct { int x0; int x1; })a1 remoteVideoPreview:(BOOL)a2;
- (int)_buildPreviewTimeMachineSinkPipeline:(id)a0 upstreamPipelineStageForPreviewTimeMachine:(id)a1 upstreamTransform:(struct FigCaptureVideoTransform { BOOL x0; int x1; struct { int x0; int x1; } x2; })a2 previewTimeMachineConnectionConfiguration:(id)a3 videoPreviewEnabled:(BOOL)a4 deferredPrepareEnabled:(BOOL)a5 smartCameraMotionDetectionEnabled:(BOOL)a6 graph:(id)a7 captureDevice:(id)a8;

@end
