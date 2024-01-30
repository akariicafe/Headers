@class MTLType;

@interface MTLPointerTypeInternal : MTLPointerType {
    unsigned long long _dataType;
    unsigned long long _elementType;
    MTLType *_elementTypeInfo;
    unsigned long long _access;
    unsigned long long _alignment;
    unsigned long long _dataSize;
    BOOL _elementIsArgumentBuffer;
    BOOL _isConstantBuffer;
    BOOL _doRetain;
}

- (id)structType;
- (id)formattedDescription:(unsigned long long)a0;
- (unsigned long long)access;
- (unsigned long long)alignment;
- (unsigned long long)dataSize;
- (id)elementArrayType;
- (void)dealloc;
- (BOOL)isConstantBuffer;
- (unsigned long long)elementType;
- (id)initWithElementType:(unsigned long long)a0 elementTypeDescription:(id)a1 access:(unsigned long long)a2 alignment:(unsigned long long)a3 dataSize:(unsigned long long)a4 elementIsIndirectArgumentBuffer:(BOOL)a5 isConstantBuffer:(BOOL)a6 doRetain:(BOOL)a7;
- (unsigned long long)dataType;
- (BOOL)elementIsIndirectArgumentBuffer;
- (id)initWithElementType:(unsigned long long)a0 elementTypeDescription:(id)a1 access:(unsigned long long)a2 alignment:(unsigned long long)a3 dataSize:(unsigned long long)a4 elementIsIndirectArgumentBuffer:(BOOL)a5 isConstantBuffer:(BOOL)a6;
- (BOOL)elementIsArgumentBuffer;
- (id)elementStructType;
- (id)elementTypeDescription;
- (void)setAlignment:(unsigned long long)a0 dataSize:(unsigned long long)a1;

@end
