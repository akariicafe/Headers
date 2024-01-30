@interface MTLHeapDescriptor : NSObject <NSCopying>

@property (nonatomic) unsigned long long size;
@property (nonatomic) unsigned long long storageMode;
@property (nonatomic) unsigned long long cpuCacheMode;
@property (nonatomic) long long sparsePageSize;
@property (nonatomic) unsigned long long hazardTrackingMode;
@property (nonatomic) unsigned long long resourceOptions;
@property (nonatomic) long long type;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
