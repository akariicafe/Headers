@class NSAttributedString;

@interface _NSLineMetrics : NSObject {
    NSAttributedString *_attributedString;
    struct _NSRange { unsigned long long location; unsigned long long length; } _lineRange;
    struct __CTLine { } *_line;
    double *_positions;
    struct __CFArray { } *_runsBuf;
    struct CGSize { double x0; double x1; } *_advancesBuf;
    long long *_stringIndicesBuf;
    unsigned long long _glyphCapacity;
}

- (id)initWithAttributedString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setAttributedString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 line:(const struct __CTLine { } *)a2;
- (unsigned long long)suggestedLineBreakAfterIndex:(unsigned long long)a0 withWidth:(double)a1;
- (id)initWithAttributedString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 line:(const struct __CTLine { } *)a2;
- (double)widthOfSubstringToIndex:(unsigned long long)a0;
- (void)_calculatePositions;
- (void)_ensureGlyphCapacity:(unsigned long long)a0;
- (void)dealloc;
- (double)widthOfSubstringWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void).cxx_destruct;

@end
