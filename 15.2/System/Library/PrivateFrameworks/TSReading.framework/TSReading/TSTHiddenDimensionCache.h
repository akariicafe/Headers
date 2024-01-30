@class NSMutableIndexSet;

@interface TSTHiddenDimensionCache : NSObject <NSCopying> {
    unsigned long long mCount;
    NSMutableIndexSet *mCachedUserVisible;
    NSMutableIndexSet *mInvalidRanges;
    unsigned long long mMarkIndex;
}

@property (readonly, nonatomic) NSMutableIndexSet *visibleIndices;

- (id)description;
- (void)invalidate:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)setCount:(unsigned long long)a0;
- (void)insertRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)initWithUserHiddenInformation:(BOOL)a0;
- (BOOL)isIndexHidden:(unsigned long long)a0;
- (BOOL)isIndexUserHidden:(unsigned long long)a0;
- (unsigned long long)numberHiddenIndicesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)numberUserHiddenIndicesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)anyHiddenIndicesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)anyUserHiddenIndicesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)findPreviousVisibleIndex:(unsigned long long)a0;
- (unsigned long long)findNextVisibleIndex:(unsigned long long)a0;
- (unsigned long long)findNthPreviousVisibleIndex:(unsigned long long)a0 fromIndex:(unsigned long long)a1;
- (unsigned long long)findNthNextVisibleIndex:(unsigned long long)a0 fromIndex:(unsigned long long)a1;
- (unsigned short)numberOfVisibleIndicesToMarkIndexFrom:(unsigned long long)a0;
- (void)setMarkIndex:(unsigned long long)a0;
- (void)setAllValuesToZero;
- (void)setAllInvalidValuesUsingBlock:(id /* block */)a0;
- (void)moveRangeFrom:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 toIndex:(unsigned long long)a1;
- (void)deleteRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
