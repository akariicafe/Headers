@interface TSWPDirtyRangeArray : NSObject <NSCopying, NSMutableCopying> {
    struct vector<TSWPDirtyRange, std::allocator<TSWPDirtyRange>> { struct *__begin_; struct *__end_; struct __compressed_pair<TSWPDirtyRange *, std::allocator<TSWPDirtyRange>> { struct *__value_; } __end_cap_; } _rangeVector;
}

@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, nonatomic) unsigned long long count;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id).cxx_construct;
- (long long)delta;
- (void)enumerateWithBlock:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithRangeVector:(const void *)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })superRange;
- (struct { struct _NSRange { unsigned long long x0; unsigned long long x1; } x0; long long x1; })dirtyRangeAtIndex:(unsigned long long)a0;
- (id)dirtyRangesIntersecting:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)indexForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)initWithDirtyRange:(struct { struct _NSRange { unsigned long long x0; unsigned long long x1; } x0; long long x1; })a0;
- (BOOL)isEqualToDirtyRangeArray:(id)a0;

@end
