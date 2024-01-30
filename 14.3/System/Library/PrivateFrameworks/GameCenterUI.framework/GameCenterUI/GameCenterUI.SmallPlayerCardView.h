@class UIButton, _TtC12GameCenterUI16DynamicTypeLabel;

@interface GameCenterUI.SmallPlayerCardView : UIView {
    void /* unknown type, empty encoding */ contentView;
    void /* unknown type, empty encoding */ contentViewBackground;
    void /* unknown type, empty encoding */ closeButton;
    void /* unknown type, empty encoding */ avatarView;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ subtitleLabel;
    void /* unknown type, empty encoding */ button;
    void /* unknown type, empty encoding */ closeButtonActionBlock;
    void /* unknown type, empty encoding */ buttonActionBlock;
    void /* unknown type, empty encoding */ shouldAnimateOnCloseButtonPress;
    void /* unknown type, empty encoding */ disabled;
    void /* unknown type, empty encoding */ currentImageFetch;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic, readonly) _TtC12GameCenterUI16DynamicTypeLabel *accessibilityTitleLabel;
@property (nonatomic, readonly) _TtC12GameCenterUI16DynamicTypeLabel *accessibilitySubtitleLabel;
@property (nonatomic, readonly) UIButton *accessibilityCloseButton;
@property (nonatomic, readonly) UIButton *accessibilityInviteButton;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measurementsWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;
- (void)didTapCloseButton;
- (void)didTapButton;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
