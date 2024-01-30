@class FigMetalContext;
@protocol MTLComputePipelineState;

@interface ANEDepthScalingProcessor : NSObject {
    id<MTLComputePipelineState> _aneScalerComputePipelinesState;
    FigMetalContext *_mtlContext;
}

- (void).cxx_destruct;
- (id)initWithMetalContext:(id)a0;
- (int)_compileShaders;
- (int)scaleFromDepth:(id)a0 toDisparity:(id)a1;

@end
