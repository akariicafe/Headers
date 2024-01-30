@interface _HDSortedSampleIteratorInternalPager : NSObject

+ (void)getSamplesWithQueryDescriptor:(id)a0 sortDescriptors:(id)a1 anchor:(id)a2 limit:(unsigned long long)a3 includeDeletedObjects:(BOOL)a4 profile:(id)a5 resultsHandler:(id /* block */)a6;

- (id)init;

@end
