@class NSString;
@protocol MTLComputePipelineState;

@interface CVAFilterRenderComposite : NSObject {
    id<MTLComputePipelineState> _renderingCompositeFixUpAddNoiseKernel;
    id<MTLComputePipelineState> _renderingCompositeFixupAndBGColorMapKernel;
    id<MTLComputePipelineState> _renderingCompositeFixupAndFGColorMapKernel;
    id<MTLComputePipelineState> _renderingCompositeFixupAndColorMapKernel;
}

@property (readonly) NSString *label;

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 library:(id)a1 pipelineLibrary:(id)a2 error:(id *)a3;
- (void)encodeToCommandBuffer:(id)a0 srcForegroundTex:(id)a1 srcBackgroundTex:(id)a2 srcCocTex:(id)a3 dstYTex:(id)a4 dstUVTex:(id)a5 fgColorLut:(id)a6 bgColorLut:(id)a7 frameNumber:(unsigned int)a8 seedGeneratorFactor:(unsigned int)a9 noiseBits:(int)a10 noiseBitsFactor:(float)a11 cubeIntensity:(float)a12 maxBlurRadius:(struct optional<float> { BOOL x0; struct aligned_storage<float> { union dummy_u { char x0[4]; struct a4 { } x1; } x0; } x1; })a13;

@end
