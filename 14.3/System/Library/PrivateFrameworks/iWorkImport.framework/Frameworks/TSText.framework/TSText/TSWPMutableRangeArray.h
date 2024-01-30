@interface TSWPMutableRangeArray : TSWPRangeArray

- (void)clear;
- (void)unionWith:(id)a0;
- (void)addRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)insertRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 atIndex:(unsigned long long)a1;
- (void)subtract:(id)a0;
- (void)removeRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)concatenateRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)replaceRangeAtIndex:(unsigned long long)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)removeRangesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })replacedTextAtRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 delta:(long long)a1;

@end
