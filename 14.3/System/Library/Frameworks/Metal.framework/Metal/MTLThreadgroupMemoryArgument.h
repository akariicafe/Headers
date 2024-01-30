@interface MTLThreadgroupMemoryArgument : MTLArgumentInternal {
    unsigned short _alignment;
    unsigned int _dataSize;
    unsigned long long _dataType;
}

- (void)setStructType:(id)a0;
- (id)structType;
- (unsigned long long)threadgroupMemoryDataSize;
- (id)formattedDescription:(unsigned long long)a0;
- (unsigned long long)threadgroupMemoryAlignment;
- (id)threadgroupMemoryStructType;
- (id)initWithName:(id)a0 type:(unsigned long long)a1 access:(unsigned long long)a2 isActive:(BOOL)a3 locationIndex:(unsigned long long)a4 arraySize:(unsigned long long)a5 dataType:(unsigned long long)a6 dataSize:(unsigned long long)a7 alignment:(unsigned long long)a8;
- (void)setStructType:(id)a0 doRetain:(BOOL)a1;
- (unsigned long long)threadgroupMemoryDataType;

@end
