@class LPCaptionButtonPresentationProperties, UIButton, LPTextView;

@interface LPHorizontalCaptionPairView : LPComponentView <LPTextStyleable, LPContentInsettable> {
    LPTextView *_leftView;
    LPTextView *_rightView;
    LPCaptionButtonPresentationProperties *_buttonProperties;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _contentInset;
    long long _balancingMode;
    UIButton *_button;
}

- (double)ascender;
- (id)init;
- (void).cxx_destruct;
- (void)setContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)buttonPressed:(id)a0;
- (double)descender;
- (void)layoutComponentView;
- (double)firstLineLeading;
- (double)lastLineDescent;
- (long long)computedNumberOfLines;
- (void)setOverrideMaximumNumberOfLines:(long long)a0;
- (struct CGSize { double x0; double x1; })_layoutCaptionPairForSize:(struct CGSize { double x0; double x1; })a0 applyingLayout:(BOOL)a1;
- (id)initWithLeadingText:(id)a0 leadingStyle:(id)a1 trailingText:(id)a2 trailingStyle:(id)a3 button:(id)a4 balancingMode:(long long)a5;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
