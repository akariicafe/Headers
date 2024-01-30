@interface MTLBufferArgument : MTLArgumentInternal {
    unsigned short _dataType : 15;
    unsigned char _vertexDescriptorBuffer : 1;
    unsigned short _alignment;
    unsigned int _dataSize;
    unsigned long long _pixelFormat;
    unsigned long long _aluType;
}

- (unsigned long long)bufferDataSize;
- (id)bufferIndirectArgumentType;
- (id)bufferPointerType;
- (unsigned long long)bufferPixelFormat;
- (void)setDataSize:(unsigned long long)a0;
- (id)structType;
- (void)setStructType:(id)a0;
- (unsigned long long)bufferDataType;
- (unsigned long long)bufferAlignment;
- (void)setStructType:(id)a0 doRetain:(BOOL)a1;
- (unsigned long long)bufferALUType;
- (BOOL)isVertexDescriptorBuffer;
- (id)bufferStructType;
- (void)setAlignment:(unsigned long long)a0;
- (id)initWithName:(id)a0 type:(unsigned long long)a1 access:(unsigned long long)a2 isActive:(BOOL)a3 locationIndex:(unsigned long long)a4 arraySize:(unsigned long long)a5 dataType:(unsigned long long)a6 pixelFormat:(unsigned long long)a7 aluType:(unsigned long long)a8 isConstantBuffer:(BOOL)a9 dataSize:(unsigned long long)a10 alignment:(unsigned long long)a11;
- (id)formattedDescription:(unsigned long long)a0;
- (void)dealloc;
- (void)setVertexDescriptorBuffer:(BOOL)a0;

@end
