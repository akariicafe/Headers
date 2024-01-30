@class MTLRenderPassDescriptor;

@interface MTLGPUDebugParallelRenderCommandEncoder : MTLToolsParallelRenderCommandEncoder {
    unsigned int _encoderID;
    MTLRenderPassDescriptor *_descriptor;
}

- (void)dealloc;
- (id)renderCommandEncoder;
- (id)initWithParallelRenderCommandEncoder:(id)a0 parent:(id)a1 descriptor:(id)a2 encoderID:(unsigned int)a3;

@end
