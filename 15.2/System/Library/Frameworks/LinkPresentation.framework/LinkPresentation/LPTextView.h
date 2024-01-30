@class NSRegularExpression, UIVisualEffectView, UILabel, NSAttributedString, LPTextViewStyle;

@interface LPTextView : LPComponentView <LPTextStyleable, LPContentInsettable> {
    UILabel *_textView;
    UILabel *_coloredGlyphsView;
    UIVisualEffectView *_effectView;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _contentInset;
    LPTextViewStyle *_style;
    NSAttributedString *_attributedString;
    double _ascender;
    double _descender;
}

@property (readonly, retain, nonatomic) NSAttributedString *attributedString;
@property (readonly, retain, nonatomic) LPTextViewStyle *style;
@property (nonatomic) long long overrideMaximumNumberOfLines;
@property (copy, nonatomic) NSRegularExpression *emphasizedTextExpression;

+ (id)attributedString:(id)a0 resolvedAgainstStyle:(id)a1 withEmphasizedTextExpression:(id)a2 tintColor:(id)a3 lineBreakMode:(long long)a4 usesVibrancy:(BOOL)a5 forLTR:(BOOL)a6 withFont:(id)a7;
+ (id)attributedStringHidingNonColoredRanges:(id)a0;

- (double)ascender;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (double)descender;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })effectiveInsets;
- (void).cxx_destruct;
- (void)setContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id)_createLabel;
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
- (void)_createTextViewWithAttributedString:(id)a0;
- (void)_buildSubviewsIfNeeded;
- (long long)effectiveMaximumNumberOfLines;
- (void)applyAttributedString:(id)a0;

@end
