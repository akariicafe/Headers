@class _UIOrderedLayoutArrangement, NSArray, _UIAlignedLayoutArrangement, NSMutableArray;

@interface UIStackView : UIView {
    NSMutableArray *_mutableLayoutArrangements;
    _UIOrderedLayoutArrangement *_distributionArrangement;
    _UIAlignedLayoutArrangement *_alignmentArrangement;
    BOOL _didRequestTallestBaselineViewForFirst;
    BOOL _didRequestTallestBaselineViewForLast;
    BOOL _viewForFirstBaselineLayoutDidChange;
    BOOL _viewForLastBaselineLayoutDidChange;
}

@property (readonly, copy, nonatomic) NSArray *arrangedSubviews;
@property (nonatomic) long long axis;
@property (nonatomic) long long distribution;
@property (nonatomic) long long alignment;
@property (nonatomic) double spacing;
@property (nonatomic, getter=isBaselineRelativeArrangement) BOOL baselineRelativeArrangement;
@property (nonatomic, getter=isLayoutMarginsRelativeArrangement) BOOL layoutMarginsRelativeArrangement;

+ (Class)layerClass;

- (void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)a0;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (struct CGSize { double x0; double x1; })_systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2 hasIntentionallyCollapsedHeight:(BOOL *)a3;
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)a0;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)setBackgroundColor:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_vendedBaselineViewParametersDidChange;
- (id)_mutableLayoutArrangements;
- (void)_vendedBaselineViewDidMoveForFirst:(BOOL)a0;
- (double)_proportionalFillLengthForOrderedArrangement:(id)a0 relevantParentAxis:(long long)a1;
- (BOOL)_recordBaselineLoweringInfo;
- (void)_commonStackViewInitializationWithArrangedSubviews:(id)a0;
- (id)_baselineViewForFirst:(BOOL)a0;
- (BOOL)_shouldRequestTallestBaselineViewForFirst:(BOOL)a0;
- (double)customSpacingAfterView:(id)a0;
- (void)setOpaque:(BOOL)a0;
- (void)setArrangedSubviews:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setCustomSpacing:(double)a0 afterView:(id)a1;
- (id)initWithArrangedSubviews:(id)a0;
- (void)insertArrangedSubview:(id)a0 atIndex:(unsigned long long)a1;
- (void)removeArrangedSubview:(id)a0;
- (BOOL)_hasLayoutArrangements;
- (void)addArrangedSubview:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (double)_calculatedIntrinsicHeight;

@end
