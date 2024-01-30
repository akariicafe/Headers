@class MTLRasterizationRateLayerArray, NSString;

@interface MTLRasterizationRateMapDescriptor : NSObject <NSCopying>

@property (readonly, nonatomic) MTLRasterizationRateLayerArray *layers;
@property (nonatomic) struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } screenSize;
@property (copy, nonatomic) NSString *label;
@property (readonly, nonatomic) unsigned long long layerCount;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)rasterizationRateMapDescriptorWithScreenSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 layerCount:(unsigned long long)a1 layers:(const id *)a2;
+ (id)rasterizationRateMapDescriptorWithScreenSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;
+ (id)rasterizationRateMapDescriptorWithScreenSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 layer:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)layerAtIndex:(unsigned long long)a0;
- (void)setLayer:(id)a0 atIndex:(unsigned long long)a1;

@end
