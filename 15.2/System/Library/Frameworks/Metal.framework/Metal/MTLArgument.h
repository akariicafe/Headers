@class NSString, MTLStructType, MTLPointerType;

@interface MTLArgument : NSObject

@property (readonly) MTLArgument *bufferIndirectArgumentType;
@property (readonly) unsigned long long indirectConstantAlignment;
@property (readonly) unsigned long long indirectConstantDataSize;
@property (readonly) unsigned long long indirectConstantDataType;
@property (readonly) NSString *name;
@property (readonly) unsigned long long type;
@property (readonly) unsigned long long access;
@property (readonly) unsigned long long index;
@property (readonly, getter=isActive) BOOL active;
@property (readonly) unsigned long long bufferAlignment;
@property (readonly) unsigned long long bufferDataSize;
@property (readonly) unsigned long long bufferDataType;
@property (readonly) MTLStructType *bufferStructType;
@property (readonly) MTLPointerType *bufferPointerType;
@property (readonly) unsigned long long threadgroupMemoryAlignment;
@property (readonly) unsigned long long threadgroupMemoryDataSize;
@property (readonly) unsigned long long textureType;
@property (readonly) unsigned long long textureDataType;
@property (readonly) BOOL isDepthTexture;
@property (readonly) unsigned long long arrayLength;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;


@end
