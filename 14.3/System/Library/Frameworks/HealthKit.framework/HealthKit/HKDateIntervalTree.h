@interface HKDateIntervalTree : NSObject {
    struct unique_ptr<HKIntervalTree<double>, std::__1::default_delete<HKIntervalTree<double> > > { struct __compressed_pair<HKIntervalTree<double> *, std::__1::default_delete<HKIntervalTree<double> > > { struct HKIntervalTree<double> *__value_; } __ptr_; } _tree;
}

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)insertInterval:(id)a0;
- (id)mergedIntervals;
- (BOOL)hasOverlapWithInterval:(id)a0;

@end
