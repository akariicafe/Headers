@class SoftISPKernelWithFunctionConstants;
@protocol MTLComputePipelineState;

@interface H13FastBayerProcShaders : NSObject

@property (readonly, nonatomic) id<MTLComputePipelineState> convertToU16;
@property (readonly, nonatomic) id<MTLComputePipelineState> convertI17ToF16;
@property (readonly, nonatomic) id<MTLComputePipelineState> convertScaledToI17;
@property (readonly, nonatomic) id<MTLComputePipelineState> hrPreprocessDSLUT;
@property (readonly, nonatomic) id<MTLComputePipelineState> hrGenerateHuemapThumbnails;
@property (readonly, nonatomic) id<MTLComputePipelineState> hrHighlightRecovery_FirstPixGR;
@property (readonly, nonatomic) id<MTLComputePipelineState> hrHighlightRecovery_FirstPixR;
@property (readonly, nonatomic) id<MTLComputePipelineState> hrHighlightRecovery_FirstPixB;
@property (readonly, nonatomic) id<MTLComputePipelineState> hrHighlightRecovery_FirstPixGB;
@property (readonly, nonatomic) id<MTLComputePipelineState> hrHighlightRecoveryQuadra_FirstPixGR;
@property (readonly, nonatomic) id<MTLComputePipelineState> hrHighlightRecoveryQuadra_FirstPixR;
@property (readonly, nonatomic) id<MTLComputePipelineState> hrHighlightRecoveryQuadra_FirstPixB;
@property (readonly, nonatomic) id<MTLComputePipelineState> hrHighlightRecoveryQuadra_FirstPixGB;
@property (readonly, nonatomic) id<MTLComputePipelineState> huemapThumbnailGeneration0;
@property (readonly, nonatomic) id<MTLComputePipelineState> huemapThumbnailGeneration0Quadra;
@property (readonly, nonatomic) id<MTLComputePipelineState> huemapMotionCompensation;
@property (readonly, nonatomic) id<MTLComputePipelineState> hrdGnuCorrectionQuadra;
@property (readonly, nonatomic) id<MTLComputePipelineState> huemap;
@property (readonly, nonatomic) SoftISPKernelWithFunctionConstants *preHR;
@property (readonly, nonatomic) SoftISPKernelWithFunctionConstants *preHRQuadra;
@property (readonly, nonatomic) SoftISPKernelWithFunctionConstants *hrdGnuCorrection;
@property (readonly, nonatomic) id<MTLComputePipelineState> hrdRedBlueFilter;
@property (readonly, nonatomic) id<MTLComputePipelineState> hrdRedBlueFilterQuadra;
@property (readonly, nonatomic) id<MTLComputePipelineState> draftDemosaicBayer;
@property (readonly, nonatomic) id<MTLComputePipelineState> draftDemosaicQuadra2x;

- (id)initWithMetalContext:(id)a0;
- (void).cxx_destruct;

@end
