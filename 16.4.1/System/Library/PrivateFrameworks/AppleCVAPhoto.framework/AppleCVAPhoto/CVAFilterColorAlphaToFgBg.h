@class NSString;
@protocol MTLComputePipelineState;

@interface CVAFilterColorAlphaToFgBg : NSObject {
    id<MTLComputePipelineState> _splitFgBgKernel_rgba;
    id<MTLComputePipelineState> _splitBgKernel_rgba;
    id<MTLComputePipelineState> _splitFgKernel_rgba;
}

@property (readonly) NSString *label;

- (void)encodeToCommandBuffer:(id)a0 srcColorTex:(id)a1 srcAlphaTex:(id)a2 dstForegroundTex:(id)a3;
- (void)encodeToCommandBuffer:(id)a0 srcColorTex:(id)a1 srcAlphaTex:(id)a2 dstForegroundTex:(id)a3 dstBackgroundTex:(id)a4;
- (id)initWithDevice:(id)a0 library:(id)a1 pipelineLibrary:(id)a2 error:(id *)a3;
- (void).cxx_destruct;

@end
