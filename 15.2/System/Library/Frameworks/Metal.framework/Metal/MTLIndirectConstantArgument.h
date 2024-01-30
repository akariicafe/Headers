@interface MTLIndirectConstantArgument : MTLArgumentInternal {
    unsigned short _dataType;
    unsigned short _alignment;
    unsigned short _dataSize;
    unsigned long long _pixelFormat;
    unsigned long long _aluType;
}

- (unsigned long long)indirectConstantDataSize;
- (unsigned long long)indirectConstantDataType;
- (unsigned long long)bufferPixelFormat;
- (unsigned long long)bufferALUType;
- (unsigned long long)indirectConstantAlignment;
- (id)formattedDescription:(unsigned long long)a0;
- (void)dealloc;
- (id)initWithName:(id)a0 type:(unsigned long long)a1 access:(unsigned long long)a2 isActive:(BOOL)a3 locationIndex:(unsigned long long)a4 dataType:(unsigned long long)a5 pixelFormat:(unsigned long long)a6 aluType:(unsigned long long)a7 dataSize:(unsigned long long)a8 alignment:(unsigned long long)a9;

@end
