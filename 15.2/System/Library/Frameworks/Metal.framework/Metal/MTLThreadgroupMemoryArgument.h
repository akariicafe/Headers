@interface MTLThreadgroupMemoryArgument : MTLArgumentInternal {
    unsigned short _alignment;
    unsigned int _dataSize;
    unsigned long long _dataType;
}

- (unsigned long long)threadgroupMemoryDataSize;
- (unsigned long long)threadgroupMemoryAlignment;
- (id)structType;
- (void)setStructType:(id)a0;
- (id)threadgroupMemoryStructType;
- (void)setStructType:(id)a0 doRetain:(BOOL)a1;
- (id)formattedDescription:(unsigned long long)a0;
- (unsigned long long)threadgroupMemoryDataType;
- (id)initWithName:(id)a0 type:(unsigned long long)a1 access:(unsigned long long)a2 isActive:(BOOL)a3 locationIndex:(unsigned long long)a4 arraySize:(unsigned long long)a5 dataType:(unsigned long long)a6 dataSize:(unsigned long long)a7 alignment:(unsigned long long)a8;

@end
