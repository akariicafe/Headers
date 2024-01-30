@class LPCaptionButtonPresentationProperties, NSRegularExpression, LPTextView, UIButton;

@interface LPHorizontalCaptionPairView : LPComponentView <LPTextStyleable, LPContentInsettable> {
    LPTextView *_leftView;
    LPTextView *_rightView;
    LPCaptionButtonPresentationProperties *_buttonProperties;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _contentInset;
    long long _balancingMode;
    UIButton *_button;
}

@property (nonatomic) long long overrideMaximumNumberOfLines;
@property (copy, nonatomic) NSRegularExpression *emphasizedTextExpression;

- (double)ascender;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (double)descender;
- (void).cxx_destruct;
- (void)setContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id)initWithHost:(id)a0;
- (void)buttonPressed:(id)a0;
- (void)layoutComponentView;
- (double)firstLineLeading;
- (double)lastLineDescent;
- (long long)computedNumberOfLines;
- (struct CGSize { double x0; double x1; })_layoutCaptionPairForSize:(struct CGSize { double x0; double x1; })a0 applyingLayout:(BOOL)a1;
- (id)initWithHost:(id)a0 leadingText:(id)a1 leadingStyle:(id)a2 trailingText:(id)a3 trailingStyle:(id)a4 button:(id)a5 balancingMode:(long long)a6;

@end
