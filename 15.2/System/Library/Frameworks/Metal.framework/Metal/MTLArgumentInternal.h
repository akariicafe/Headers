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

- (unsigned long long)indirectConstantDataSize;
- (unsigned long long)indirectConstantDataType;
- (unsigned long long)bufferDataSize;
- (id)bufferIndirectArgumentType;
- (unsigned long long)threadgroupMemoryDataSize;
- (id)bufferPointerType;
- (unsigned long long)index;
- (unsigned long long)arrayLength;
- (id)initWithName:(id)a0 type:(unsigned long long)a1 access:(unsigned long long)a2 index:(unsigned long long)a3 active:(BOOL)a4 arrayLength:(unsigned long long)a5;
- (unsigned long long)threadgroupMemoryAlignment;
- (id)structType;
- (id)dataTypeDescription;
- (unsigned long long)bufferDataType;
- (unsigned long long)textureDataType;
- (unsigned long long)bufferAlignment;
- (id)initWithName:(id)a0 type:(unsigned long long)a1 access:(unsigned long long)a2 index:(unsigned long long)a3 active:(BOOL)a4 arrayLength:(unsigned long long)a5 typeDescription:(id)a6;
- (unsigned long long)textureType;
- (unsigned long long)indirectConstantAlignment;
- (unsigned long long)access;
- (id)bufferStructType;
- (BOOL)isActive;
- (id)description;
- (id)formattedDescription:(unsigned long long)a0;
- (id)name;
- (unsigned long long)type;
- (void)dealloc;

@end
