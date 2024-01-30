@interface TSWPRangeMap : NSObject

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } subRange;
@property (nonatomic) struct vector<_TSWPCharIndexAndAffinity, std::allocator<_TSWPCharIndexAndAffinity>> { struct _TSWPCharIndexAndAffinity *__begin_; struct _TSWPCharIndexAndAffinity *__end_; struct __compressed_pair<_TSWPCharIndexAndAffinity *, std::allocator<_TSWPCharIndexAndAffinity>> { struct _TSWPCharIndexAndAffinity *__value_; } __end_cap_; } unmappedIndexes;
@property (nonatomic) struct vector<_TSWPCharIndexAndAffinity, std::allocator<_TSWPCharIndexAndAffinity>> { struct _TSWPCharIndexAndAffinity *__begin_; struct _TSWPCharIndexAndAffinity *__end_; struct __compressed_pair<_TSWPCharIndexAndAffinity *, std::allocator<_TSWPCharIndexAndAffinity>> { struct _TSWPCharIndexAndAffinity *__value_; } __end_cap_; } mappedIndexes;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithSubRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 unmappedIndexes:(const void *)a1 affinity:(int)a2;
- (id)initWithSubRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 unmappedPairIndexes:(const void *)a1;
- (unsigned long long)mappedCharIndex:(unsigned long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })mappedCharRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)p_extendLeftMappedIndex:(unsigned long long)a0;
- (unsigned long long)p_extendRightMappedIndex:(unsigned long long)a0;
- (unsigned long long)unmappedCharIndex:(unsigned long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })unmappedCharRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)adjustByDelta:(long long)a0 startingAt:(unsigned long long)a1;
- (id)initWithSubRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 unmappedIndexes:(const void *)a1 isBackwardAffinities:(const void *)a2;

@end
