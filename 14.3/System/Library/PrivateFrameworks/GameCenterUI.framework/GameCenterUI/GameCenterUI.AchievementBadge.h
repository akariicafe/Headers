@interface GameCenterUI.AchievementBadge : UIView {
    void /* unknown type, empty encoding */ theme;
    void /* unknown type, empty encoding */ metrics;
    void /* unknown type, empty encoding */ style;
    void /* unknown type, empty encoding */ status;
    void /* unknown type, empty encoding */ image;
    void /* unknown type, empty encoding */ innerShadow;
    void /* unknown type, empty encoding */ foilLayer;
    void /* unknown type, empty encoding */ progressBarLayer;
    void /* unknown type, empty encoding */ iconImageView;
    void /* unknown type, empty encoding */ progressLabel;
}

@property (nonatomic, readonly) BOOL accessibilityIsAchievementLocked;
@property (nonatomic, readonly) BOOL accessibilityIsAchievementCompleted;
@property (nonatomic, readonly) BOOL accessibilityIsAchievementInProgress;
@property (nonatomic, readonly) double accessibilityProgress;

- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
