@class NSString;

@interface GameCenterUI.ActivityFeedAchievementView : UIView {
    void /* unknown type, empty encoding */ contentBackgroundView;
    void /* unknown type, empty encoding */ sharedView;
    void /* unknown type, empty encoding */ achievementCardContainer;
    void /* unknown type, empty encoding */ achievementConfettiView;
    void /* unknown type, empty encoding */ stackAchievementCards;
    void /* unknown type, empty encoding */ stackedCardMaskOffsetsX;
    void /* unknown type, empty encoding */ didHideOutOfBoundsCard;
    void /* unknown type, empty encoding */ gameControllerSelectButtonDestination;
}

@property (nonatomic, copy) NSString *accessibilityLabel;

- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
