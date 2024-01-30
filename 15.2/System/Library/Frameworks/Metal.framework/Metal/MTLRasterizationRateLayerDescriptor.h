@class MTLRasterizationRateSampleArray;

@interface MTLRasterizationRateLayerDescriptor : NSObject <NSCopying>

@property (nonatomic) struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } sampleCount;
@property (readonly, nonatomic) struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } maxSampleCount;
@property (readonly, nonatomic) float *horizontalSampleStorage;
@property (readonly, nonatomic) float *verticalSampleStorage;
@property (readonly, nonatomic) MTLRasterizationRateSampleArray *horizontal;
@property (readonly, nonatomic) MTLRasterizationRateSampleArray *vertical;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSampleCount:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;
- (id)initWithSampleCount:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 horizontal:(const float *)a1 vertical:(const float *)a2;

@end
