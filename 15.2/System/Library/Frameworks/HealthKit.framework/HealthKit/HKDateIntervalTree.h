@interface HKDateIntervalTree : NSObject {
    struct unique_ptr<HKIntervalTree<double>, std::default_delete<HKIntervalTree<double>>> { struct __compressed_pair<HKIntervalTree<double> *, std::default_delete<HKIntervalTree<double>>> { void *__value_; } __ptr_; } _tree;
}

- (void)insertInterval:(id)a0;
- (id)mergedIntervals;
- (BOOL)hasOverlapWithInterval:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)hasOverlapWithStartTime:(double)a0 endTime:(double)a1;
- (void)insertIntervalWithStartTime:(double)a0 endTime:(double)a1;
- (id).cxx_construct;

@end
