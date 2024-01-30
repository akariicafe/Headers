@interface MPSGraphCreateSparseOpDescriptor : NSObject <NSCopying>

@property (nonatomic) unsigned long long sparseStorageType;
@property (nonatomic) unsigned int dataType;

+ (id)descriptorWithStorageType:(unsigned long long)a0 dataType:(unsigned int)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
