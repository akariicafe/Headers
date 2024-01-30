@interface PULayoutSectionSampler : NSObject

- (void)dumpInternalMemory;
- (void)enumerateUnsampledIndexesForSampledIndexInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 usingBlock:(id /* block */)a1;
- (long long)indexForUnsampledIndex:(long long)a0 isMainItem:(BOOL *)a1;
- (long long)unsampledIndexForIndex:(long long)a0;

@end
