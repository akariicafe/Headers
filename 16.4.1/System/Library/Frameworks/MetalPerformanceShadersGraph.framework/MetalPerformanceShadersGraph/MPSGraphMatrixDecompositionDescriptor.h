@interface MPSGraphMatrixDecompositionDescriptor : NSObject <NSCopying>

@property (nonatomic) unsigned long long decompositionType;
@property (nonatomic) unsigned int dataType;

+ (id)descriptorWithDecompositionType:(unsigned long long)a0 dataType:(unsigned int)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
