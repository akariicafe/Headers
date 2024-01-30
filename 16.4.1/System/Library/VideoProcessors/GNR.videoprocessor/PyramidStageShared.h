@protocol MTLComputePipelineState;

@interface PyramidStageShared : NSObject {
    id<MTLComputePipelineState> _pipeline[2][3];
    id<MTLComputePipelineState> _rec709DownsamplePipelineState[6];
}

+ (id)sharedInstance;
+ (id)compileShader:(id)a0 lumaWrite:(BOOL)a1 chromaType:(int)a2;
+ (id)compileShader:(id)a0 kernelType:(int)a1;
+ (void)releaseSharedInstance;
+ (BOOL)isRec709DownsampleSupported;
+ (id)getSharedInstanceOrRelease:(BOOL)a0;

- (id)getPipeline:(id)a0 lumaWrite:(BOOL)a1 chromaType:(int)a2;
- (id)getRec709DownsamplePipelineState:(id)a0 kernelType:(int)a1;
- (void).cxx_destruct;

@end
