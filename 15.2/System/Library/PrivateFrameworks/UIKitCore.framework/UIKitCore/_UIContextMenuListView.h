@class UIMenu, UIView, NSString, _UICutoutShadowView, UICollectionViewDiffableDataSource, UICollectionView, UIVisualEffectView, NSIndexPath;

@interface _UIContextMenuListView : UIView <UICollectionViewDelegate>

@property (retain, nonatomic) _UICutoutShadowView *shadowView;
@property (retain, nonatomic) UIView *topClippingView;
@property (retain, nonatomic) UIView *bottomClippingView;
@property (retain, nonatomic) UIVisualEffectView *backgroundView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewDiffableDataSource *collectionViewDataSource;
@property (retain, nonatomic) UICollectionViewDiffableDataSource *outgoingCollectionViewDataSource;
@property (copy, nonatomic) NSIndexPath *highlightedIndexPath;
@property (nonatomic) double emphasisAlphaMultiplier;
@property (nonatomic) BOOL hasValidContentSize;
@property (retain, nonatomic) UIMenu *displayedMenu;
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
- (void)layoutSubviews;
- (BOOL)collectionView:(id)a0 canFocusItemAtIndexPath:(id)a1;
- (void)_highlightItemAtIndexPath:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateCollectionViewAlpha;
- (void)_sizeClippingAndCollectionViews;
- (id)indexPathForElement:(id)a0;
- (void)unHighlightItemAtIndexPath:(id)a0;
- (void)highlightItemForOutgoingMenu:(id)a0;
- (id)cellForElement:(id)a0;
- (void)didCompleteInPlaceMenuTransition;
- (void)_updateCornerRadius;
- (id)_headerIndexPath;
- (void)highlightItemAtIndexPath:(id)a0;
- (void)_updateShadowAlpha;
- (void).cxx_destruct;
- (BOOL)_shouldScrollToSelectedAction;
- (id)_viewAtIndexPath:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)scrollToFirstSignificantAction;
- (id)_dataSourceForCollectionView:(id)a0;
- (struct CGSize { double x0; double x1; })preferredContentSizeWithWidth:(double)a0;
- (id)elementAtIndexPath:(id)a0;
- (void)_configureCell:(id)a0 forElement:(id)a1 section:(id)a2;
- (double)_clampedCornerRadius;
- (id)preferredFocusEnvironments;
- (id)indexPathForItemAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)setSubmenuTitleViewExpanded:(BOOL)a0 withMaterialGroupName:(id)a1 numberOfTitleLines:(unsigned long long)a2 highlighted:(BOOL)a3;

@end
