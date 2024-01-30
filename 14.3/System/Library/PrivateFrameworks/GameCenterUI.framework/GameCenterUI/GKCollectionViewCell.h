@class NSLayoutConstraint, GKStaticRenderContentView, GKEditActionsView, NSArray, UIView, CALayer, GKHairlineView;

@interface GKCollectionViewCell : UICollectionViewCell {
    BOOL _shouldDisplaySwipeToEditAccessories;
    double _contentOriginX;
}

@property (readonly, nonatomic) GKEditActionsView *editActionsView;
@property (retain, nonatomic) UIView *staticContentView;
@property (retain, nonatomic) GKStaticRenderContentView *contentRenderView;
@property (retain, nonatomic) CALayer *leftGradientMask;
@property (nonatomic) BOOL doesAbutLeftEdge;
@property (retain, nonatomic) GKHairlineView *topHairline;
@property (retain, nonatomic) GKHairlineView *bottomHairline;
@property (retain, nonatomic) NSArray *editActionsConstraints;
@property (retain, nonatomic) NSArray *hairlineConstraints;
@property (retain, nonatomic) NSLayoutConstraint *contentLeftConstraint;
@property (nonatomic) double leadingMargin;
@property (nonatomic) double trailingMargin;
@property (retain, nonatomic) id representedItem;
@property (readonly, nonatomic) UIView *interactiveContentView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } alignmentRectForText;
@property (retain, nonatomic) NSArray *editActions;
@property (nonatomic) double editingContentOriginX;

+ (void)registerCellClassesWithCollectionView:(id)a0;

- (void)dealloc;
- (void)updateConstraints;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)prepareForReuse;
- (void)setNeedsDisplay;
- (void)layoutSubviews;
- (id)popoverSourceView;
- (void)applyLayoutAttributes:(id)a0;
- (void)_gkEnumerateSubviewsUsingBlock:(id /* block */)a0;
- (void)prepareEditActionsConstraintsIfNeeded;
- (void)setShouldDisplaySwipeToEditAccessories:(BOOL)a0;
- (void)prepareHairlineConstraintsIfNeeded;
- (void)applyGradientMaskIfNeeded;
- (void)resetEditingContentOrigin;
- (void)didUpdateModel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setEditActionsVisibleWidth:(double)a0;
- (double)contentViewOriginXWhileEditing;
- (double)editActionsVisibleWidth;
- (void)animateOutSwipeToEditAccessories;
- (void)setUserInteractionEnabledForEditing:(BOOL)a0;
- (BOOL)userInteractionEnabledForEditing;
- (BOOL)touchWithinEditActions:(id)a0;
- (void)closeForDelete;
- (void)shutActionPaneAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)finishEditing;
- (void)beginEditing;

@end
