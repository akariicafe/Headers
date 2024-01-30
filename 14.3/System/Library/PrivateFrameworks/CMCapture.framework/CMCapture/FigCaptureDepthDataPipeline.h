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
- (int)_buildDepthPipelineWithConfiguration:(id)a0 sourceOutput:(id)a1 graph:(id)a2 delegate:(id)a3;
- (int)_buildDepthConversionPipelineWithConfiguration:(id)a0 sourceOutput:(id)a1 graph:(id)a2 convertedDepthOutputsOut:(id *)a3;
- (int)_buildDepthDataSinkPipeline:(id)a0 sourceOutput:(id)a1 graph:(id)a2 clientAuditToken:(struct { unsigned int x0[8]; })a3 delegate:(id)a4;
- (id)initWithConfiguration:(id)a0 sourceOutput:(id)a1 graph:(id)a2 name:(id)a3 delegate:(id)a4;

@end
