@class LPCollaborationFooterConfiguration, UIImageView, LPCollaborationFooterStyle, UIView, LPTextView;

@interface LPCollaborationFooterView : LPComponentView {
    LPTextView *_optionsView;
    LPTextView *_handleView;
    UIImageView *_indicatorView;
    UIView *_separatorView;
    LPCollaborationFooterConfiguration *_configuration;
    LPCollaborationFooterStyle *_style;
}

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithHost:(id)a0;
- (void).cxx_destruct;
- (void)updateIndicator;
- (void)_footerTapRecognized:(id)a0;
- (struct CGSize { double x0; double x1; })_layoutFooterForSize:(struct CGSize { double x0; double x1; })a0 applyingLayout:(BOOL)a1;
- (id)initWithHost:(id)a0 configuration:(id)a1 style:(id)a2;
- (void)layoutComponentView;

@end
