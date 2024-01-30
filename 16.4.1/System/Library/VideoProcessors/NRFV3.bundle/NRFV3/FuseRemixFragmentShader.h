@class NSString;
@protocol MTLRenderPipelineState;

@interface FuseRemixFragmentShader : NSObject {
    id<MTLRenderPipelineState> _pipeline;
    NSString *_fragName;
}

- (void).cxx_destruct;
- (id)initWithMetal:(id)a0 fragName:(id)a1 pixelFormat:(unsigned long long)a2 noisePixelFormat:(unsigned long long)a3 isFirstBatch:(BOOL)a4 isLastBatch:(BOOL)a5 usePatchBasedFusion:(BOOL)a6 useGpuCSC:(BOOL)a7 ggmEnabled:(BOOL)a8;

@end
