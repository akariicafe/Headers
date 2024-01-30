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

- (void)enablePrepareTimeAllocationsForDeferredPrepare;
- (void)dealloc;

@end
