@class _UIFocusFastScrollingIndexBarEntry, NSArray, UICollectionViewFlowLayout, NSString, _UIHorizontalIndexTitleBarCell, UIFocusGuide, UICollectionView, NSIndexPath;
@protocol _UIHorizontalIndexTitleBarDelegate;

@interface _UIHorizontalIndexTitleBar : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *flowLayout;
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
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)preferredFocusEnvironments;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (BOOL)shouldUpdateFocusInContext:(id)a0;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_updateSectionInset;
- (void)_selectFocusedCell;
- (id)_existingCellForSelectedIndexPath;
- (void)commonInit;
- (id)_currentlyFocusedCell;
- (void)_selectEntryForTitleIndex:(long long)a0;
- (void)_cancelDelayedFocusAction;
- (void)_sendDelayedFocusActionIfNecessary;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)_isViewEntryCell:(id)a0;
- (void)_updateWithEntries:(id)a0;
- (void)_flipIfRightToLeft;

@end
