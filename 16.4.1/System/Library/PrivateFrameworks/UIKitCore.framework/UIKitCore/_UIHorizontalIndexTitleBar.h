@class _UIFocusFastScrollingIndexBarEntry, NSArray, NSString, _UIHorizontalIndexTitleBarCell, UIFocusGuide, UICollectionView, UICollectionViewCompositionalLayout, NSIndexPath;
@protocol _UIHorizontalIndexTitleBarDelegate;

@interface _UIHorizontalIndexTitleBar : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewCompositionalLayout *layout;
@property (retain, nonatomic) UIFocusGuide *horizontalIndexTitleBarFocusGuide;
@property (retain, nonatomic) NSArray *entries;
@property (retain, nonatomic) _UIFocusFastScrollingIndexBarEntry *selectedEntry;
@property (retain, nonatomic) NSIndexPath *selectedEntryIndexPath;
@property (weak, nonatomic) _UIHorizontalIndexTitleBarCell *focusedCell;
@property (weak, nonatomic) id<_UIHorizontalIndexTitleBarDelegate> delegate;
@property (nonatomic, getter=_parentContentInset, setter=_setParentContentInset:) struct UIEdgeInsets { double top; double left; double bottom; double right; } parentContentInset;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } sectionInset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (BOOL)shouldUpdateFocusInContext:(id)a0;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)commonInit;
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)preferredFocusEnvironments;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_cancelDelayedFocusAction;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_combinedSectionInset;
- (id)_currentlyFocusedCell;
- (id)_existingCellForSelectedIndexPath;
- (void)_flipIfRightToLeft;
- (BOOL)_isViewEntryCell:(id)a0;
- (void)_selectEntryForTitleIndex:(long long)a0;
- (void)_selectFocusedCell;
- (void)_sendDelayedFocusActionIfNecessary;
- (void)_updateWithEntries:(id)a0;

@end
