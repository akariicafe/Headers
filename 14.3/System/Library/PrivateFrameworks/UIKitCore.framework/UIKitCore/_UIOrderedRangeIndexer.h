@class NSArray;

@interface _UIOrderedRangeIndexer : NSObject {
    struct shared_ptr<_UIOrderedRangeIndexerImpl> { struct _UIOrderedRangeIndexerImpl *__ptr_; struct __shared_weak_count *__cntrl_; } _orderedRangeIndexerImpl;
}

@property (readonly, nonatomic) long long numberOfRanges;
@property (readonly, nonatomic) NSArray *orderedRanges;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } containingRange;

- (id)init;
- (void).cxx_destruct;
- (long long)indexOfRangeContainingLocation:(long long)a0;
- (void)appendRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)description;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeAtIndex:(long long)a0;
- (id).cxx_construct;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeContainingLocation:(long long)a0;

@end
