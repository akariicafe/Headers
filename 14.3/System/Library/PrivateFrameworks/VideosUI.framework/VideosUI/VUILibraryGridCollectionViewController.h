@class VUIFamilyMember, NSString, NSArray, VUICollectionHeaderView, VUIViewControllerContentPresenter, VUIMediaEntitiesDataSource, VUIMediaEntityFetchRequest, UICollectionViewDiffableDataSource, NSMutableDictionary, UIBarButtonItem, UICollectionViewCell;
@protocol VUILibraryGridCollectionViewControllerDelegate;

@interface VUILibraryGridCollectionViewController : UICollectionViewController <VUILibraryDataSourceDelegate, VUIFamilySharingContentProtocol> {
    BOOL _requiresRelayout;
    struct CGSize { double width; double height; } _cellSize;
    NSMutableDictionary *_cellMetrics;
    VUICollectionHeaderView *_sizingHeaderView;
}

@property (retain, nonatomic) VUIMediaEntitiesDataSource *entitiesDataSource;
@property (retain, nonatomic) VUIMediaEntityFetchRequest *fetchRequest;
@property (retain, nonatomic) UICollectionViewCell *sizingCell;
@property (nonatomic) double cellWidth;
@property (retain, nonatomic) UIBarButtonItem *currentNavBarButtonItem;
@property (retain, nonatomic) VUIViewControllerContentPresenter *contentPresenter;
@property (retain, nonatomic) UICollectionViewDiffableDataSource *diffableDataSource;
@property (nonatomic) BOOL waitingForFetch;
@property (retain, nonatomic) NSArray *mediaEntities;
@property (weak, nonatomic) id<VUILibraryGridCollectionViewControllerDelegate> delegate;
@property (nonatomic) long long gridFilter;
@property (nonatomic) long long gridStyle;
@property (nonatomic) long long gridType;
@property (nonatomic) BOOL hideLockupTitles;
@property (retain, nonatomic) UIBarButtonItem *libraryBarButton;
@property (nonatomic) BOOL forceBackButton;
@property (retain, nonatomic) NSString *pageType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) VUIFamilyMember *familyMember;

- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)initWithDataSource:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)_createDiffableDataSourceSnapshot;
- (void)dataSourceDidFinishFetching:(id)a0;
- (void)dataSourceDidFinishFetchingArtwork:(id)a0;
- (void)_updateNavigationBarPadding;
- (id)_createDiffableDataSource;
- (double)_computeBottomMargin;
- (id)_getEntityIdentifiersFromEntities;
- (void)_updateCurrentViewIfNeeded;
- (void)_applySnapshotFromEntitiesAndAnimateDifferences:(BOOL)a0;
- (id)_createCollectionView;
- (void)_applyInitialSnapshot;
- (void)_updateLayoutForSize:(struct CGSize { double x0; double x1; })a0;
- (void)_configureSizingCellForItemAtIndexPath:(id)a0;
- (void)_iOSHandleCellSelectionAtIndexPath:(id)a0;
- (id)_createCollectionViewFlowLayout;
- (void)updateWithLatestMediaEntities:(id)a0;
- (void)setTitle:(id)a0 withLargeTitleDisplayEnabled:(BOOL)a1;

@end
