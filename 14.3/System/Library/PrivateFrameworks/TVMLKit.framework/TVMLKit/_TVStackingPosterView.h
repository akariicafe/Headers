@class NSArray, NSString, UIView, NSLayoutConstraint, _TVAnimatedLabel;

@interface _TVStackingPosterView : UIView <TVAuxiliaryViewSelecting> {
    BOOL _requiresReconfiguration;
    NSLayoutConstraint *_topAnchorConstraint;
    NSLayoutConstraint *_bottomAnchorConstraint;
    NSLayoutConstraint *_topImageConstraint;
    NSLayoutConstraint *_bottomImageConstraint;
    double _topAnchorConstant;
    double _bottomAnchorConstant;
    double _topImageConstant;
    double _bottomImageConstant;
    double _labelWidthExpansionAmount;
    NSArray *_labelWidthConstraints;
}

@property (nonatomic) struct TVCellMetrics { struct CGSize { double width; double height; } cellSize; struct UIEdgeInsets { double top; double left; double bottom; double right; } cellPadding; struct UIEdgeInsets { double top; double left; double bottom; double right; } cellInset; struct UIEdgeInsets { double top; double left; double bottom; double right; } cellInsetAlt; struct UIEdgeInsets { double top; double left; double bottom; double right; } cellMargin; } cellMetrics;
@property (copy, nonatomic) NSArray *filteredComponents;
@property (retain, nonatomic) UIView *mainImageComponent;
@property (retain, nonatomic) _TVAnimatedLabel *animatedLabel;
@property (copy, nonatomic) NSArray *marqueeLabels;
@property (copy, nonatomic) NSArray *visibleLabelWidths;
@property (nonatomic) struct CGSize { double width; double height; } maxBoundsSize;
@property (copy, nonatomic) NSArray *components;
@property (retain, nonatomic) UIView *overlayView;
@property (nonatomic) BOOL configuresForCollectionViewCell;
@property (nonatomic) struct CGPoint { double x0; double x1; } focusDirection;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)preferredFocusEnvironments;
- (void)_commonInit;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)setPressed:(BOOL)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)setFocusDirection:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1;
- (void)_configureSubviews;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)_preferredConfigurationForFocusAnimation:(long long)a0 inContext:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1 withAnimationCoordinator:(id)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })selectionMarginsForSize:(struct CGSize { double x0; double x1; })a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })tv_alignmentInsetsForExpectedWidth:(double)a0;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1 focusUpdateContext:(id)a2 withAnimationCoordinator:(id)a3;
- (void)setComponents:(id)a0 mainImageComponent:(id)a1;
- (void)_resetSubviews;
- (void)_updateShadowForLabel:(id)a0 inFocus:(BOOL)a1;
- (void)_updateFocusSizeIncrease;
- (struct TVCellMetrics { struct CGSize { double x0; double x1; } x0; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x1; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x2; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x3; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x4; })_cellMetricsForMaxSize:(struct CGSize { double x0; double x1; })a0;
- (void)_updateComponentConstraints;
- (void)_updateSubviewHeirarchyWithComponents:(id)a0;
- (double)_labelWidthForWidth:(double)a0 component:(id)a1 expansionAmount:(double)a2;
- (void)setNeedsUpdateComponentLayout;

@end
