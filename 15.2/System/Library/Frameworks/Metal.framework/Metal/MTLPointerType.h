@interface MTLPointerType : MTLType

@property (readonly) unsigned long long elementType;
@property (readonly) unsigned long long access;
@property (readonly) unsigned long long alignment;
@property (readonly) unsigned long long dataSize;
@property (readonly) BOOL elementIsArgumentBuffer;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)elementStructType;
- (id)elementArrayType;

@end
