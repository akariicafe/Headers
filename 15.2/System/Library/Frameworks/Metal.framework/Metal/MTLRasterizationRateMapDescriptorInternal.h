@class NSString, __end_cap_, MTLRasterizationRateLayerArrayInternal, __end_;

@interface MTLRasterizationRateMapDescriptorInternal : MTLRasterizationRateMapDescriptor <MTLRasterizationRateMapDescriptorSPI> {
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } _screenSize;
    NSString *_label;
    struct vector<MTLRasterizationRateLayerDescriptor *, std::allocator<MTLRasterizationRateLayerDescriptor *>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<MTLRasterizationRateLayerDescriptor **, std::allocator<MTLRasterizationRateLayerDescriptor *>> { id *__value_; } x1; } _layers;
    MTLRasterizationRateLayerArrayInternal *_layerAccessor;
}

@property (nonatomic) BOOL skipSampleValidationAndInterpolation;

- (id)layers;
- (id)description;
- (id)label;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })screenSize;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)formattedDescription:(unsigned long long)a0;
- (unsigned long long)hash;
- (oneway void)dealloc;
- (unsigned long long)layerCount;
- (id).cxx_construct;
- (void)setScreenSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;
- (void)setLabel:(id)a0;
- (id)layerAtIndex:(unsigned long long)a0;
- (void)setLayer:(id)a0 atIndex:(unsigned long long)a1;
- (id)initWithScreenSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;
- (const id *)layerPointer:(unsigned long long *)a0;

@end
