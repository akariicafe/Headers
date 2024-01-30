@interface GameCenterUI.OverlappingPlayersView : UIView {
    void /* unknown type, empty encoding */ playerViews;
    void /* unknown type, empty encoding */ playerSize;
}

@property (nonatomic) void /* unknown type, empty encoding */ overlapPercentage;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measurementsWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;
- (void)applyWithPlayerAvatars:(id)a0 playerSize:(struct CGSize { double x0; double x1; })a1;

@end
