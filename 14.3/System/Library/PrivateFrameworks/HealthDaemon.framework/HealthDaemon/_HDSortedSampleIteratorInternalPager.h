@interface _HDSortedSampleIteratorInternalPager : NSObject

+ (void)getSamplesWithSampleQueryDescription:(id)a0 sortDescriptors:(id)a1 anchor:(id)a2 limit:(unsigned long long)a3 profile:(id)a4 resultsHandler:(id /* block */)a5;
+ (id)_enumeratorWithProfile:(id)a0 sampleQueryDescription:(id)a1 anchor:(id)a2 limit:(long long)a3 error:(id *)a4;

- (id)init;

@end
