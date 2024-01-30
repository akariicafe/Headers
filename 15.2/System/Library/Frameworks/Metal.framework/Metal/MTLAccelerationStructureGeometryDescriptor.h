@class NSString;

@interface MTLAccelerationStructureGeometryDescriptor : NSObject <NSCopying>

@property (nonatomic) unsigned long long intersectionFunctionTableOffset;
@property (nonatomic) BOOL opaque;
@property (nonatomic) BOOL allowDuplicateIntersectionFunctionInvocation;
@property (copy, nonatomic) NSString *label;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;

@end
