@class CLKDevice, NTKPromise;

@interface NTKPrideMetalQuad : CLKUIQuad {
    double _currentTime;
    double _renderUntil;
    NTKPromise *_mtlPipelineState;
    NTKPromise *_mtlComputePipelineState;
    CLKDevice *_clkDevice;
    double _startTime;
}

@property (nonatomic) float timeScale;

- (void).cxx_destruct;
- (void)dealloc;
- (double)currentTime;
- (id)clkDevice;
- (BOOL)preSemaphoreComputeForTime:(double)a0;
- (id)renderPipelineManager;
- (id)vertexShaderName;
- (id)fragmentShaderName;
- (id)renderPipelineName;
- (BOOL)additiveBlendingEnabled;
- (void)renderWithEncoder:(id)a0;
- (id)computePipelineManager;
- (id)computeShaderName;
- (void)loadMetalTexturesAndBuffersWithDevice:(id)a0;
- (void)computeWithEncoder:(id)a0 pipelineState:(id)a1;
- (BOOL)postSemaphoreComputeForTime:(double)a0;
- (id)initWithDevice:(id)a0 initialSemaphoreCount:(int)a1;
- (void)setupForQuadView:(id)a0;
- (void)performOffscreenPassesWithCommandBuffer:(id)a0;
- (void)renderForDisplayWithEncoder:(id)a0;
- (void)handleScreenOff;
- (BOOL)prepareForTime:(double)a0;

@end
