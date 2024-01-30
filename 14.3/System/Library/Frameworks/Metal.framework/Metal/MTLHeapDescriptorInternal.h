@interface MTLHeapDescriptorInternal : MTLHeapDescriptor {
    struct MTLHeapDescriptorPrivate { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; BOOL x4; long long x5; unsigned long long x6; } *_private;
}

@property (nonatomic) unsigned long long sparsePageSize;
@property (nonatomic) BOOL sparsePageAccessCountersEnabled;

- (id)formattedDescription:(unsigned long long)a0;
- (void)setCpuCacheMode:(unsigned long long)a0;
- (id)init;
- (void)setResourceOptions:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setType:(long long)a0;
- (void)dealloc;
- (unsigned long long)size;
- (unsigned long long)hash;
- (unsigned long long)cpuCacheMode;
- (unsigned long long)resourceOptions;
- (id)description;
- (long long)type;
- (void)setStorageMode:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)validateWithDevice:(id)a0;
- (void)setSize:(unsigned long long)a0;
- (const struct MTLHeapDescriptorPrivate { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; BOOL x4; long long x5; unsigned long long x6; } *)descriptorPrivate;
- (unsigned long long)storageMode;
- (unsigned long long)hazardTrackingMode;
- (void)setHazardTrackingMode:(unsigned long long)a0;

@end
