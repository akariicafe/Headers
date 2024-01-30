@interface MTLAttributeDescriptor : NSObject <NSCopying>

@property (nonatomic) unsigned long long format;
@property (nonatomic) unsigned long long offset;
@property (nonatomic) unsigned long long bufferIndex;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)alloc;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
