@class NSArray, UIInterfaceActionVisualStyle, UIStackView;

@interface _UIInterfaceActionSeparatableSequenceView : UIView

@property (readonly, nonatomic) UIStackView *stackView;
@property (readonly, nonatomic) NSArray *arrangedContentSeparatorViews;
@property (readonly, nonatomic) NSArray *arrangedContentViewsDistributionConstraints;
@property (retain, nonatomic) UIInterfaceActionVisualStyle *visualStyle;
@property (nonatomic) long long axis;
@property (nonatomic) long long distribution;
@property (retain, nonatomic) NSArray *arrangedContentViews;
@property (nonatomic) unsigned long long visualCornerPosition;
@property (nonatomic) BOOL visualCornerForcedOverride;

- (void)layoutSublayersOfLayer:(id)a0;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)_markRoundedCornerPositionOnNoCornersOfView:(id)a0;
- (void)_markRoundedCornerPositionOnTrailingEdgeOfView:(id)a0;
- (void).cxx_destruct;
- (void)_updateRoundedCornerPositionForActionRepViews;
- (void)_reloadContentDistributionConstraintsForArrangedContentViews;
- (void)updateConstraints;
- (void)_reloadStackViewArrangement;
- (long long)_separatorConstantSizedAxis;
- (void)_updateLayoutWithStackFrameForActionSequenceEdgeInsets;
- (id)initWithVisualStyle:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_viewBoundsForStackViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)fittingWidthForLayoutAxis:(long long)a0;
- (void)_updateSeparatorConstantSizedAxis;
- (void)_updateActionRepresentationViewsCanRemoveContentFromHierarchyWhenNotVisibleSetting;
- (void)_markRoundedCornerPositionOnLeadingEdgeOfView:(id)a0;
- (void)_markRoundedCornerPositionOnAllCornersOfView:(id)a0;
- (void)_setRoundedCornersOfView:(id)a0 toCornerPosition:(unsigned long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_stackViewFrameForViewBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reloadDisplayedContentVisualStyle;
- (void)_addSeparatorToStackAndMutableArray:(id)a0 preferSectionStyle:(BOOL)a1;
- (struct CGSize { double x0; double x1; })_systemLayoutSizeFittingStackView:(struct CGSize { double x0; double x1; })a0;
- (void)_withUnsatisfiableConstraintsLoggingSuspendedIfEngineDelegateExists:(id /* block */)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_setLayoutDebuggingIdentifier:(id)a0;
- (BOOL)_isVerticalLayout;
- (long long)_dimensionAttributeToConstrainEqual;

@end
