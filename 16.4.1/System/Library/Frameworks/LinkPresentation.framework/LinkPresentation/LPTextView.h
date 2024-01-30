@class NSRegularExpression, NSString, UIVisualEffectView, UILabel, NSAttributedString, LPTextViewStyle;

@interface LPTextView : LPComponentView <LPTextStyleable, LPContentInsettable, LPSubtitleButtonContainer> {
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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)attributedString:(id)a0 resolvedAgainstStyle:(id)a1 withEmphasizedTextExpression:(id)a2 tintColor:(id)a3 lineBreakMode:(long long)a4 usesVibrancy:(BOOL)a5 forLTR:(BOOL)a6 withFont:(id)a7;
+ (id)attributedStringHidingNonColoredRanges:(id)a0;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })effectiveInsets;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithHost:(id)a0;
- (void)tintColorDidChange;
- (void).cxx_destruct;
- (void)setContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (double)ascender;
- (double)descender;
- (id)firstBaselineAnchor;
- (id)lastBaselineAnchor;
- (id)_createLabel;
- (double)lastLineDescent;
- (void)_buildSubviewsIfNeeded;
- (void)_createTextViewWithAttributedString:(id)a0;
- (BOOL)_lp_isLTR;
- (void)applyAttributedString:(id)a0;
- (long long)computedNumberOfLines;
- (id)effectiveAttributedString;
- (long long)effectiveMaximumNumberOfLines;
- (double)firstLineLeading;
- (id)initWithHost:(id)a0 text:(id)a1 style:(id)a2;
- (void)layoutComponentView;
- (id)subtitleButton;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })textRect;

@end
