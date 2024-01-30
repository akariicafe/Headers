@class MTLStructType, NSString, MTLPointerType;

@interface MTLBufferBindingInternal : MTLBindingInternal <MTLBufferBinding> {
    unsigned short _dataType : 15;
    unsigned char _vertexDescriptorBuffer : 1;
    unsigned short _alignment;
    unsigned int _dataSize;
    unsigned long long _pixelFormat;
    unsigned long long _aluType;
}

@property (readonly) unsigned long long bufferAlignment;
@property (readonly) unsigned long long bufferDataSize;
@property (readonly) unsigned long long bufferDataType;
@property (readonly) MTLStructType *bufferStructType;
@property (readonly) MTLPointerType *bufferPointerType;
@property (readonly) NSString *name;
@property (readonly) long long type;
@property (readonly) unsigned long long access;
@property (readonly) unsigned long long index;
@property (readonly, getter=isUsed) BOOL used;
@property (readonly, getter=isArgument) BOOL argument;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setStructType:(id)a0 doRetain:(BOOL)a1;
- (unsigned long long)bufferPixelFormat;
- (id)bufferIndirectArgumentType;
- (BOOL)isVertexDescriptorBuffer;
- (void)setAlignment:(unsigned long long)a0;
- (id)formattedDescription:(unsigned long long)a0;
- (id)structType;
- (unsigned long long)bufferALUType;
- (void)setDataSize:(unsigned long long)a0;
- (void)dealloc;
- (void)setVertexDescriptorBuffer:(BOOL)a0;
- (void)setStructType:(id)a0;
- (id)initWithName:(id)a0 type:(unsigned long long)a1 access:(unsigned long long)a2 isActive:(BOOL)a3 locationIndex:(unsigned long long)a4 arraySize:(unsigned long long)a5 dataType:(unsigned long long)a6 pixelFormat:(unsigned long long)a7 aluType:(unsigned long long)a8 isConstantBuffer:(BOOL)a9 dataSize:(unsigned long long)a10 alignment:(unsigned long long)a11;

@end
