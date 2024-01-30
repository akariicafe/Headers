@interface IOGPUMetalParallelRenderCommandEncoder : _MTLParallelRenderCommandEncoder

- (void)endEncoding;
- (BOOL)isMemorylessRender;
- (void)popDebugGroup;
- (void)pushDebugGroup:(id)a0;
- (unsigned long long)getType;
- (void)setLabel:(id)a0;
- (id)initWithCommandBuffer:(id)a0 renderPassDescriptor:(id)a1;

@end
