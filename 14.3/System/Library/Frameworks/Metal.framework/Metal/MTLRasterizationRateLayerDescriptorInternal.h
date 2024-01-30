@class MTLRasterizationRateSampleArrayInternal;

@interface MTLRasterizationRateLayerDescriptorInternal : MTLRasterizationRateLayerDescriptor {
    float *_data;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } _size;
    MTLRasterizationRateSampleArrayInternal *_horizontal;
    MTLRasterizationRateSampleArrayInternal *_vertical;
}

- (id)formattedDescription:(unsigned long long)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })sampleCount;
- (id)vertical;
- (id)horizontal;
- (id)initWithSampleCount:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;
- (id)initWithSampleCount:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 horizontal:(const float *)a1 vertical:(const float *)a2;
- (float *)horizontalSampleStorage;
- (float *)verticalSampleStorage;

@end
