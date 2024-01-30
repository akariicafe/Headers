@class LPCaptionButtonPresentationProperties, NSRegularExpression, NSString, LPTextView, LPSubtitleButtonView;

@interface LPHorizontalCaptionPairView : LPComponentView <LPTextStyleable, LPContentInsettable, LPSubtitleButtonContainer> {
    LPTextView *_leftView;
    LPTextView *_rightView;
    LPCaptionButtonPresentationProperties *_buttonProperties;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _contentInset;
    long long _balancingMode;
    LPSubtitleButtonView *_button;
}

@property (nonatomic) long long overrideMaximumNumberOfLines;
@property (copy, nonatomic) NSRegularExpression *emphasizedTextExpression;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithHost:(id)a0;
- (void).cxx_destruct;
- (void)setContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (double)ascender;
- (double)descender;
- (double)lastLineDescent;
- (struct CGSize { double x0; double x1; })_layoutCaptionPairForSize:(struct CGSize { double x0; double x1; })a0 applyingLayout:(BOOL)a1;
- (long long)computedNumberOfLines;
- (double)firstLineLeading;
- (id)initWithHost:(id)a0 leadingText:(id)a1 leadingStyle:(id)a2 trailingText:(id)a3 trailingStyle:(id)a4 button:(id)a5 balancingMode:(long long)a6;
- (void)layoutComponentView;
- (id)subtitleButton;

@end
