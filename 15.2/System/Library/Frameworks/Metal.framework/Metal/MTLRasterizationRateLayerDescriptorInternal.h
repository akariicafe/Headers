@class MTLRasterizationRateSampleArrayInternal;

@interface MTLRasterizationRateLayerDescriptorInternal : MTLRasterizationRateLayerDescriptor {
    float *_data;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } _size;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } _currentSampleCount;
    MTLRasterizationRateSampleArrayInternal *_horizontal;
    MTLRasterizationRateSampleArrayInternal *_vertical;
    BOOL _skipSampleValidationAndInterpolation;
}

- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })maxSampleCount;
- (void)setSampleCount:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)horizontal;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)vertical;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })sampleCount;
- (id)formattedDescription:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithSampleCount:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;
- (id)initWithSampleCount:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 horizontal:(const float *)a1 vertical:(const float *)a2;
- (float *)horizontalSampleStorage;
- (float *)verticalSampleStorage;

@end
