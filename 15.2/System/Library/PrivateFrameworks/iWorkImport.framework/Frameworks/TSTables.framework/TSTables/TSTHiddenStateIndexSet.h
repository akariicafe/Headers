@class NSMutableIndexSet;

@interface TSTHiddenStateIndexSet : NSObject <NSCopying>

@property (retain, nonatomic) NSMutableIndexSet *visibleIndexSet;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setCount:(unsigned long long)a0;
- (void)insertRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)visibleIndices;
- (void)swapIndex:(unsigned long long)a0 withIndex:(unsigned long long)a1;
- (BOOL)isIndexHidden:(unsigned long long)a0;
- (unsigned long long)numberHiddenIndicesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)anyHiddenIndicesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)findNthPreviousVisibleIndex:(unsigned long long)a0 fromIndex:(unsigned long long)a1;
- (unsigned long long)findNthNextVisibleIndex:(unsigned long long)a0 fromIndex:(unsigned long long)a1;
- (void)moveRangeFrom:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 toIndex:(unsigned long long)a1;
- (void)deleteRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)setHidden:(BOOL)a0 atIndex:(unsigned long long)a1;
- (void)setHidden:(BOOL)a0 atIndexes:(id)a1;
- (void)setHidden:(BOOL)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned long long)numberVisibleIndicesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)visibleIndexAfterIndex:(unsigned long long)a0;
- (unsigned long long)visibleIndexAfterAndIncludingIndex:(unsigned long long)a0;
- (unsigned long long)visibleIndexBeforeIndex:(unsigned long long)a0;
- (unsigned long long)visibleIndexBeforeAndIncludingIndex:(unsigned long long)a0;

@end
