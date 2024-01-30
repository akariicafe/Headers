@class NSArray;

@interface UITextViewPrintFormatter : UIViewPrintFormatter {
    struct { unsigned char initializedUsedRects : 1; } _textViewPrintFormatterFlags;
    NSArray *_pageData;
}

- (void)setAttributedText:(id)a0;
- (id)attributedText;
- (id)font;
- (void).cxx_destruct;
- (long long)textAlignment;
- (id)text;
- (void)setFont:(id)a0;
- (void)setTextAlignment:(long long)a0;
- (id)color;
- (id)_pageData;
- (void)setColor:(id)a0;
- (id)_textView;
- (long long)_recalcPageCount;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForPageAtIndex:(long long)a0;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forPageAtIndex:(long long)a1;
- (void)setText:(id)a0;

@end
