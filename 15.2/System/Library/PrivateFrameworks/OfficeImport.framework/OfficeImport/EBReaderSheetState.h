@class EDSheet, EBReaderState;

@interface EBReaderSheetState : NSObject {
    EBReaderState *mReaderState;
    EDSheet *mEDSheet;
    struct map<int, unsigned long, std::less<int>, std::allocator<std::pair<const int, unsigned long>>> { struct __tree<std::__value_type<int, unsigned long>, std::__map_value_compare<int, std::__value_type<int, unsigned long>, std::less<int>, true>, std::allocator<std::__value_type<int, unsigned long>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<int, unsigned long>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<int, std::__value_type<int, unsigned long>, std::less<int>, true>> { unsigned long long __value_; } __pair3_; } __tree_; } mSharedFormulas;
    unsigned long long mChartIndex;
}

- (id)resources;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)edSheet;
- (void *)xlReader;
- (id)workbook;
- (id)readerState;
- (unsigned long long)sharedFormulaIndexForRowCol:(int)a0;
- (void)setSharedFormulaIndex:(unsigned long long)a0 forRowCol:(int)a1;
- (unsigned long long)nextChartIndex;
- (id)initWithReaderState:(id)a0;
- (void)setEDSheet:(id)a0;
- (void)reportWorksheetWarning:(id)a0;

@end
