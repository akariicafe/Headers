@class NSString, _UIKeyShortcutHUDMetrics, UICollectionViewSupplementaryRegistration, _UIKeyShortcutHUDMenu, _UIKeyShortcutHUDCollectionViewManager, UICollectionViewDiffableDataSource, UICollectionView, UIVisualEffectView, UICollectionViewCellRegistration;
@protocol _UIKeyShortcutHUDMenuViewControllerDelegate;

@interface _UIKeyShortcutHUDMenuViewController : UIViewController <_UIKeyShortcutHUDCollectionViewManagerClient>

@property (retain, nonatomic) UIVisualEffectView *visualEffectView;
@property (retain, nonatomic) UICollectionViewCellRegistration *cellRegistration;
@property (retain, nonatomic) UICollectionViewSupplementaryRegistration *cellSeparatorRegistration;
@property (retain, nonatomic) UICollectionViewSupplementaryRegistration *sectionHeaderRegistration;
@property (retain, nonatomic) UICollectionViewDiffableDataSource *dataSource;
@property (nonatomic, getter=isTransitioningSearch) BOOL transitioningSearch;
@property (nonatomic) unsigned long long currentScrolledToCategoryIndex;
@property (weak, nonatomic) id<_UIKeyShortcutHUDMenuViewControllerDelegate> delegate;
@property (weak, nonatomic) _UIKeyShortcutHUDCollectionViewManager *collectionViewManager;
@property (weak, nonatomic) _UIKeyShortcutHUDMenu *menu;
@property (weak, nonatomic) _UIKeyShortcutHUDMetrics *metrics;
@property (nonatomic, getter=isSearching) BOOL searching;
@property (readonly, nonatomic) UICollectionView *collectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (BOOL)_canShowWhileLocked;
- (void)_configureCollectionView;
- (id)_standardModeCollectionViewLayout;
- (void)_displayMenu:(id)a0 animatingDifferences:(BOOL)a1;
- (id)_searchModeCollectionViewLayout;
- (id)indexPathsForSeparatorsUsedByCellAtIndexPath:(id)a0;
- (void)hudWillBecomeHidden:(BOOL)a0;
- (void)setMenu:(id)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)flashShortcutIfVisible:(id)a0 completionHandler:(id /* block */)a1;
- (void)prepareForSearchTransition:(BOOL)a0;
- (void)didCompleteSearchTransition;
- (void)scrollToCategory:(id)a0 withCategoryIndex:(long long)a1 animated:(BOOL)a2;
- (id)indexPathsForCellsUsingSeparatorAtIndexPath:(id)a0;
- (BOOL)shouldPersistSelectionForCellAtIndexPath:(id)a0;
- (BOOL)selectionFollowsFocusForItemAtIndexPath:(id)a0;
- (void)didScrollCollectionView;
- (void)performActionForSelectingCellAtIndexPath:(id)a0;
- (void)_setupSubviews;

@end
