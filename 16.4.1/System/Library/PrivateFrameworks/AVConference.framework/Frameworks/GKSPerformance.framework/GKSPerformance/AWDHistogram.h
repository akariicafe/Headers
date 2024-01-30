@interface AWDHistogram : NSObject {
    unsigned int *histogram;
    unsigned int *buckets;
    float *floatBuckets;
    unsigned int size;
}

- (void)addValue:(unsigned int)a0;
- (id)array;
- (void)dealloc;
- (void)print;
- (void)reset;
- (void)addFloatValue:(float)a0;
- (void)addValue:(unsigned int)a0 withIncrements:(unsigned int)a1;
- (id)initWithBuckets:(unsigned int *)a0 size:(unsigned int)a1;
- (id)initWithFloatBuckets:(float *)a0 size:(unsigned int)a1;
- (id)newArray;
- (void)reduceFrequencyByFactor:(unsigned int)a0;

@end
