@class MTKView, NSMutableArray;
@protocol MTLRenderPipelineState, MTLDevice, MTLLibrary, MTLCommandQueue, MTLComputePipelineState;

@interface MTLSplineRenderer : NSObject {
    float _edgeFactor;
    float _insideFactor;
    MTKView *_view;
    id<MTLDevice> _device;
    id<MTLLibrary> _library;
    id<MTLCommandQueue> _commandQueue;
    id<MTLComputePipelineState> _computeTessellationFactorsPipeline;
    id<MTLRenderPipelineState> _renderPostTessellationPipelineState;
}

@property (retain) NSMutableArray *dataCollection;
@property struct { void /* unknown type, empty encoding */ columns[4]; } projectionMatrix;
@property unsigned long long triangleFillMode;

- (id)init;
- (void).cxx_destruct;
- (id)initWithMTKView:(id)a0 dataCollection:(id)a1;
- (void)createPipelineStates;
- (void)renderWithCommandBuffer:(id)a0;
- (void)computeTessellationFactors:(id)a0 data:(id)a1;
- (void)renderPostTessellation:(id)a0 data:(id)a1;
- (void)renderToTextureWithCommandBuffer:(id)a0 texture:(id)a1;

@end
