@class NSArray, NSLayoutConstraint, MUStackView;

@interface MUScrollableStackView : UIScrollView {
    MUStackView *_stackView;
    NSLayoutConstraint *_axisConstraint;
    struct CGSize { double width; double height; } _cachedContentSize;
}

@property (nonatomic) long long axis;
@property (nonatomic) long long distribution;
@property (nonatomic) long long alignment;
@property (nonatomic) double spacing;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } contentEdgeInsets;
@property (readonly, copy, nonatomic) NSArray *arrangedSubviews;

- (void)setContentSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (void)setArrangedSubviews:(id)a0;
- (void)addArrangedSubview:(id)a0;
- (void)layoutSubviews;
- (void)_setupViews;
- (void).cxx_destruct;
- (void)insertArrangedSubview:(id)a0 atIndex:(unsigned long long)a1;
- (void)removeArrangedSubview:(id)a0;
- (void)setCustomSpacing:(double)a0 afterView:(id)a1;
- (void)_updateForHorizontalAxisIfNeeded;
- (void)_updateOrientationWithNewAxis:(long long)a0;
- (id)addArrangedCardShadowViewForView:(id)a0;
- (void)addArrangedSubview:(id)a0 withCustomSpacing:(double)a1;
- (void)addArrangedSubview:(id)a0 withOrthogonalPadding:(double)a1;

@end
