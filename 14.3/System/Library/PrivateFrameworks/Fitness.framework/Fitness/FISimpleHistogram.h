@interface FISimpleHistogram : NSObject {
    unsigned long long _bucketCount;
    struct { long long x0; double x1; } *_buckets;
}

- (void)dealloc;
- (long long)bucketCount;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (id)descriptionArray;
- (id)initWithNumberOfBuckets:(long long)a0;
- (double)valueForBucketAtIndex:(unsigned long long)a0;
- (void)addValue:(double)a0 toBucketAtIndex:(unsigned long long)a1;
- (long long)numberOfValuesInBucketAtIndex:(unsigned long long)a0;

@end
