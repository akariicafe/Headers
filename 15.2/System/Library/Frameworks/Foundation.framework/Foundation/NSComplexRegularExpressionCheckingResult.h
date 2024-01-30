@class NSRegularExpression, NSArray;

@interface NSComplexRegularExpressionCheckingResult : NSRegularExpressionCheckingResult {
    NSRegularExpression *_regularExpression;
    NSArray *_rangeArray;
}

- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)initWithRanges:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a0 count:(unsigned long long)a1 regularExpression:(id)a2;
- (id)rangeArray;
- (id)initWithRangeArray:(id)a0 regularExpression:(id)a1;
- (id)regularExpression;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeAtIndex:(unsigned long long)a0;
- (void)dealloc;
- (BOOL)_adjustRangesWithOffset:(long long)a0;
- (unsigned long long)numberOfRanges;

@end
