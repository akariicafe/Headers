@interface RVSelection : NSObject

+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })revealRangeAtIndex:(unsigned long long)a0 selectedRanges:(id)a1 shouldUpdateSelection:(BOOL *)a2;
+ (unsigned long long)maxContextLength;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })searchRangeForString:(id)a0 aroundLocation:(unsigned long long)a1;

@end
