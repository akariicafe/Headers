@interface MTLIOAccelCommandEncoder : _MTLCommandEncoder

- (unsigned long long)globalTraceObjectID;
- (void)pushDebugGroup:(id)a0;
- (id)initWithCommandBuffer:(id)a0;
- (void)setLabel:(id)a0;
- (void)endEncoding;
- (void)popDebugGroup;

@end
