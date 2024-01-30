@class NSString;
@protocol MTLRenderPipelineState;

@interface DenoiseRemixFragmentShader : NSObject {
    id<MTLRenderPipelineState> _pipeline;
    NSString *_fragName;
}

- (void).cxx_destruct;
- (id)initWithMetal:(id)a0 vertFunc:(id)a1 fragName:(id)a2 constantValues:(id)a3 pixelFormat:(unsigned long long)a4 pixelFormat2:(unsigned long long)a5;

@end
