@class _TtC12GameCenterUI16DynamicTypeLabel;

@interface GameCenterUI.SmallFriendLockupView : UIView {
    void /* unknown type, empty encoding */ avatarView;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ subtitleLabel;
    void /* unknown type, empty encoding */ chevronView;
    void /* unknown type, empty encoding */ hasChevron;
}

@property (nonatomic, readonly) _TtC12GameCenterUI16DynamicTypeLabel *accessibilityTitleLabel;
@property (nonatomic, readonly) _TtC12GameCenterUI16DynamicTypeLabel *accessibilitySubtitleLabel;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measurementsWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
