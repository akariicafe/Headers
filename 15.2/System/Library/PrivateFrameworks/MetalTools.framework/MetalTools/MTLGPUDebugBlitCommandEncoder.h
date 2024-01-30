@class NSString;

@interface MTLGPUDebugBlitCommandEncoder : MTLToolsBlitCommandEncoder <MTLGPUDebugCommandEncoder>

@property (readonly) unsigned int encoderID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)optimizeIndirectCommandBuffer:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)copyIndirectCommandBuffer:(id)a0 sourceRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 destination:(id)a2 destinationIndex:(unsigned long long)a3;
- (id)temporaryBufferWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (id)temporaryBufferWithLength:(unsigned long long)a0;
- (id)initWithBlitCommandEncoder:(id)a0 parent:(id)a1 encoderID:(unsigned int)a2;

@end
