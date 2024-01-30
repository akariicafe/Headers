@interface _PASBloomFilterDummy : _PASBloomFilter {
    BOOL _result;
}

+ (id)instanceThatAlwaysReturns:(BOOL)a0;

- (id)initWithResult:(BOOL)a0;
- (BOOL)getWithHashes:(id)a0;

@end
