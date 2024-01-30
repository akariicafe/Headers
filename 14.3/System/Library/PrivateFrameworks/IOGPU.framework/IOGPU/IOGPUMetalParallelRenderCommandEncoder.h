@interface IOGPUMetalParallelRenderCommandEncoder : _MTLParallelRenderCommandEncoder

- (void)pushDebugGroup:(id)a0;
- (BOOL)isMemorylessRender;
- (void)setLabel:(id)a0;
- (id)initWithCommandBuffer:(id)a0 renderPassDescriptor:(id)a1;
- (unsigned long long)getType;
- (void)endEncoding;
- (void)popDebugGroup;

@end
