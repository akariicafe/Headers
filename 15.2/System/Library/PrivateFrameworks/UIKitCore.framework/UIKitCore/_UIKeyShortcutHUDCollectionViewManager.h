@class NSArray, _UIKeyShortcutHUDViewController, _UIKeyShortcutHUDIndexPath, NSString;
@protocol _UIKeyShortcutHUDCollectionViewManagerClient;

@interface _UIKeyShortcutHUDCollectionViewManager : NSObject <UICollectionViewDelegate, UIScrollViewDelegate>

@property (retain, nonatomic) _UIKeyShortcutHUDIndexPath *selectedIndexPath;
@property (retain, nonatomic) _UIKeyShortcutHUDIndexPath *highlightedIndexPath;
@property (retain, nonatomic) _UIKeyShortcutHUDIndexPath *categoryVisibleIndexPath;
@property (readonly, nonatomic) NSArray *allClients;
@property (weak, nonatomic) _UIKeyShortcutHUDViewController *hudVC;
@property (weak, nonatomic) id<_UIKeyShortcutHUDCollectionViewManagerClient> menu;
@property (weak, nonatomic) id<_UIKeyShortcutHUDCollectionViewManagerClient> toolbar;
@property (weak, nonatomic) id<_UIKeyShortcutHUDCollectionViewManagerClient> searchButton;
@property (readonly, nonatomic) NSArray *preferredFocusEnvironments;
@property (nonatomic) BOOL nextFocusUpdatePrefersTopSearchResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)_client:(id)a0 performBookkeepingForRemovingCategoryVisibleForCellAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didHighlightItemAtIndexPath:(id)a1;
- (void)_client:(id)a0 performBookkeepingForSettingCategoryVisibleForCellAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didDeselectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)_collectionView:(id)a0 updateSeparatorVisibilityForCellAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 selectionFollowsFocusForItemAtIndexPath:(id)a1;
- (void)_client:(id)a0 performBookkeepingForHighlightingCellAtIndexPath:(id)a1;
- (void)_collectionView:(id)a0 performActionForSelectingCellAtIndexPath:(id)a1;
- (void)_client:(id)a0 performBookkeepingForUnhighlightingCellAtIndexPath:(id)a1;
- (void)_client:(id)a0 performBookkeepingForSelectingCellAtIndexPath:(id)a1;
- (void)_client:(id)a0 performBookkeepingForDeselectingCellAtIndexPath:(id)a1;
- (void)client:(id)a0 flashCellIfPossibleAtIndexPath:(id)a1 completionHandler:(id /* block */)a2;
- (void)collectionView:(id)a0 willDisplaySupplementaryView:(id)a1 forElementKind:(id)a2 atIndexPath:(id)a3;
- (void)collectionView:(id)a0 didUnhighlightItemAtIndexPath:(id)a1;
- (void)_client:(id)a0 removeCategoryVisibleForCellAtIndexPath:(id)a1;
- (void)_client:(id)a0 setCategoryVisibleForCellAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)_configureCollectionView:(id)a0;
- (id)_clientForCollectionView:(id)a0;
- (void)client:(id)a0 selectCellAtIndexPath:(id)a1;
- (void)_client:(id)a0 deselectCellAtIndexPath:(id)a1;
- (BOOL)client:(id)a0 shouldHideSeparatorAtIndexPath:(id)a1;
- (void)client:(id)a0 reloadSeparatorAtIndexPath:(id)a1;
- (void)_client:(id)a0 selectCellAtIndexPath:(id)a1;
- (void)_client:(id)a0 unhighlightCellAtIndexPath:(id)a1;
- (void)_client:(id)a0 highlightCellAtIndexPath:(id)a1;
- (void)client:(id)a0 highlightCellAtIndexPath:(id)a1;
- (BOOL)client:(id)a0 isCategoryVisibleForCellAtIndexPath:(id)a1;
- (void)reloadAllVisibleSeparatorsForClient:(id)a0;
- (void)deselectCurrentlySelectedCell;
- (void)client:(id)a0 setCategoryVisibleForCellAtIndexPath:(id)a1;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;

@end
