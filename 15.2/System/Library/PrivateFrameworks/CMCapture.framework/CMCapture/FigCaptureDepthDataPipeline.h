@class BWPipelineStage, NSString, BWDepthConverterNode, BWNodeOutput;

@interface FigCaptureDepthDataPipeline : FigCaptureRemoteQueueSinkPipeline {
    BWDepthConverterNode *_depthDataConverterNode;
}

@property (readonly, nonatomic) NSString *sourceID;
@property (readonly, nonatomic) int sourceDeviceType;
@property (readonly, nonatomic) BWPipelineStage *pipelineStage;
@property (readonly, nonatomic) BWNodeOutput *videoAndConvertedDepthDataOutput;

+ (void)initialize;

- (void)dealloc;
- (id)initWithConfiguration:(id)a0 sourceOutput:(id)a1 graph:(id)a2 name:(id)a3 delegate:(id)a4;

@end
