@class TSWPRangeArray;

@interface TSWPDeletionRangeMap : NSObject {
    unsigned long long _subRangeStart;
    TSWPRangeArray *_removedRanges;
}

- (void)dealloc;
- (void)adjustByDelta:(long long)a0;
- (BOOL)containsCharIndex:(unsigned long long)a0;
- (id)initWithSubRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 removeRanges:(id)a1;
- (id)inverseRangesInStorageRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)mappedCharIndex:(unsigned long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })mappedCharRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)unmappedCharIndex:(unsigned long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })unmappedCharRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
