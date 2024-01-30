@class LPCaptionButtonPresentationProperties, LPTextViewStyle, UIButton;

@interface LPSubtitleButtonView : LPComponentView {
    LPCaptionButtonPresentationProperties *_buttonProperties;
    LPTextViewStyle *_style;
    UIButton *_button;
}

- (void)sizeToFit;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithHost:(id)a0;
- (id)viewForLastBaselineLayout;
- (void).cxx_destruct;
- (void)buttonPressed:(id)a0;
- (void)_buildSubviewsIfNeeded;
- (struct CGSize { double x0; double x1; })_layoutButtonForSize:(struct CGSize { double x0; double x1; })a0 applyingLayout:(BOOL)a1;
- (id)initWithHost:(id)a0 buttonProperties:(id)a1 style:(id)a2;
- (void)layoutComponentView;

@end
