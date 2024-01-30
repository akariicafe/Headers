@interface MTLIndirectArgumentDescriptor : MTLArgumentDescriptor

@property (nonatomic) unsigned long long dataType;
@property (nonatomic) unsigned long long index;
@property (nonatomic) unsigned long long arrayLength;
@property (nonatomic) unsigned long long access;
@property (nonatomic) unsigned long long textureType;
@property (nonatomic) unsigned long long constantBlockAlignment;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)indirectArgumentDescriptor;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
