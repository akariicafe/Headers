@class NSArray, LibraryItemController, WebBookmarkCollection, NSString, UICollectionViewDiffableDataSource, UICollectionView;
@protocol LibraryViewControllerDelegate;

@interface LibraryViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDragDelegate, UICollectionViewDropDelegate, LibraryContentObserver> {
    UICollectionViewDiffableDataSource *_dataSource;
    UICollectionView *_collectionView;
}

@property (weak, nonatomic) id<LibraryViewControllerDelegate> delegate;
@property (readonly, nonatomic) WebBookmarkCollection *collection;
@property (copy, nonatomic) NSArray *sectionControllers;
@property (retain, nonatomic) LibraryItemController *selectedItemController;
@property (retain, nonatomic) LibraryItemController *presentedItemController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)collectionView:(id)a0 shouldSpringLoadItemAtIndexPath:(id)a1 withContext:(id)a2;
- (id)collectionView:(id)a0 dropSessionDidUpdate:(id)a1 withDestinationIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)collectionView:(id)a0 performDropWithCoordinator:(id)a1;
- (id)collectionView:(id)a0 contextMenuConfigurationForItemAtIndexPath:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 canFocusItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 selectionFollowsFocusForItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 itemsForBeginningDragSession:(id)a1 atIndexPath:(id)a2;
- (void)updateSelection;
- (void)scrollToTopAnimated:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)librarySectionContentDidChange:(id)a0;
- (void)reloadSectionControllersAnimated:(BOOL)a0;
- (id)_swipeActionsConfigurationForIndexPath:(id)a0;
- (id)_diffableDataSourceForCollectionView:(id)a0;
- (void)_highlightCenterEnablementDidChange:(id)a0;
- (void)updateSelectionByIgnoringExistingSelection:(BOOL)a0;
- (void)_enumerateItemControllersWithBlock:(id /* block */)a0;
- (void)_collectionViewDidSelectItem:(id)a0 atIndexPath:(id)a1;
- (BOOL)_lastSectionShouldFloat;

@end
