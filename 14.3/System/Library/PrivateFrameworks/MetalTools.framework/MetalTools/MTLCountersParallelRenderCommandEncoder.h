@class MTLRenderPassDescriptor;

@interface MTLCountersParallelRenderCommandEncoder : MTLToolsParallelRenderCommandEncoder {
    MTLRenderPassDescriptor *_descriptor;
}

- (void)dealloc;
- (id)renderCommandEncoder;
- (id)sampledRenderCommandEncoderWithProgramInfoBuffer:(union { struct { unsigned char x0 : 8; unsigned int x1 : 24; unsigned int x2; unsigned long long x3; unsigned long long x4; } x0; struct { unsigned char x0 : 8; unsigned int x1 : 24; unsigned int x2; unsigned long long x3; unsigned long long x4; } x1; } *)a0 capacity:(unsigned long long)a1;
- (void)setColorStoreAction:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)setDepthStoreAction:(unsigned long long)a0;
- (void)endEncoding;
- (void)setStencilStoreAction:(unsigned long long)a0;
- (id)initWithBaseRenderPass:(id)a0 commandBuffer:(id)a1 descriptor:(id)a2;

@end
