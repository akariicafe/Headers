@interface PULayoutSectionSimpleSampler : PULayoutSectionSampler {
    long long _numberOfVisibleItems;
    long long _numberOfRealItems;
}

- (void)dumpInternalMemory;
- (void)enumerateUnsampledIndexesForSampledIndexInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 usingBlock:(id /* block */)a1;
- (long long)indexForUnsampledIndex:(long long)a0 isMainItem:(BOOL *)a1;
- (id)initWithNumberOfVisibleItems:(long long)a0 numberOfRealItems:(long long)a1;
- (long long)unsampledIndexForIndex:(long long)a0;

@end
