@class UILabel, NSAttributedString, LPTextViewStyle;

@interface LPTextView : LPComponentView <LPTextStyleable, LPContentInsettable> {
    UILabel *_textView;
    long long _overrideMaximumNumberOfLines;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _contentInset;
    LPTextViewStyle *_style;
    NSAttributedString *_attributedString;
    double _ascender;
    double _descender;
}

@property (readonly, retain, nonatomic) NSAttributedString *attributedString;
@property (readonly, retain, nonatomic) LPTextViewStyle *style;

- (double)ascender;
- (id)init;
- (void).cxx_destruct;
- (void)setContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id)firstBaselineAnchor;
- (double)descender;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })effectiveInsets;
- (void)layoutComponentView;
- (id)lastBaselineAnchor;
- (id)initWithText:(id)a0 style:(id)a1;
- (double)firstLineLeading;
- (double)lastLineDescent;
- (long long)computedNumberOfLines;
- (void)setOverrideMaximumNumberOfLines:(long long)a0;
- (id)_createTextViewWithAttributedString:(id)a0 style:(id)a1;
- (long long)effectiveMaximumNumberOfLines;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
