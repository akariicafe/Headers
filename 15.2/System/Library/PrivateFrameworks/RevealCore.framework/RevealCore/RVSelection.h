@interface RVSelection : NSObject

+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })revealRangeAtIndex:(unsigned long long)a0 selectedRanges:(id)a1 shouldUpdateSelection:(BOOL *)a2;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })searchRangeForString:(id)a0 aroundLocation:(unsigned long long)a1;
+ (unsigned long long)maxContextLength;

@end
