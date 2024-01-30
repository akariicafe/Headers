@class UILabel;

@interface SeymourUI.TVGroupedBrickItemCell : SeymourUI.TVFocusableCollectionViewCell {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ itemInfo;
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ artworkView;
    void /* unknown type, empty encoding */ floatingView;
    void /* unknown type, empty encoding */ mainStackView;
    void /* unknown type, empty encoding */ headerLabel;
    void /* unknown type, empty encoding */ textStackView;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ subtitleLabel;
}

@property (nonatomic, readonly) UILabel *accessibilityHeaderLabel;
@property (nonatomic, readonly) UILabel *accessibilityTitleLabel;
@property (nonatomic, readonly) UILabel *accessibilitySubtitleLabel;

- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
