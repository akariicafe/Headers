@class UILabel, _TtC9SeymourUI14WatchBadgeView;

@interface SeymourUI.TVRemoteParticipantCell : SeymourUI.TVFocusableCollectionViewCell {
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ indicatorView;
    void /* unknown type, empty encoding */ monogramButton;
    void /* unknown type, empty encoding */ imageViewEdgeFillConstraints;
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ watchBadgeView;
}

@property (nonatomic, readonly) UILabel *accessibilityTitleLabel;
@property (nonatomic, readonly) _TtC9SeymourUI14WatchBadgeView *accessibilityWatchBadgeView;

- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
