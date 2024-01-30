@class UILabel, UIVisualEffectView, UIImageView;

@interface LPDomainNameIndicator : LPComponentView {
    UIVisualEffectView *_vibrancyView;
    UIVisualEffectView *_blurView;
    UILabel *_label;
    UIImageView *_glyphView;
}

- (id)initWithDomainName:(id)a0 theme:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)layoutComponentView;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
