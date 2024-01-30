@interface MTLAccelerationStructureAllocationDescriptor : NSObject <NSCopying>

@property (nonatomic) unsigned long long storageMode;
@property (nonatomic) BOOL forceResourceIndex;
@property (nonatomic) unsigned long long resourceIndex;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;

@end
