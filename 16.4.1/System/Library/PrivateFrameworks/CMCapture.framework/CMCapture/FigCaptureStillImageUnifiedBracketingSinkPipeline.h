@class NSString, NSArray, BWCompressedShotBufferNode, BWStillImageSampleBufferSinkNode, BWStillImageCoordinatorNode, BWPortraitHDRStagingNode, BWDepthConverterNode, BWStillImageBravoDisparityNode;

@interface FigCaptureStillImageUnifiedBracketingSinkPipeline : FigCaptureSinkPipeline <FigCaptureStillImageSinkPipeline> {
    unsigned int _pipelineStagePriority;
    unsigned int _inferencePriority;
    BWStillImageCoordinatorNode *_stillImageCoordinatorNode;
    BWCompressedShotBufferNode *_compressedShotBufferNode;
    BWStillImageSampleBufferSinkNode *_stillImageSinkNode;
    BWStillImageBravoDisparityNode *_stillImageDisparityNode;
    BWDepthConverterNode *_stillImageDepthConverterNode;
    BWPortraitHDRStagingNode *_portraitHDRStagingNode;
}

@property (readonly, nonatomic) NSArray *nodes;
@property (readonly, nonatomic) NSString *sinkID;
@property (readonly, nonatomic) BWStillImageCoordinatorNode *stillImageCoordinatorNode;
@property (readonly, nonatomic) BWCompressedShotBufferNode *compressedShotBufferNode;
@property (readonly, nonatomic) BWStillImageSampleBufferSinkNode *stillImageSinkNode;
@property (readonly, nonatomic) BWPortraitHDRStagingNode *portraitHDRStagingNode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)enablePrepareTimeAllocationsForDeferredPrepare;
- (void)dealloc;
- (id)initWithConfiguration:(id)a0 captureDevice:(id)a1 sourceOutputsByPortType:(id)a2 sourceSensorRawOutputsByPortType:(id)a3 highResStillImageDimensions:(id)a4 supplementalPointCloudCaptureDevice:(id)a5 supplementalPointCloudSourceOutput:(id)a6 captureStatusDelegate:(id)a7 inferenceScheduler:(id)a8 graph:(id)a9 name:(id)a10;

@end
