@interface CHPCategoryAndSeriesReordering : EDProcessor

- (void)applyCategoryReorderingPreprocessor:(id)a0;
- (void)applyProcessorToObject:(id)a0 sheet:(id)a1;
- (void)applySeriesReorderingPreprocessor:(id)a0;
- (BOOL)isObjectSupported:(id)a0;
- (BOOL)isObjectSupportedForSeriesReorderingPreprocessor:(id)a0 isCategoryOrderReversed:(BOOL)a1;
- (void)reorderCategoryAndSeries:(id)a0 sheet:(id)a1 clearAxisReversedFlag:(BOOL)a2;
- (void)reorderData:(id)a0 dataPointCount:(unsigned long long)a1 byRow:(BOOL)a2;
- (void)reorderDataFormula:(id)a0 dataPointCount:(unsigned long long)a1 byRow:(BOOL)a2;
- (long long)reorderDataValues:(id)a0 dataPointCount:(unsigned long long)a1;
- (void)reorderSeriesCategory:(id)a0 dataPointCount:(unsigned long long)a1 byRow:(BOOL)a2;
- (void)reorderValueProperties:(id)a0 dataPointCount:(unsigned long long)a1;

@end
