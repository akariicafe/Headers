@class NSString;
@protocol MTLComputePipelineState;

@interface CVAFilterRenderComposite : NSObject {
    id<MTLComputePipelineState> _renderingCompositeFixUpAddNoiseKernel;
    id<MTLComputePipelineState> _renderingCompositeFixupAndBGColorMapKernel;
    id<MTLComputePipelineState> _renderingCompositeFixupAndFGColorMapKernel;
    id<MTLComputePipelineState> _renderingCompositeFixupAndColorMapKernel;
    id<MTLComputePipelineState> _renderingCompositeApplyColorCubes;
}

@property (readonly) NSString *label;

- (void)encodeToCommandBuffer:(id)a0 srcForegroundTex:(id)a1 srcBackgroundTex:(id)a2 srcCocTex:(id)a3 dstYTex:(id)a4 dstUVTex:(id)a5 fgColorLut:(id)a6 bgColorLut:(id)a7 frameNumber:(unsigned int)a8 seedGeneratorFactor:(unsigned int)a9 noiseBits:(int)a10 noiseBitsFactor:(float)a11 cubeIntensity:(float)a12 maxBlurRadius:(struct optional<float> { BOOL x0; float x1; })a13;
- (void)encodeColorCubesToCommandBuffer:(id)a0 sdofYTexture:(id)a1 sdofUVTexture:(id)a2 alphaTexture:(id)a3 fgColorLut:(id)a4 bgColorLut:(id)a5 dstColorTex:(id)a6 dstColorTex_plane1:(id)a7;
- (id)initWithDevice:(id)a0 library:(id)a1 pipelineLibrary:(id)a2 error:(id *)a3;
- (void).cxx_destruct;

@end
