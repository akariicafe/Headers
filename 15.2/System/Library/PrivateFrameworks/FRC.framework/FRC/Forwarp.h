@protocol MTLComputePipelineState;

@interface Forwarp : FRCMetalBase {
    id<MTLComputePipelineState> _updateBest;
    id<MTLComputePipelineState> _updateOutput;
    id<MTLComputePipelineState> _convert2Texture;
    id<MTLComputePipelineState> _initializeBest;
}

@property (nonatomic) BOOL isLiteSynthesis;

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)setupMetal;
- (id)initWithDevice:(id)a0 commmandQueue:(id)a1 isLiteSynthesis:(BOOL)a2;
- (id)createBestBufferWidth:(unsigned long long)a0 height:(unsigned long long)a1;
- (id)createOutputBufferWidth:(unsigned long long)a0 height:(unsigned long long)a1 channels:(unsigned long long)a2;
- (void)encodeToCommandBuffer:(id)a0 input:(id)a1 flow:(id)a2 error:(id)a3 timeScale:(float)a4 fullWarp:(BOOL)a5 bestError:(id)a6 output:(id)a7 destination:(id)a8;
- (void)encodeUpdateBestToCommandBuffer:(id)a0 flow:(id)a1 error:(id)a2 timeScale:(float)a3 bestError:(id)a4;
- (void)encodeInitialieBestToCommandBuffer:(id)a0 bestError:(id)a1;
- (void)encodeUpdateOutputToCommandBuffer:(id)a0 input:(id)a1 flow:(id)a2 error:(id)a3 timeScale:(float)a4 fullWarp:(BOOL)a5 bestError:(id)a6 output:(id)a7;
- (void)encodeToCommandBuffer:(id)a0 input:(id)a1 flow:(id)a2 error:(id)a3 timeScale:(float)a4 fullWarp:(BOOL)a5 bestError:(id)a6 outputBuffer:(id)a7;
- (void)encodeNormalizationToCommandBuffer:(id)a0 fromBuffer:(id)a1 toTexture:(id)a2 inputSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a3;
- (void)allocateBuffersWidth:(unsigned long long)a0 height:(unsigned long long)a1 channels:(unsigned long long)a2 bestBuffer:(id *)a3 outputBuffer:(id *)a4;
- (void)updateBest:(id)a0 error:(id)a1 timeScale:(float)a2 best:(id)a3;
- (void)updateOutput:(id)a0 flow:(id)a1 error:(id)a2 timeScale:(float)a3 fullWarp:(BOOL)a4 bestError:(id)a5 output:(id)a6;

@end
