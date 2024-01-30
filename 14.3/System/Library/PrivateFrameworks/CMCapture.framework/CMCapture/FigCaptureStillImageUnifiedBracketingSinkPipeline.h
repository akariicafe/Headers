@class BWDepthConverterNode, NSArray, NSString, BWStillImageCoordinatorNode, BWPortraitHDRStagingNode, BWStillImageBravoDisparityNode, BWStillImageSampleBufferSinkNode;

@interface FigCaptureStillImageUnifiedBracketingSinkPipeline : FigCaptureSinkPipeline <FigCaptureStillImageSinkPipeline> {
    unsigned int _pipelineStagePriority;
    unsigned int _inferencePriority;
    BWStillImageCoordinatorNode *_stillImageCoordinatorNode;
    BWStillImageSampleBufferSinkNode *_stillImageSinkNode;
    BWStillImageBravoDisparityNode *_stillImageDisparityNode;
    BWDepthConverterNode *_stillImageDepthConverterNode;
    BWPortraitHDRStagingNode *_portraitHDRStagingNode;
}

@property (readonly, nonatomic) NSArray *nodes;
@property (readonly, nonatomic) NSString *sinkID;
@property (readonly, nonatomic) BWStillImageCoordinatorNode *stillImageCoordinatorNode;
@property (readonly, nonatomic) BWStillImageSampleBufferSinkNode *stillImageSinkNode;
@property (readonly, nonatomic) BWPortraitHDRStagingNode *portraitHDRStagingNode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (int)_buildScaleAndEncodeSubPipelineWithName:(id)a0 pipelineStage:(id)a1 graph:(id)a2 nodeConfiguration:(id)a3 stillImageSinkPipelineWithConfiguration:(id)a4 sensorConfigurationsByPortType:(id)a5 supportsScaling:(BOOL)a6 provideMeteorHeadroom:(BOOL)a7 providePostEncodeInferences:(BOOL)a8 semanticDevelopmentVersion:(int)a9 constituentPhotoDeliveryEnabled:(BOOL)a10 demosaicedRawEnabled:(BOOL)a11 inferenceMainImageDownscalingFactor:(float)a12 inferenceAttachedMedia:(id)a13 inferenceScheduler:(id)a14 subPipelineInputOut:(id *)a15 subPipelineOutputOut:(id *)a16 captureDevice:(id)a17;
- (id)initWithConfiguration:(id)a0 captureDevice:(id)a1 sourceOutputsByPortType:(id)a2 pointCloudCaptureDevice:(id)a3 pointCloudSourceOutput:(id)a4 captureStatusDelegate:(id)a5 inferenceScheduler:(id)a6 graph:(id)a7 name:(id)a8;
- (void)dealloc;
- (void)enablePrepareTimeAllocationsForDeferredPrepare;
- (int)_buildStillImageSinkPipelineWithConfiguration:(id)a0 captureDevice:(id)a1 sourceOutputsByPortType:(id)a2 pointCloudCaptureDevice:(id)a3 pointCloudSourceOutput:(id)a4 captureStatusDelegate:(id)a5 inferenceScheduler:(id)a6 graph:(id)a7;
- (int)_buildRedEyeReductionSubPipelineWithName:(id)a0 pipelineStage:(id)a1 graph:(id)a2 sensorConfigurationsByPortType:(id)a3 inferenceScheduler:(id)a4 captureDevice:(id)a5 subPipelineInputOut:(id *)a6 subPipelineOutputOut:(id *)a7;
- (int)_addLandmarksInferenceToNode:(id)a0;
- (int)_addMattingInferenceToNode:(id)a0 withVersion:(unsigned int)a1 refinedDepthEnabled:(BOOL)a2 downsamplingFactor:(int)a3 enabledSemantics:(unsigned int)a4 metalCommandQueue:(id)a5 mattingsensorConfigurationsByPortType:(id)a6 clientIsCameraOrDerivative:(BOOL)a7;

@end
