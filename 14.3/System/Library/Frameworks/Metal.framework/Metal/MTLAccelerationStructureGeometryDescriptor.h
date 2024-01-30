@interface MTLAccelerationStructureGeometryDescriptor : NSObject <NSCopying>

@property (nonatomic) unsigned long long intersectionFunctionTableOffset;
@property (nonatomic) BOOL opaque;
@property (nonatomic) BOOL allowDuplicateIntersectionFunctionInvocation;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
