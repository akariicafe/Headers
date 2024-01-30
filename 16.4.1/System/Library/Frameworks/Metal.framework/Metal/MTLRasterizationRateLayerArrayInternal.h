@class MTLRasterizationRateMapDescriptor;

@interface MTLRasterizationRateLayerArrayInternal : MTLRasterizationRateLayerArray {
    MTLRasterizationRateMapDescriptor *_parent;
}

- (id)initWithParent:(id)a0;
- (void)setObject:(id)a0 atIndexedSubscript:(unsigned long long)a1;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;

@end
