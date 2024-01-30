@class NSString, UICollectionViewDiffableDataSource, UICollectionView, UIBarButtonItem;
@protocol TabGroupProvider;

@interface TabGroupPickerViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDragDelegate, UICollectionViewDropDelegate> {
    id<TabGroupProvider> _tabGroupProvider;
    UICollectionView *_collectionView;
    UICollectionViewDiffableDataSource *_dataSource;
    UIBarButtonItem *_doneButton;
    BOOL _isReordering;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reloadData;
- (id)collectionView:(id)a0 targetIndexPathForMoveOfItemFromOriginalIndexPath:(id)a1 atCurrentIndexPath:(id)a2 toProposedIndexPath:(id)a3;
- (id)collectionView:(id)a0 dropSessionDidUpdate:(id)a1 withDestinationIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)_collectionView:(id)a0 dataOwnerForDragSession:(id)a1 atIndexPath:(id)a2;
- (void)viewDidLoad;
- (void)collectionView:(id)a0 performDropWithCoordinator:(id)a1;
- (id)collectionView:(id)a0 contextMenuConfigurationForItemAtIndexPath:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (BOOL)collectionView:(id)a0 canFocusItemAtIndexPath:(id)a1;
- (long long)_collectionView:(id)a0 dataOwnerForDropSession:(id)a1 withDestinationIndexPath:(id)a2;
- (id)collectionView:(id)a0 itemsForBeginningDragSession:(id)a1 atIndexPath:(id)a2;
- (void)loadView;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)doneButtonTapped;
- (id)initWithTabGroupProvider:(id)a0;
- (id)_swipeActionsConfigurationForIndexPath:(id)a0;
- (BOOL)_shouldShowCheckmarkForTabGroup:(id)a0;
- (id)_checkmarkAccessory;
- (void)_enumerateTabGroupSectionsWithBlock:(id /* block */)a0;

@end
