@interface MTLHeapDescriptorInternal : MTLHeapDescriptor {
    struct MTLHeapDescriptorPrivate { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; BOOL x4; long long x5; unsigned long long x6; unsigned long long x7; } *_private;
}

@property (nonatomic) unsigned long long sparsePageSize;
@property (nonatomic) BOOL sparsePageAccessCountersEnabled;

- (void)setHazardTrackingMode:(unsigned long long)a0;
- (BOOL)validateWithDevice:(id)a0;
- (void)setResourceOptions:(unsigned long long)a0;
- (unsigned long long)pinnedGPUAddress;
- (unsigned long long)resourceOptions;
- (void)setStorageMode:(unsigned long long)a0;
- (unsigned long long)hazardTrackingMode;
- (unsigned long long)size;
- (id)description;
- (const struct MTLHeapDescriptorPrivate { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; BOOL x4; long long x5; unsigned long long x6; unsigned long long x7; } *)descriptorPrivate;
- (void)setPinnedGPUAddress:(unsigned long long)a0;
- (unsigned long long)cpuCacheMode;
- (void)setCpuCacheMode:(unsigned long long)a0;
- (unsigned long long)storageMode;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setSize:(unsigned long long)a0;
- (id)formattedDescription:(unsigned long long)a0;
- (long long)type;
- (unsigned long long)hash;
- (void)dealloc;
- (void)setType:(long long)a0;

@end
