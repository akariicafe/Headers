@class _TtC12GameCenterUI14EmptyStateView;

@interface GameCenterUI.EmptyStateView : UIView {
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ wordmarkView;
    void /* unknown type, empty encoding */ primaryLabel;
    void /* unknown type, empty encoding */ secondaryLabel;
    void /* unknown type, empty encoding */ button;
    void /* unknown type, empty encoding */ disabled;
    void /* unknown type, empty encoding */ imageType;
    void /* unknown type, empty encoding */ buttonActionBlock;
}

@property (class, nonatomic, readonly) _TtC12GameCenterUI14EmptyStateView *addFriendsEmptyStateView;
@property (class, nonatomic, readonly) _TtC12GameCenterUI14EmptyStateView *addAdditionalFriendsEmptyStateView;

@property (nonatomic, copy) id /* block */ buttonActionBlock;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)didTapButton:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct JUMeasurements { double x0; double x1; double x2; double x3; })measurementsWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;

@end
