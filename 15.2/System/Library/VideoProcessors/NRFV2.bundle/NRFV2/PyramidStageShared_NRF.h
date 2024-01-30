@protocol MTLComputePipelineState;

@interface PyramidStageShared_NRF : NSObject {
    id<MTLComputePipelineState> _pipeline[2][2];
    id<MTLComputePipelineState> _rec709DownsamplePipelineState[12];
}

+ (id)sharedInstance;
+ (void)releaseSharedInstance;
+ (id)getSharedInstanceOrRelease:(BOOL)a0;
+ (id)compileShader:(id)a0 lumaWrite:(BOOL)a1 chromaWrite:(BOOL)a2;
+ (id)compileShader:(id)a0 kernelType:(int)a1;
+ (BOOL)isRec709DownsampleSupported;

- (void).cxx_destruct;
- (id)getPipeline:(id)a0 lumaWrite:(BOOL)a1 chromaWrite:(BOOL)a2;
- (id)getRec709DownsamplePipelineState:(id)a0 kernelType:(int)a1;

@end
