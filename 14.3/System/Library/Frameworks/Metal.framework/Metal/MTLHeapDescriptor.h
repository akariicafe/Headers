@interface MTLHeapDescriptor : NSObject <NSCopying>

@property (nonatomic) unsigned long long size;
@property (nonatomic) unsigned long long storageMode;
@property (nonatomic) unsigned long long cpuCacheMode;
@property (nonatomic) unsigned long long hazardTrackingMode;
@property (nonatomic) unsigned long long resourceOptions;
@property (nonatomic) long long type;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)alloc;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
