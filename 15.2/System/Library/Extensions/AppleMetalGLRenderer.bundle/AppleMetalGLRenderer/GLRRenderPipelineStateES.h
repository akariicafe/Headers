@protocol MTLRenderPipelineStateSPI;

@interface GLRRenderPipelineStateES : NSObject {
    struct { id<MTLRenderPipelineStateSPI> renderPipelineState; struct { unsigned char fragmentUsesDiscard : 1; unsigned char fragmentWritesSampleMask : 1; unsigned char fragmentWritesDepth : 1; unsigned char vertexRegisterSpill : 1; unsigned char fragmentRegisterSpill : 1; unsigned char fragmentReadsFramebufferValues : 1; unsigned char fragmentPunchThrough : 1; unsigned char vertexWritesPointSize : 1; unsigned char private2 : 1; unsigned long reserved : 55; } usageFlags; } _internal;
}

- (void)dealloc;
- (id)initWithPipelineState:(id)a0 reflection:(id)a1;

@end
