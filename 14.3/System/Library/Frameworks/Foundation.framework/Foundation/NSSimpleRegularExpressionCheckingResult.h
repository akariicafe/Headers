@class NSRegularExpression;

@interface NSSimpleRegularExpressionCheckingResult : NSRegularExpressionCheckingResult {
    NSRegularExpression *_regularExpression;
    struct _NSRange { unsigned long long location; unsigned long long length; } _ranges[3];
}

- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (unsigned long long)numberOfRanges;
- (id)initWithRanges:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a0 count:(unsigned long long)a1 regularExpression:(id)a2;
- (void)dealloc;
- (id)regularExpression;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeAtIndex:(unsigned long long)a0;
- (id)initWithRangeArray:(id)a0 regularExpression:(id)a1;
- (BOOL)_adjustRangesWithOffset:(long long)a0;
- (id)rangeArray;

@end
