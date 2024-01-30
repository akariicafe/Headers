@class NSString, __end_cap_, MTLRasterizationRateLayerArrayInternal, __end_;

@interface MTLRasterizationRateMapDescriptorInternal : MTLRasterizationRateMapDescriptor <MTLRasterizationRateMapDescriptorSPI> {
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } _screenSize;
    NSString *_label;
    struct vector<MTLRasterizationRateLayerDescriptor *, std::__1::allocator<MTLRasterizationRateLayerDescriptor *> > { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<MTLRasterizationRateLayerDescriptor **, std::__1::allocator<MTLRasterizationRateLayerDescriptor *> > { id *__value_; } x1; } _layers;
    MTLRasterizationRateLayerArrayInternal *_layerAccessor;
}

- (id)formattedDescription:(unsigned long long)a0;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })screenSize;
- (id)layers;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (oneway void)dealloc;
- (void)setScreenSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;
- (void)setLabel:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)layerAtIndex:(unsigned long long)a0;
- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;
- (id)label;
- (unsigned long long)layerCount;
- (void)setLayer:(id)a0 atIndex:(unsigned long long)a1;
- (id)initWithScreenSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;
- (const id *)layerPointer:(unsigned long long *)a0;

@end
