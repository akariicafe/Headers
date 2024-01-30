@class SoftISPKernelWithFunctionConstants;
@protocol MTLComputePipelineState;

@interface H13FastDemosaicShaders : NSObject

@property (readonly, nonatomic) id<MTLComputePipelineState> zimmerDemosaicStage_Bayer_RB_RGB;
@property (readonly, nonatomic) id<MTLComputePipelineState> zimmerDemosaicStage_Stacked_RGGB_YCbCr;
@property (readonly, nonatomic) id<MTLComputePipelineState> zimmerDemosaicStage_Stacked_BGGR_YCbCr;
@property (readonly, nonatomic) id<MTLComputePipelineState> zimmerDemosaicStage_Stacked_RGGB_RGB;
@property (readonly, nonatomic) id<MTLComputePipelineState> zimmerDemosaicStage_Stacked_BGGR_RGB;
@property (readonly, nonatomic) id<MTLComputePipelineState> zimmerDemosaicPackStage;
@property (readonly, nonatomic) id<MTLComputePipelineState> ispQDEMRedBlueStage_RGB;
@property (readonly, nonatomic) id<MTLComputePipelineState> ispQDEMRedBlueStage_YCbCr;
@property (readonly, nonatomic) id<MTLComputePipelineState> convertToSingleChannel;
@property (readonly, nonatomic) SoftISPKernelWithFunctionConstants *ispQDEMGreenStage;

- (id)initWithMetalContext:(id)a0;
- (void).cxx_destruct;

@end
