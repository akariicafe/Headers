@class NSArray;

@interface UITextViewPrintFormatter : UIViewPrintFormatter {
    struct { unsigned char initializedUsedRects : 1; } _textViewPrintFormatterFlags;
    NSArray *_pageData;
}

- (void)setFont:(id)a0;
- (id)attributedText;
- (void)setTextAlignment:(long long)a0;
- (long long)_recalcPageCount;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForPageAtIndex:(long long)a0;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forPageAtIndex:(long long)a1;
- (id)_pageData;
- (id)color;
- (void)setText:(id)a0;
- (void)setAttributedText:(id)a0;
- (void).cxx_destruct;
- (id)text;
- (id)font;
- (void)setColor:(id)a0;
- (id)_textView;
- (long long)textAlignment;

@end
