@class NSString, UICollectionViewDiffableDataSource, UICollectionView, UIBarButtonItem;
@protocol TabGroupProvider;

@interface TabGroupPickerViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDragDelegate, UICollectionViewDropDelegate, WBTabGroupManagerObserver> {
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

- (void)collectionView:(id)a0 performDropWithCoordinator:(id)a1;
- (void)tabGroupManager:(id)a0 didUpdateTabGroupWithUUID:(id)a1;
- (id)collectionView:(id)a0 targetIndexPathForMoveOfItemFromOriginalIndexPath:(id)a1 atCurrentIndexPath:(id)a2 toProposedIndexPath:(id)a3;
- (long long)_collectionView:(id)a0 dataOwnerForDragSession:(id)a1 atIndexPath:(id)a2;
- (void)reloadData;
- (long long)_collectionView:(id)a0 dataOwnerForDropSession:(id)a1 withDestinationIndexPath:(id)a2;
- (id)collectionView:(id)a0 contextMenuConfigurationForItemAtIndexPath:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (id)collectionView:(id)a0 itemsForBeginningDragSession:(id)a1 atIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 canFocusItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 dropSessionDidUpdate:(id)a1 withDestinationIndexPath:(id)a2;
- (void)viewDidLoad;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)loadView;
- (void)tabGroupManagerDidUpdateTabGroups:(id)a0;
- (id)_checkmarkAccessory;
- (void)doneButtonTapped;
- (void)_enumerateTabGroupSectionsWithBlock:(id /* block */)a0;
- (BOOL)_shouldShowCheckmarkForTabGroup:(id)a0;
- (id)_swipeActionsConfigurationForIndexPath:(id)a0;
- (id)initWithTabGroupProvider:(id)a0;

@end
