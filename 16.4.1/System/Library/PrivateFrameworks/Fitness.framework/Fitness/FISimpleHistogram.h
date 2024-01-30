@interface FISimpleHistogram : NSObject {
    unsigned long long _bucketCount;
    struct { long long x0; double x1; } *_buckets;
}

- (long long)numberOfValuesInBucketAtIndex:(unsigned long long)a0;
- (long long)bucketCount;
- (id)descriptionArray;
- (id)debugDescription;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (double)valueForBucketAtIndex:(unsigned long long)a0;
- (void)addValue:(double)a0 toBucketAtIndex:(unsigned long long)a1;
- (id)initWithNumberOfBuckets:(long long)a0;

@end
