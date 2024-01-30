@class PKPhoneHeroView, PKPaymentSetupInitialCardEducationIconsView, UIImageView, UIView;

@interface PKEducationPhone : UIView {
    struct CGSize { double width; double height; } _screenSize;
    BOOL _hasPearl;
    BOOL _isAnimating;
    unsigned long long _screenType;
    PKPhoneHeroView *_phoneBackgroundView;
    PKPaymentSetupInitialCardEducationIconsView *_iconsView;
    UIView *_homeButtonView;
    UIView *_homeButtonOutlineView;
    UIImageView *_walletImageView;
    UIImageView *_cardImageView;
    UIImageView *_biometricsImageView;
    UIImageView *_powerIndicatorView;
    UIImageView *_powerArrowImageView;
}

- (void)startAnimation;
- (void)layoutSubviews;
- (double)_topPadding;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)setPassImage:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 displayOptions:(unsigned long long)a1;
- (void)_setHomeButtonOutlineColor;
- (double)_deviceIconsPadding;
- (void)_startPowerIndicatorAnimation;

@end
