@class FigMetalContext;
@protocol MTLComputePipelineState;

@interface CMIDraftDemosaicStage : NSObject {
    FigMetalContext *_metal;
    id<MTLComputePipelineState> _draftDemosaicSingleChannelBayerPipeline;
    id<MTLComputePipelineState> _draftDemosaicMultiChannelBayerPipeline;
    id<MTLComputePipelineState> _draftDemosaicSingleChannelQuadra4xPipeline;
    id<MTLComputePipelineState> _draftDemosaicSingleChannelQuadra2xPipeline;
}

+ (int)prewarmShaders:(id)a0;

- (int)_compileShaders;
- (id)initWithMetalContext:(id)a0;
- (void).cxx_destruct;
- (int)getDraftDemosaicModeWithCFALayout:(id)a0 inputDims:(SEL)a1 outputDims:(int)a2;
- (int)runWithBayerInputTex:(id)a0 outputTex:(SEL)a1 inputCropOrigin:(id)a2 inputCropSize:(id)a3;
- (int)runWithInputTex:(id)a0 outputTex:(id)a1 cfaLayout:(int)a2;
- (int)runWithInputTex:(id)a0 outputTex:(SEL)a1 cfaLayout:(id)a2 inputCropOrigin:(id)a3 inputCropSize:(int)a4 outputCropOrigin:(void *)a5 outputCropSize:(void *)a6;
- (int)runWithQuadraInputTex:(id)a0 outputTex:(SEL)a1 mode:(id)a2 inputCropOrigin:(id)a3 inputCropSize:(int)a4;

@end
