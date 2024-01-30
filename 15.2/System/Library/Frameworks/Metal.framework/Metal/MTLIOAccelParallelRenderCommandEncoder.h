@interface MTLIOAccelParallelRenderCommandEncoder : _MTLParallelRenderCommandEncoder

- (void)pushDebugGroup:(id)a0;
- (void)popDebugGroup;
- (unsigned long long)getType;
- (BOOL)isMemorylessRender;
- (void)endEncoding;
- (void)setLabel:(id)a0;
- (id)initWithCommandBuffer:(id)a0 renderPassDescriptor:(id)a1;

@end
