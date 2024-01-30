@interface MTLPointerType : MTLType

@property (readonly) unsigned long long elementType;
@property (readonly) unsigned long long access;
@property (readonly) unsigned long long alignment;
@property (readonly) unsigned long long dataSize;
@property (readonly) BOOL elementIsArgumentBuffer;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)alloc;

- (id)elementArrayType;
- (id)elementStructType;

@end
