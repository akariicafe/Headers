@interface MTLHeapDescriptorInternal : MTLHeapDescriptor {
    struct MTLHeapDescriptorPrivate { unsigned long long x0; unsigned long long x1; unsigned long long x2; long long x3; BOOL x4; long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; } *_private;
}

@property (nonatomic) long long sparsePageSize;
@property (nonatomic) BOOL sparsePageAccessCountersEnabled;

- (void)setHazardTrackingMode:(unsigned long long)a0;
- (unsigned long long)cpuCacheMode;
- (unsigned long long)hazardTrackingMode;
- (const struct MTLHeapDescriptorPrivate { unsigned long long x0; unsigned long long x1; unsigned long long x2; long long x3; BOOL x4; long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; } *)descriptorPrivate;
- (void)setStorageMode:(unsigned long long)a0;
- (void)setCpuCacheMode:(unsigned long long)a0;
- (BOOL)validateWithDevice:(id)a0;
- (unsigned long long)resourceOptions;
- (void)setResourceOptions:(unsigned long long)a0;
- (void)setProtectionOptions:(unsigned long long)a0;
- (unsigned long long)pinnedGPUAddress;
- (long long)type;
- (unsigned long long)storageMode;
- (void)setPinnedGPUAddress:(unsigned long long)a0;
- (id)formattedDescription:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void)setType:(long long)a0;
- (unsigned long long)hash;
- (void)setSize:(unsigned long long)a0;
- (id)init;
- (unsigned long long)size;
- (id)description;
- (unsigned long long)protectionOptions;

@end
