@interface GameCenterUI.ActivityFeedHeaderView : UIView {
    void /* unknown type, empty encoding */ headerLabel;
    void /* unknown type, empty encoding */ radarButton;
}

- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)tapToRadarButton;

@end
