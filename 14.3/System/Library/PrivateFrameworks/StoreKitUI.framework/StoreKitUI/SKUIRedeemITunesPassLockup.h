@class SKUIClientContext, UIImageView, UILabel, UIView, SKUIITunesPassConfiguration;

@interface SKUIRedeemITunesPassLockup : UIControl {
    SKUIClientContext *_clientContext;
    SKUIITunesPassConfiguration *_configuration;
    UILabel *_descriptionLabel;
    UIView *_horizontalSeparatorView;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithITunesPassConfiguration:(id)a0 clientContext:(id)a1;
- (id)_attributedDescriptionString;

@end
