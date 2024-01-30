@interface GameCenterUI.ActivityFeedLeaderboardAvatarsSubview : UIView {
    void /* unknown type, empty encoding */ avatarBackgroundImage;
    void /* unknown type, empty encoding */ messageLabel;
    void /* unknown type, empty encoding */ scoreLabel;
    void /* unknown type, empty encoding */ emojiLabel;
    void /* unknown type, empty encoding */ tapGestureRecognizer;
    void /* unknown type, empty encoding */ tapHandler;
}

- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)didTap;

@end
