@class FigMetalContext;
@protocol MTLComputePipelineState;

@interface ANEDepthScalingProcessor : NSObject {
    id<MTLComputePipelineState> _aneScalerComputePipelinesState;
    FigMetalContext *_mtlContext;
}

- (id)initWithMetalContext:(id)a0;
- (void).cxx_destruct;
- (int)_compileShaders;
- (int)scaleFromDepth:(id)a0 toDisparity:(id)a1;

@end
