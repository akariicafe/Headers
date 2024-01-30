@class NSString, UICollectionViewSupplementaryRegistration, _UIKeyShortcutHUDMenu, _UIKeyShortcutHUDCollectionViewManager, UICollectionViewDiffableDataSource, UIKeyShortcutHUDMetrics, UIVisualEffectView, UICollectionViewCellRegistration, UICollectionView;
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
@property (weak, nonatomic) UIKeyShortcutHUDMetrics *metrics;
@property (nonatomic, getter=isSearching) BOOL searching;
@property (readonly, nonatomic) UICollectionView *collectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)_searchModeCollectionViewLayout;
- (void)_configureCollectionView;
- (void)_displayMenu:(id)a0 animatingDifferences:(BOOL)a1;
- (void)_setupSubviews;
- (id)_standardModeCollectionViewLayout;
- (void)didCompleteSearchTransition;
- (void)didScrollCollectionView;
- (void)flashShortcutIfVisible:(id)a0 completionHandler:(id /* block */)a1;
- (void)hudWillBecomeHidden:(BOOL)a0;
- (id)indexPathsForCellsUsingSeparatorAtIndexPath:(id)a0;
- (id)indexPathsForSeparatorsUsedByCellAtIndexPath:(id)a0;
- (void)performActionForSelectingCellAtIndexPath:(id)a0;
- (void)prepareForSearchTransition:(BOOL)a0;
- (void)scrollToCategory:(id)a0 withCategoryIndex:(long long)a1 animated:(BOOL)a2;
- (BOOL)selectionFollowsFocusForItemAtIndexPath:(id)a0;
- (void)setMenu:(id)a0 animated:(BOOL)a1;
- (BOOL)shouldPersistSelectionForCellAtIndexPath:(id)a0;

@end
