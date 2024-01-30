@interface TSWPDirtyRangeArray : NSObject <NSCopying, NSMutableCopying> {
    struct vector<TSWPDirtyRange, std::__1::allocator<TSWPDirtyRange> > { struct *__begin_; struct *__end_; struct __compressed_pair<TSWPDirtyRange *, std::__1::allocator<TSWPDirtyRange> > { struct *__value_; } __end_cap_; } _rangeVector;
}

@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, nonatomic) unsigned long long count;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)delta;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id).cxx_construct;
- (id)initWithRangeVector:(const struct vector<TSWPDirtyRange, std::__1::allocator<TSWPDirtyRange> > { struct *x0; struct *x1; struct __compressed_pair<TSWPDirtyRange *, std::__1::allocator<TSWPDirtyRange> > { struct *x0; } x2; } *)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })superRange;
- (id)dirtyRangesIntersecting:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct { struct _NSRange { unsigned long long x0; unsigned long long x1; } x0; long long x1; })dirtyRangeAtIndex:(unsigned long long)a0;
- (id)initWithDirtyRange:(struct { struct _NSRange { unsigned long long x0; unsigned long long x1; } x0; long long x1; })a0;
- (unsigned long long)indexForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)isEqualToDirtyRangeArray:(id)a0;

@end
