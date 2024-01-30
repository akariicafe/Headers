@class UILabel, UIVisualEffectView, UIImageView;

@interface LPDomainNameIndicator : LPComponentView {
    UIVisualEffectView *_vibrancyView;
    UIVisualEffectView *_blurView;
    UILabel *_label;
    UIImageView *_glyphView;
}

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithHost:(id)a0;
- (void).cxx_destruct;
- (id)initWithHost:(id)a0 domainName:(id)a1 theme:(id)a2;
- (void)layoutComponentView;

@end
