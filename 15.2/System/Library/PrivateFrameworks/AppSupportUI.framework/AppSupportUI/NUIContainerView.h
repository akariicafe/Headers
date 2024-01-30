@class NSArray, __end_cap_, UIView, NSMutableArray, __end_;
@protocol NUIContainerViewDelegate;

@interface NUIContainerView : UIView {
    BOOL _isRTL;
    id<NUIContainerViewDelegate> _delegate;
    struct map<UIView *, _NUIContainerViewArrangedSubview, std::less<UIView *>, std::allocator<std::pair<UIView *const, _NUIContainerViewArrangedSubview>>> { struct __tree<std::__value_type<UIView *, _NUIContainerViewArrangedSubview>, std::__map_value_compare<UIView *, std::__value_type<UIView *, _NUIContainerViewArrangedSubview>, std::less<UIView *>, true>, std::allocator<std::__value_type<UIView *, _NUIContainerViewArrangedSubview>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<UIView *, _NUIContainerViewArrangedSubview>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<UIView *, std::__value_type<UIView *, _NUIContainerViewArrangedSubview>, std::less<UIView *>, true>> { unsigned long long __value_; } __pair3_; } __tree_; } _arrangedSubviewInfo;
    NSMutableArray *_arrangedSubviews;
    NSArray *_visibleArrangedSubviews;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _effectiveLayoutMargins;
    UIView *_firstBaselineView;
    UIView *_lastBaselineView;
    struct vector<CALayer *, std::allocator<CALayer *>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<CALayer **, std::allocator<CALayer *>> { id *__value_; } x1; } _debugBoundingBoxLayers;
    struct { unsigned short hiddenArrangedSubviewCount : 16; unsigned char delaydInvalidation : 8; unsigned char batchDepth : 4; unsigned char inLayoutPass : 2; unsigned char inMeasurementPass : 2; unsigned char layoutDependency : 2; unsigned char removalPolicy : 2; unsigned char removalPolicyHasBeenSet : 1; unsigned char additionPolicy : 1; unsigned char inEnsureArranged : 1; unsigned char inEffectiveSize : 1; unsigned char hasMargins : 1; unsigned char debugBoundingBoxes : 1; unsigned char baselineRelative : 1; unsigned char layoutMarginsRelative : 1; unsigned char baselineLayoutMargins : 1; unsigned char mustRestart : 1; unsigned char delegateSystemLayoutSizeFittingSizeForArrangedSubview : 1; unsigned char delegateLayoutFrameForArrangedSubview : 1; unsigned char delegateWillMeasureFitting : 1; unsigned char delegateShouldRestart : 1; unsigned char delegateDidLayout : 1; } _containerFlags;
}

@property (class, nonatomic) BOOL enableAPIMisuseAssertions;

@property (nonatomic, getter=isDebugBoundingBoxesEnabled) BOOL debugBoundingBoxesEnabled;
@property (copy, nonatomic) NSArray *arrangedSubviews;
@property (readonly, nonatomic) NSArray *visibleArrangedSubviews;
@property (nonatomic) long long arrangedSubviewRemovalPolicy;
@property (nonatomic) long long arrangedSubviewAdditionPolicy;
@property (weak, nonatomic) id<NUIContainerViewDelegate> delegate;
@property (nonatomic, getter=isBaselineRelativeArrangement) BOOL baselineRelativeArrangement;
@property (nonatomic, getter=isLayoutMarginsRelativeArrangement) BOOL layoutMarginsRelativeArrangement;
@property (nonatomic, getter=hasBaselineRelativeLayoutMarginsForArrangement) BOOL baselineRelativeLayoutMarginsForArrangement;

+ (void)initialize;
+ (BOOL)requiresConstraintBasedLayout;
+ (Class)layerClass;
+ (BOOL)isDebugBoundingBoxesEnabled;
+ (id)debugVersion;

- (id)calculateViewForFirstBaselineLayout;
- (BOOL)needsBaselineDebugBoundingBoxesForArrangedSubview:(id)a0;
- (void)layoutMarginsDidChange;
- (id)viewForFirstBaselineLayout;
- (void)performBatchUpdates:(id /* block */)a0;
- (id)initWithArrangedSubviews:(id)a0;
- (void)layoutSubviews;
- (id)arrangedDescription;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (struct CGSize { double x0; double x1; })calculateArrangedSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)setNeedsInvalidation:(long long)a0;
- (void)invalidateIntrinsicContentSize;
- (id)viewForLastBaselineLayout;
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)a0;
- (struct { double x0; double x1; })_baselineOffsetsAtSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)description;
- (void)willRemoveSubview:(id)a0;
- (struct CGSize { double x0; double x1; })contentLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 forArrangedSubview:(id)a1;
- (struct CGSize { double x0; double x1; })effectiveLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (void)addArrangedSubview:(id)a0;
- (void)setNeedsLayout;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })_layoutSizeThatFits:(struct CGSize { double x0; double x1; })a0 fixedAxes:(unsigned long long)a1;
- (BOOL)_layoutHeightDependsOnWidth;
- (unsigned long long)_axesForDerivingIntrinsicContentSizeFromLayoutSize;
- (void)insertArrangedSubview:(id)a0 atIndex:(unsigned long long)a1;
- (void)removeArrangedSubview:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)calculateViewForLastBaselineLayout;
- (void)setMinimumSpacing:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a0 adjacentToView:(id)a1;
- (BOOL)isLayoutSizeDependentOnPerpendicularAxis;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)setAlignment:(long long)a0 forView:(id)a1 inAxis:(long long)a2;
- (void)dealloc;
- (void)layoutArrangedSubviewsInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id).cxx_construct;
- (id)debugDictionary;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layoutFrameForArrangedSubview:(id)a0 withProposedContentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)canCancelMeasurementForCompression;
- (BOOL)shouldCancelMeasurementForCompressionInAxis:(long long)a0;
- (BOOL)_isContainerView;
- (void)didRemoveArrangedSubview:(id)a0 atIndex:(long long)a1;
- (void)didInsertArrangedSubview:(id)a0 atIndex:(long long)a1;
- (void)replaceArrangedSubviewAtIndex:(unsigned long long)a0 withView:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })effectiveLayoutMargins;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })effectiveLayoutBounds;
- (void)visibilityDidChangeForArrangedSubview:(id)a0;
- (void)intrinsicContentSizeDidInvalidateForArrangedSubview:(id)a0;
- (void)replaceArrangedSubview:(id)a0 atIndex:(unsigned long long)a1;
- (unsigned long long)indexOfArrangedSubview:(id)a0;
- (long long)alignmentForView:(id)a0 inAxis:(long long)a1;
- (struct CGPoint { double x0; double x1; })positionAdjustmentOffsetForView:(id)a0;
- (void)setPositionAdjustmentOffset:(struct CGPoint { double x0; double x1; })a0 forView:(id)a1;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })minimumSpacingAdjacentToView:(id)a0;
- (BOOL)mustRestartMeasurement;
- (BOOL)isInBatchUpdate;
- (void)ensureArrangedSubviewsAreValid;
- (void)assertNotInLayoutPass:(BOOL)a0;
- (id)debugDictionaryForVisibleArrangedSubview:(id)a0;
- (id)debugSetDelegateRespondsToSelectors;
- (id)debugSetEnabledFlags;

@end
