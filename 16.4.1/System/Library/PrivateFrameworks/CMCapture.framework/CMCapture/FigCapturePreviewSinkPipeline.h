@class NSString, NSArray, FigCaptureSemanticStyle, BWImageQueueSinkNode, BWSceneClassifierSinkNode, NSDictionary, BWStreamingFilterNode, BWPreviewTimeMachineSinkNode, BWNodeOutput, BWInferenceNode, BWPixelTransferNode, BWPreviewStitcherNode;
@protocol BWSemanticStyleSceneObserver, BWMRCSceneObserver;

@interface FigCapturePreviewSinkPipeline : FigCaptureSinkPipeline {
    BWSceneClassifierSinkNode *_sceneClassifierSinkNode;
    BWNodeOutput *_sceneClassifierPipelineUpstreamOutput;
    BWInferenceNode *_semanticStylePersonSegmentationNode;
    BWPreviewStitcherNode *_previewStitcher;
    BOOL _cinematicVideoEnabled;
    BOOL _overCaptureEnabled;
    double _videoStabilizationOverscan;
    long long _primaryCaptureRectUniqueID;
    BOOL _applyPreviewShiftToMomentCapture;
}

@property (nonatomic, setter=setMRCSceneObserver:) id<BWMRCSceneObserver> mrcSceneObserver;
@property (readonly, nonatomic) id<BWSemanticStyleSceneObserver> semanticStyleSceneObserver;
@property (readonly, nonatomic) NSString *sourceID;
@property (readonly, nonatomic) int sourceDeviceType;
@property (readonly, nonatomic) BWImageQueueSinkNode *imageQueueSinkNode;
@property (readonly, nonatomic) BWStreamingFilterNode *filterNode;
@property (readonly, nonatomic) BWPixelTransferNode *scalerNode;
@property (readonly, nonatomic) BWPreviewTimeMachineSinkNode *timeMachineSinkNode;
@property (readonly, nonatomic) BWNodeOutput *metadataSinkOutput;
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
@property (retain, nonatomic) FigCaptureSemanticStyle *semanticStyle;
@property (readonly) double primaryCaptureRectAspectRatio;
@property (readonly) struct CGPoint { double x0; double x1; } primaryCaptureRectCenter;
@property (readonly) long long primaryCaptureRectUniqueID;
@property BOOL displaysWidestCameraOnly;

+ (void)initialize;

- (void)setSemanticStyle:(id)a0 animated:(BOOL)a1;
- (void)dealloc;
- (void)setSemanticStyleRenderingSuspended:(BOOL)a0 animated:(BOOL)a1;
- (void)setSemanticStyleSet:(id)a0 fencePortSendRight:(id)a1;
- (void)prepareForRenderingWithPreparedPixelBufferPool;
- (id)initWithConfiguration:(id)a0 sourcePreviewOutput:(id)a1 imageQueueSinkNode:(id)a2 graph:(id)a3 name:(id)a4 inferenceScheduler:(id)a5 captureDevice:(id)a6 previewTapDelegate:(id)a7;
- (void)setPrimaryCaptureRectAspectRatio:(double)a0 center:(struct CGPoint { double x0; double x1; })a1 fencePortSendRight:(id)a2 uniqueID:(long long)a3;
- (void)setStoppingForModeSwitch:(BOOL)a0;
- (void)setVideoStabilizationOverscanCropEnabled:(BOOL)a0 momentMovieRecordingEnabled:(BOOL)a1;

@end
