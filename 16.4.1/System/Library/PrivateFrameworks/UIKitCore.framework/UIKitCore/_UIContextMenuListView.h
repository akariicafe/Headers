@class UIView, UIMenu, NSString, _UICutoutShadowView, UICollectionViewDiffableDataSource, UIBezierPath, UIVisualEffectView, UICollectionView, NSIndexPath;

@interface _UIContextMenuListView : UIView <UICollectionViewDelegate>

@property (retain, nonatomic) _UICutoutShadowView *shadowView;
@property (retain, nonatomic) UIView *clippingView;
@property (retain, nonatomic) UIVisualEffectView *backgroundView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewDiffableDataSource *collectionViewDataSource;
@property (retain, nonatomic) UICollectionViewDiffableDataSource *outgoingCollectionViewDataSource;
@property (copy, nonatomic) NSIndexPath *highlightedIndexPath;
@property (nonatomic) double emphasisAlphaMultiplier;
@property (nonatomic) BOOL hasValidContentSize;
@property (retain, nonatomic) UIBezierPath *hoverZone;
@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } contentMargins;
@property (retain, nonatomic) UIMenu *displayedMenu;
@property (nonatomic) unsigned long long parentHierarchyStyle;
@property (nonatomic) unsigned long long position;
@property (nonatomic) BOOL reversesActionOrder;
@property (nonatomic) BOOL emphasized;
@property (nonatomic) BOOL allowsFocus;
@property (nonatomic) unsigned long long roundedEdges;
@property (nonatomic) double shadowAlpha;
@property (nonatomic) double collectionViewAlpha;
@property (nonatomic) struct CGSize { double width; double height; } nativeContentSize;
@property (nonatomic) struct CGSize { double width; double height; } visibleContentSize;
@property (readonly, nonatomic) struct CGVector { double x0; double x1; } scrubGestureAllowableMovement;
@property (readonly, nonatomic) NSString *backgroundMaterialGroupName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)collectionView:(id)a0 didUpdateFocusInContext:(id)a1 withAnimationCoordinator:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)preferredFocusEnvironments;
- (BOOL)collectionView:(id)a0 canFocusItemAtIndexPath:(id)a1;
- (void)layoutSubviews;
- (void)_updateCornerRadius;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_sizeClippingAndCollectionViews;
- (id)cellForElement:(id)a0;
- (double)_clampedCornerRadius;
- (void)_configureCell:(id)a0 forElement:(id)a1 section:(id)a2 size:(long long)a3;
- (id)_dataSourceForCollectionView:(id)a0;
- (id)_headerIndexPath;
- (id)_platformMetrics;
- (BOOL)_shouldScrollToSelectedAction;
- (void)_updateCollectionViewAlpha;
- (void)_updateContentMargins;
- (void)_updateScrollInsets;
- (void)_updateShadowAlpha;
- (id)_viewAtIndexPath:(id)a0;
- (void)didCompleteInPlaceMenuTransition;
- (id)elementAtIndexPath:(id)a0;
- (void)highlightItemAtIndexPath:(id)a0;
- (id)indexPathForElement:(id)a0;
- (id)indexPathForItemAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })preferredContentSizeWithinContainerSize:(struct CGSize { double x0; double x1; })a0;
- (void)scrollToFirstSignificantAction;
- (void)setSubmenuTitleViewExpanded:(BOOL)a0 withMaterialGroupName:(id)a1 numberOfTitleLines:(unsigned long long)a2 highlighted:(BOOL)a3;
- (void)unHighlightItemAtIndexPath:(id)a0;

@end
