@interface GameCenterUI.GKAddFriendsLockupView : UIView {
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ textLabel;
    void /* unknown type, empty encoding */ button;
    void /* unknown type, empty encoding */ addFriendsHandler;
}

@property (nonatomic, copy) id /* block */ addFriendsHandler;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)didTapButton:(id)a0;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measurementsWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 friendState:(long long)a1;

@end
