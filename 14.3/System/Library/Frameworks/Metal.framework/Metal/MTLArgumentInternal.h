@class MTLStructType, NSString, MTLType;

@interface MTLArgumentInternal : MTLArgument {
    NSString *_name;
    unsigned long long _type;
    unsigned long long _access;
    unsigned long long _index;
    BOOL _active;
    unsigned long long _arrayLength;
    MTLType *_typeInfo;
}

@property (readonly) unsigned long long bufferPixelFormat;
@property (readonly) unsigned long long bufferALUType;
@property (readonly) MTLStructType *structType;

- (unsigned long long)bufferDataSize;
- (id)initWithName:(id)a0 type:(unsigned long long)a1 access:(unsigned long long)a2 index:(unsigned long long)a3 active:(BOOL)a4 arrayLength:(unsigned long long)a5;
- (id)dataTypeDescription;
- (id)structType;
- (unsigned long long)threadgroupMemoryDataSize;
- (id)initWithName:(id)a0 type:(unsigned long long)a1 access:(unsigned long long)a2 index:(unsigned long long)a3 active:(BOOL)a4 arrayLength:(unsigned long long)a5 typeDescription:(id)a6;
- (unsigned long long)textureType;
- (id)formattedDescription:(unsigned long long)a0;
- (unsigned long long)indirectConstantDataSize;
- (unsigned long long)access;
- (id)bufferIndirectArgumentType;
- (unsigned long long)indirectConstantDataType;
- (unsigned long long)indirectConstantAlignment;
- (unsigned long long)threadgroupMemoryAlignment;
- (unsigned long long)textureDataType;
- (id)bufferStructType;
- (unsigned long long)arrayLength;
- (id)bufferPointerType;
- (unsigned long long)bufferAlignment;
- (unsigned long long)bufferDataType;
- (unsigned long long)index;
- (void)dealloc;
- (BOOL)isActive;
- (id)description;
- (unsigned long long)type;
- (id)name;

@end
