@interface MTLIOAccelCommandEncoder : _MTLCommandEncoder

- (void)pushDebugGroup:(id)a0;
- (void)popDebugGroup;
- (unsigned long long)globalTraceObjectID;
- (id)initWithCommandBuffer:(id)a0;
- (void)endEncoding;
- (void)setLabel:(id)a0;

@end
