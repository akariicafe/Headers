@class SoftISPKernelWithFunctionConstants;
@protocol MTLComputePipelineState;

@interface H13FastPostDemosaicProcShaders : NSObject

@property (readonly, nonatomic) SoftISPKernelWithFunctionConstants *postDemosaicProcStage_dotFix;
@property (readonly, nonatomic) id<MTLComputePipelineState> postDemosaicProcStage_directionalLowpass_YCbCr;
@property (readonly, nonatomic) id<MTLComputePipelineState> postDemosaicProcStage_directionalLowpass_RGB;
@property (readonly, nonatomic) id<MTLComputePipelineState> postDemosaicProcStage_chromaSuppression_filterQCC;
@property (readonly, nonatomic) id<MTLComputePipelineState> postDemosaicProcStage_chromaSuppression_filterQCC_Sparse;
@property (readonly, nonatomic) id<MTLComputePipelineState> postDemosaicProcStage_chromaSuppression_RGB;
@property (readonly, nonatomic) id<MTLComputePipelineState> postDemosaicProcStage_YCC4202YUV420;
@property (readonly, nonatomic) id<MTLComputePipelineState> postDemosaicProcStage_chromaSuppression_CCUV;
@property (readonly, nonatomic) id<MTLComputePipelineState> postDemosaicProcStage_chromaSuppression_CCUV_Sparse;

- (id)initWithMetalContext:(id)a0;
- (void).cxx_destruct;

@end
