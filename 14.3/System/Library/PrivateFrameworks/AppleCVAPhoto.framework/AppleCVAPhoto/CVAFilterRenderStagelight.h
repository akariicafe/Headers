@class NSString;
@protocol MTLComputePipelineState;

@interface CVAFilterRenderStagelight : NSObject {
    id<MTLComputePipelineState> _renderingStageLightKernel_bothCubes;
    id<MTLComputePipelineState> _renderingStageLightKernel_proxyCube;
    id<MTLComputePipelineState> _renderingStageLightKernel_cube;
    id<MTLComputePipelineState> _renderingStageLightKernel_noCube;
}

@property (readonly) NSString *label;

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 library:(id)a1 pipelineLibrary:(id)a2 error:(id *)a3;
- (void)encodeToCommandBuffer:(id)a0 srcColorTex:(id)a1 srcAlphaTex:(id)a2 dstYTex:(id)a3 dstUVTex:(id)a4 stageLightProxyLut:(id)a5 stageLightLut:(id)a6 blackBackgroundIntensity:(float)a7 vignetteIntensity:(float)a8;

@end
