@interface IOGPUMetalCommandEncoder : _MTLCommandEncoder

- (void)endEncoding;
- (void)popDebugGroup;
- (id)initWithCommandBuffer:(id)a0;
- (unsigned long long)globalTraceObjectID;
- (void)pushDebugGroup:(id)a0;
- (void)setLabel:(id)a0;

@end
