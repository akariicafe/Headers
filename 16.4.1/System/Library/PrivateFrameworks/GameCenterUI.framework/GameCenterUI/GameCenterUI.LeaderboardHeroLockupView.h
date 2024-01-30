@interface GameCenterUI.LeaderboardHeroLockupView : UIView {
    void /* unknown type, empty encoding */ gradientBackground;
    void /* unknown type, empty encoding */ headingLabel;
    void /* unknown type, empty encoding */ detailLabel;
    void /* unknown type, empty encoding */ scoreLabel;
    void /* unknown type, empty encoding */ avatarView;
}

- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measurementsWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;

@end
