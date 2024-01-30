@interface CPFontKerning : NSObject <CPDisposable> {
    struct __CFData { } *kernTable;
    const char *dataPtr;
    unsigned int offset;
    unsigned int kernTableLength;
    struct __CFDictionary { } *kernDictionary;
    BOOL override;
    BOOL valid;
}

- (void)dealloc;
- (void)dispose;
- (void)finalize;
- (void)doTable;
- (unsigned char)readByte;
- (unsigned int)readUnsignedLong;
- (id)initWithKernData:(struct __CFData { } *)a0;
- (unsigned short)readUnsignedShort;
- (void)doKerningPair;
- (void)doSubtableFormat0;
- (void)doSubtableFormat1;
- (void)doSubtableFormat2;
- (void)doSubtableFormat3;
- (void)doOTSubtable;
- (void)doTTSubtable;
- (id)initWithCGFont:(struct CGFont { } *)a0;
- (short)readShort;
- (struct __CFDictionary { } *)createKernTable;

@end
