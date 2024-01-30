@protocol MTLArgumentEncoder;

@interface MTLGPUDebugPipelineStateInfoEncoder : NSObject {
    id<MTLArgumentEncoder> _argumentEncoder;
}

@property (readonly, nonatomic) unsigned long long encodedLength;

- (id)initWithDevice:(id)a0;
- (void)setComputePipelineState:(id)a0;
- (void)setRenderPipelineState:(id)a0;
- (void)dealloc;
- (void)setArgumentBuffer:(id)a0 offset:(unsigned long long)a1;

@end
