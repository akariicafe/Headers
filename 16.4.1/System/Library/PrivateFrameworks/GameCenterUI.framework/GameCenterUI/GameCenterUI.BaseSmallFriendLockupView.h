@class _TtC12GameCenterUI16DynamicTypeLabel;

@interface GameCenterUI.BaseSmallFriendLockupView : UIView {
    void /* unknown type, empty encoding */ avatarView;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ subtitleLabel;
    void /* unknown type, empty encoding */ style;
    void /* unknown type, empty encoding */ chevronView;
    void /* unknown type, empty encoding */ hasChevron;
    void /* unknown type, empty encoding */ trailingViewConfiguration;
    void /* unknown type, empty encoding */ accessoryButton;
    void /* unknown type, empty encoding */ avatarLoadingQueue;
    void /* unknown type, empty encoding */ userAvatarLoadingDelayInSec;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic, readonly) _TtC12GameCenterUI16DynamicTypeLabel *accessibilityTitleLabel;
@property (nonatomic, readonly) _TtC12GameCenterUI16DynamicTypeLabel *accessibilitySubtitleLabel;

- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (BOOL)accessibilityActivate;
- (void)didTapAccessoryButton;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measurementsWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;

@end
