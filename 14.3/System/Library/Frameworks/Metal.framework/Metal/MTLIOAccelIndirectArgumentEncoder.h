@interface MTLIOAccelIndirectArgumentEncoder : _MTLIndirectArgumentEncoder

@property (readonly) unsigned long long encodedLength;

- (void)setBuffer:(id)a0 offset:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)setTextures:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setSamplerState:(id)a0 atIndex:(unsigned long long)a1;
- (void)setIntersectionFunctionTable:(id)a0 atBufferIndex:(unsigned long long)a1;
- (void)setVisibleFunctionTable:(id)a0 atBufferIndex:(unsigned long long)a1;
- (void)setBuffers:(const id *)a0 offsets:(const unsigned long long *)a1 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)setTexture:(id)a0 atIndex:(unsigned long long)a1;
- (void *)constantDataAtIndex:(unsigned long long)a0;
- (void)setVisibleFunctionTables:(const id *)a0 withBufferRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setSamplerStates:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setIndirectArgumentBuffer:(id)a0 offset:(unsigned long long)a1;
- (void)setIndirectCommandBuffer:(id)a0 atIndex:(unsigned long long)a1;
- (void)setIndirectCommandBuffers:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setVisibleFunctionTable:(id)a0 atIndex:(unsigned long long)a1;
- (void)setVisibleFunctionTables:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setIntersectionFunctionTable:(id)a0 atIndex:(unsigned long long)a1;
- (void)setIntersectionFunctionTables:(const id *)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setIntersectionFunctionTables:(const id *)a0 withBufferRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
