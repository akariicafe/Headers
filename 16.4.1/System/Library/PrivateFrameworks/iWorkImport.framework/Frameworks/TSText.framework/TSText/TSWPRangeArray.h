@interface TSWPRangeArray : NSObject <NSCopying, NSMutableCopying>

@property (readonly, nonatomic) unsigned long long rangeCount;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } superRange;
@property (readonly, nonatomic) unsigned long long indexCount;
@property (readonly, nonatomic) struct vector<_NSRange, std::allocator<_NSRange>> { struct _NSRange *__begin_; struct _NSRange *__end_; struct __compressed_pair<_NSRange *, std::allocator<_NSRange>> { struct _NSRange *__value_; } __end_cap_; } rangeVector;

+ (id)rangeArray;
+ (id)rangeArrayWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id).cxx_construct;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeAtIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)enumerateRanges:(id /* block */)a0;
- (unsigned long long)hash;
- (id)init;
- (BOOL)containsRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)intersectsRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void).cxx_destruct;
- (BOOL)containsCharacterAtIndex:(unsigned long long)a0;
- (void)enumerateRangesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 usingBlock:(id /* block */)a1;
- (id)initWithRangeVector:(const void *)a0;
- (unsigned long long)p_start;
- (BOOL)containsCharacterAtIndex:(unsigned long long)a0 inclusive:(BOOL)a1;
- (unsigned long long)indexForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)intersection:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)isEqualToRangeArray:(id)a0;
- (unsigned long long)p_finish;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeContainingPosition:(unsigned long long)a0;
- (id)rangesIntersecting:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)reverseEnumerateRanges:(id /* block */)a0;

@end
