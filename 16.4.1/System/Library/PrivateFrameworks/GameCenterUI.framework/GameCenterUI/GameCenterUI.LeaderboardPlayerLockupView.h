@interface GameCenterUI.LeaderboardPlayerLockupView : UIView {
    void /* unknown type, empty encoding */ movement;
    void /* unknown type, empty encoding */ movementArrowView;
    void /* unknown type, empty encoding */ ordinalLabel;
    void /* unknown type, empty encoding */ avatarView;
    void /* unknown type, empty encoding */ playerHandleLabel;
    void /* unknown type, empty encoding */ detailLabel;
    void /* unknown type, empty encoding */ avatarSize;
    void /* unknown type, empty encoding */ hasSeparator;
    void /* unknown type, empty encoding */ separatorView;
}

- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measurementsWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;

@end
