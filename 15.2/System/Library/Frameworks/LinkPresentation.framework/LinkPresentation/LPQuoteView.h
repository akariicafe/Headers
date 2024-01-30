@class UITextView, NSRegularExpression, UIImageView, UIVisualEffectView, LPQuotedTextViewStyle, NSAttributedString, LPTextView;

@interface LPQuoteView : LPComponentView <LPTextStyleable, LPContentInsettable> {
    UITextView *_textView;
    BOOL _didLimitNumberOfCharacters;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _contentInset;
    LPQuotedTextViewStyle *_style;
    NSAttributedString *_attributedString;
    LPTextView *_characterLimitIndicatorView;
    UIImageView *_quoteIndicatorView;
    UIVisualEffectView *_effectView;
    UITextView *_coloredGlyphsView;
    double _ascender;
    double _descender;
}

@property (readonly, retain, nonatomic) NSAttributedString *attributedString;
@property (readonly, retain, nonatomic) LPQuotedTextViewStyle *style;
@property (nonatomic) long long overrideMaximumNumberOfLines;
@property (copy, nonatomic) NSRegularExpression *emphasizedTextExpression;

- (void)setFont:(id)a0;
- (double)ascender;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (double)descender;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })effectiveInsets;
- (void).cxx_destruct;
- (void)setContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id)lastBaselineAnchor;
- (id)initWithHost:(id)a0;
- (id)firstBaselineAnchor;
- (void)tintColorDidChange;
- (BOOL)_lp_isLTR;
- (void)layoutComponentView;
- (id)initWithHost:(id)a0 text:(id)a1 style:(id)a2;
- (double)firstLineLeading;
- (double)lastLineDescent;
- (long long)computedNumberOfLines;
- (id)effectiveAttributedString;
- (void)_buildSubviewsIfNeeded;
- (long long)effectiveMaximumNumberOfLines;
- (void)applyAttributedString:(id)a0;
- (id)_createTextView;
- (long long)computedNumberOfLinesWithFont:(id)a0 forSize:(struct CGSize { double x0; double x1; })a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })effectiveInsetsWithoutQuoteIndicator;
- (void)updateExclusionRects;
- (void)updateEffectiveFontForSize:(struct CGSize { double x0; double x1; })a0;

@end
