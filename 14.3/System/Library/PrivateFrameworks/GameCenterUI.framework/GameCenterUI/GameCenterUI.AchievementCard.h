@class _TtC12GameCenterUI16AchievementBadge, _TtC12GameCenterUI16DynamicTypeLabel, NSDate;

@interface GameCenterUI.AchievementCard : UIView {
    void /* unknown type, empty encoding */ theme;
    void /* unknown type, empty encoding */ style;
    void /* unknown type, empty encoding */ metrics;
    void /* unknown type, empty encoding */ $__lazy_storage_$_highlightView;
    void /* unknown type, empty encoding */ isHighlighted;
    void /* unknown type, empty encoding */ backgroundView;
    void /* unknown type, empty encoding */ gradient;
    void /* unknown type, empty encoding */ border;
    void /* unknown type, empty encoding */ badge;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ subtitleLabel;
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ alwaysShowShadow;
    void /* unknown type, empty encoding */ backgroundEffectsGroup;
    void /* unknown type, empty encoding */ wantsFixedContentSizeCategory;
}

@property (nonatomic, readonly) BOOL canBecomeFocused;
@property (nonatomic, readonly) _TtC12GameCenterUI16DynamicTypeLabel *accessibilityTitleLabel;
@property (nonatomic, readonly) _TtC12GameCenterUI16DynamicTypeLabel *accessibilitySubtitleLabel;
@property (nonatomic, readonly) NSDate *accessibilityAchievementCompletedDate;
@property (nonatomic, readonly) _TtC12GameCenterUI16AchievementBadge *accessibilityBadge;

- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measurementsWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
