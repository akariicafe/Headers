@class _TtC12GameCenterUI16DynamicTypeLabel, UIVisualEffectView, UIView;

@interface GameCenterUI.ProfileAvatarView : GameCenterUI.AvatarView {
    void /* unknown type, empty encoding */ profileEditButtonBackground;
    void /* unknown type, empty encoding */ profileEditLabel;
    void /* unknown type, empty encoding */ roundedEditButton;
    void /* unknown type, empty encoding */ isEditable;
    void /* unknown type, empty encoding */ tapGestureRecognizer;
    void /* unknown type, empty encoding */ tapHandler;
}

@property (nonatomic, readonly) BOOL accessibilityIsEditable;
@property (nonatomic, readonly) UIVisualEffectView *accessibilityProfileEditButtonBackground;
@property (nonatomic, readonly) UIView *accessibilityRoundedEditButton;
@property (nonatomic, readonly) _TtC12GameCenterUI16DynamicTypeLabel *accessibilityProfileEditLabel;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)didTap;

@end
