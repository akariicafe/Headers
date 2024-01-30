@protocol MTLComputePipelineState;

@interface PyramidStageShared_NRF : NSObject {
    id<MTLComputePipelineState> _pipeline[2][2];
    id<MTLComputePipelineState> _rec709DownsamplePipelineState[12];
}

+ (id)sharedInstance;
+ (id)compileShader:(id)a0 kernelType:(int)a1;
+ (void)releaseSharedInstance;
+ (BOOL)isRec709DownsampleSupported;
+ (id)getSharedInstanceOrRelease:(BOOL)a0;
+ (id)compileShader:(id)a0 lumaWrite:(BOOL)a1 chromaWrite:(BOOL)a2;

- (id)getRec709DownsamplePipelineState:(id)a0 kernelType:(int)a1;
- (void).cxx_destruct;
- (id)getPipeline:(id)a0 lumaWrite:(BOOL)a1 chromaWrite:(BOOL)a2;

@end
