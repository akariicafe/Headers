@class UIContextMenuInteraction, NSString, NSArray, UICollectionViewDiffableDataSource, CKSearchCollectionView, NSMutableSet, IMTimingCollection, UICollectionViewCompositionalLayout;
@protocol CKContainerSearchControllerDelegate;

@interface CKSearchViewController : CKScrollViewController <CKSearchResultsTitleHeaderCellDelegate, UIContextMenuInteractionDelegate, UICollectionViewDragDelegate, UISearchResultsUpdating, UICollectionViewDelegate, CKSearchControllerDelegate>

@property (retain, nonatomic) NSArray *searchControllers;
@property (copy, nonatomic) NSString *searchText;
@property (nonatomic) BOOL searchInProgress;
@property (retain, nonatomic) CKSearchCollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewDiffableDataSource *dataSource;
@property (retain, nonatomic) UICollectionViewCompositionalLayout *collectionViewLayout;
@property (nonatomic) BOOL isInitialLoad;
@property (copy, nonatomic) id /* block */ performAfterInitialLoadBlock;
@property (retain, nonatomic) NSMutableSet *searchCompleteControllerSet;
@property (retain, nonatomic) IMTimingCollection *timingCollection;
@property (retain, nonatomic) UIContextMenuInteraction *contextMenuInteraction;
@property (weak, nonatomic) id<CKContainerSearchControllerDelegate> delegate;
@property (nonatomic) unsigned long long mode;
@property (nonatomic) BOOL dismissingSearchController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reloadData;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)searchControllerContentsDidChange:(id)a0;
- (void)deleteMessageItem:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (double)widthForDeterminingAvatarVisibility;
- (void)searchEnded;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 canFocusItemAtIndexPath:(id)a1;
- (id)contextMenuInteraction:(id)a0 previewForHighlightingMenuWithConfiguration:(id)a1;
- (void)viewDidLayoutSubviews;
- (id)collectionView:(id)a0 itemsForBeginningDragSession:(id)a1 atIndexPath:(id)a2;
- (id)cellForItemInCollectionView:(id)a0 atIndexPath:(id)a1 withIdentifier:(id)a2;
- (void)cancelCurrentQuery;
- (void)contextMenuInteraction:(id)a0 willPerformPreviewActionForMenuWithConfiguration:(id)a1 animator:(id)a2;
- (void)collectionView:(id)a0 willDisplaySupplementaryView:(id)a1 forElementKind:(id)a2 atIndexPath:(id)a3;
- (BOOL)__im_ff_isInterstellarEnabled;
- (void)updateSearchResultsForSearchController:(id)a0;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)findNext;
- (void)findPrevious;
- (id)scrollView;
- (void)loadView;
- (void)searchController:(id)a0 requestsItemDeletionAtIndexPath:(id)a1;
- (void)deleteTransferGUID:(id)a0;
- (double)containerWidthForController:(id)a0;
- (BOOL)_currentModeIsDetails;
- (id)layoutSectionForSection:(long long)a0 withEnvironment:(id)a1;
- (id)cellForSupplementryItemInCollectionView:(id)a0 atIndexPath:(id)a1 forSupplementryViewKind:(id)a2;
- (void)_searchImmediately;
- (BOOL)_shouldHideShowAllButtonForController:(id)a0;
- (BOOL)_hasSelectedItemAtIndexPath:(id *)a0;
- (long long)rowIndexFindNextForIndex:(long long)a0 numberOfTotalItems:(long long)a1;
- (id)layoutSectionForController:(id)a0 withEnvironment:(id)a1;
- (id)globalLayoutConfiguration;
- (void)_registerCells;
- (BOOL)_needsIndexing;
- (void)_selectItemForFindAtIndexPath:(id)a0;
- (long long)rowIndexFindPreviousForIndex:(long long)a0 numberOfTotalItems:(long long)a1;
- (void)searchController:(id)a0 requestsPresentationOfAlertController:(id)a1 atRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)_identifiersToAppendForResults:(id)a0;
- (Class)_searchResultsHeaderClass;
- (void)_configureIndexingCell:(id)a0;
- (void)_searchResultHeaderButtonTapped:(id)a0;
- (void)searchController:(id)a0 requestsPresentationOfShareController:(id)a1 atRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)viewDidDisappear:(BOOL)a0;
- (id)searchController:(id)a0 cellForResult:(id)a1;
- (id)_layoutSectionForController:(id)a0 withEnvironment:(id)a1;
- (id)_newSnapshotForCurrentControllerState;
- (id)headerBoundryItemsForController:(id)a0 withEnvironment:(id)a1;
- (id)footerBoundryItemsForController:(id)a0 withEnvironment:(id)a1;
- (void).cxx_destruct;
- (void)searchResultsTitleCellShowAllButtonTapped:(id)a0;
- (void)searchWithText:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })parentMarginInsetsForSearchController:(id)a0;
- (BOOL)_isInternalInstall;
- (void)dealloc;
- (BOOL)conversationSearchHasResult;
- (id)initWithSearchControllerClasses:(id)a0;
- (BOOL)contextMenuInteractionShouldBegin:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)containerTraitCollectionForController:(id)a0;
- (BOOL)shouldInsetResultsForSearchController:(id)a0;
- (id)searchController:(id)a0 conversationForChatGUID:(id)a1;

@end
