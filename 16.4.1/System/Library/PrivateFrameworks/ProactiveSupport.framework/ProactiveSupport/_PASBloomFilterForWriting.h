@interface _PASBloomFilterForWriting : _PASBloomFilter

+ (id)bloomFilterInMemoryWithNumberOfValuesN:(unsigned long long)a0 errorRateP:(float)a1;

- (BOOL)saveToFile:(id)a0;
- (void)setWithHashes:(id)a0;

@end
