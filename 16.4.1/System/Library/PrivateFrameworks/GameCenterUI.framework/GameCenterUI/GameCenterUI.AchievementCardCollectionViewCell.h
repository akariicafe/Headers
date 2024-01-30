@interface GameCenterUI.AchievementCardCollectionViewCell : GameCenterUI.BaseCollectionViewCell {
    void /* unknown type, empty encoding */ achievementCard;
    void /* unknown type, empty encoding */ wantsCompactLayoutMetrics;
}

@property (nonatomic, readonly) BOOL canBecomeFocused;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
