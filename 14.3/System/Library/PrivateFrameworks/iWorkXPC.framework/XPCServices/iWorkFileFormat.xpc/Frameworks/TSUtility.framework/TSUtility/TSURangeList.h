@interface TSURangeList : NSObject {
    struct vector<_NSRange, std::__1::allocator<_NSRange> > { struct _NSRange *__begin_; struct _NSRange *__end_; struct __compressed_pair<_NSRange *, std::__1::allocator<_NSRange> > { struct _NSRange *__value_; } __end_cap_; } mRangeList;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) const struct vector<_NSRange, std::__1::allocator<_NSRange> > { struct _NSRange *x0; struct _NSRange *x1; struct __compressed_pair<_NSRange *, std::__1::allocator<_NSRange> > { struct _NSRange *x0; } x2; } *rangeVector;

+ (id)stringValueForRangeVector:(const struct vector<_NSRange, std::__1::allocator<_NSRange> > { struct _NSRange *x0; struct _NSRange *x1; struct __compressed_pair<_NSRange *, std::__1::allocator<_NSRange> > { struct _NSRange *x0; } x2; } *)a0;

- (void).cxx_destruct;
- (void)addRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)initWithString:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeAtIndex:(unsigned long long)a0;
- (id).cxx_construct;
- (void)removeRangeAtIndex:(unsigned long long)a0;
- (void)reverse;
- (id)stringValue;
- (void)insertRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 atIndex:(unsigned long long)a1;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)initWithRangeList:(id)a0;
- (void)replaceWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 atIndex:(unsigned long long)a1;
- (void)consolidate;
- (id)initWithRangeVector:(const struct vector<_NSRange, std::__1::allocator<_NSRange> > { struct _NSRange *x0; struct _NSRange *x1; struct __compressed_pair<_NSRange *, std::__1::allocator<_NSRange> > { struct _NSRange *x0; } x2; } *)a0;
- (id)initWithRangeVectorMove:(struct vector<_NSRange, std::__1::allocator<_NSRange> > { struct _NSRange *x0; struct _NSRange *x1; struct __compressed_pair<_NSRange *, std::__1::allocator<_NSRange> > { struct _NSRange *x0; } x2; } *)a0;

@end
