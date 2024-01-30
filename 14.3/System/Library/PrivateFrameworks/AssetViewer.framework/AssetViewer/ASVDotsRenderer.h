@protocol MTLRenderPipelineState;

@interface ASVDotsRenderer : NSObject {
    unsigned long long _pixelFormat;
    id<MTLRenderPipelineState> _pipelineState;
}

- (void).cxx_destruct;
- (id)init:(id)a0 pixelFormat:(unsigned long long)a1;
- (void)encode:(id)a0 renderCommandEncoder:(id)a1 mvp:(struct { void /* unknown type, empty encoding */ x0[4]; })a2 visibility:(float)a3 time:(double)a4;

@end
