@class LKTFlowGPU;
@protocol MTLComputePipelineState, MTLDevice, MTLTexture;

@interface PTOpticalFlow : NSObject {
    id<MTLDevice> _device;
    id<MTLComputePipelineState> _warpTexture;
    LKTFlowGPU *_lktflowgpuContext;
    id<MTLTexture> _displacementFWD;
    int _colorWidth;
    int _colorHeight;
    BOOL _allocateDisplacementFWD;
    BOOL _inverseFlow;
}

- (void).cxx_destruct;
- (void)reset;
- (id)displacementFWD;
- (id)toTextureArray:(id)a0;
- (short)estimateDisplacementFWD:(id)a0 sourceRGBA:(id)a1 destRGBA:(id)a2;
- (short)estimateDisplacementStream:(id)a0 destRGBA:(id)a1 outDisplacement:(id)a2;
- (short)estimateDisplacementStream:(id)a0 index:(int)a1 doOpticalFlow:(BOOL)a2 destRGBA:(id)a3;
- (id)initWithDevice:(id)a0 colorSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1 lktPreset:(long long)a2;
- (id)initWithDevice:(id)a0 colorSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1 lktPreset:(long long)a2 allocateDisplacementFWD:(BOOL)a3 needConversionBGRA2YUVA:(BOOL)a4 inverseFlow:(BOOL)a5;
- (short)setDisplacementFWD:(id)a0;
- (short)warp:(id)a0 inTexture:(id)a1 inDisplacement:(id)a2 outTextureWarped:(id)a3;

@end
