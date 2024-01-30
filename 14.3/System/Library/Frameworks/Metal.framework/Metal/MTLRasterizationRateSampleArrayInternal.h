@interface MTLRasterizationRateSampleArrayInternal : MTLRasterizationRateSampleArray {
    float *_data;
    unsigned long long _count;
}

- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (void)setObject:(id)a0 atIndexedSubscript:(unsigned long long)a1;
- (id)initWithData:(float *)a0 numElements:(unsigned long long)a1;
- (float *)__getRawArray:(unsigned long long *)a0;

@end
