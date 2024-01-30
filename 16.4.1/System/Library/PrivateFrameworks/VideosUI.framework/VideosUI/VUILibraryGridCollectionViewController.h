@class VUIFamilyMember, NSString, NSArray, VUICollectionHeaderView, VUIViewControllerContentPresenter, VUIMediaEntitiesDataSource, VUIMediaEntityFetchRequest, UICollectionViewDiffableDataSource, NSMutableDictionary, UIBarButtonItem, UICollectionViewCell;
@protocol VUILibraryGridCollectionViewControllerDelegate;

@interface VUILibraryGridCollectionViewController : UICollectionViewController <VUILibraryDataSourceDelegate, VUIFamilySharingContentProtocol> {
    double _lastViewWidth;
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
@property (nonatomic) long long gridStyle;
@property (nonatomic) long long gridType;
@property (weak, nonatomic) id<VUILibraryGridCollectionViewControllerDelegate> delegate;
@property (nonatomic) long long gridFilter;
@property (nonatomic) BOOL hideLockupTitles;
@property (retain, nonatomic) UIBarButtonItem *libraryBarButton;
@property (nonatomic) BOOL forceBackButton;
@property (retain, nonatomic) NSString *pageType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) VUIFamilyMember *familyMember;

- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (id)initWithDataSource:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (id)_createCollectionViewFlowLayout;
- (void)_applyInitialSnapshot;
- (void)_applySnapshotFromEntitiesAndAnimateDifferences:(BOOL)a0;
- (double)_computeBottomMargin;
- (void)_configureSizingCellForItemAtIndexPath:(id)a0;
- (id)_createCollectionView;
- (id)_createDiffableDataSource;
- (id)_createDiffableDataSourceSnapshot;
- (id)_getEntityIdentifiersFromEntities;
- (void)_iOSHandleCellSelectionAtIndexPath:(id)a0;
- (void)_updateCurrentViewIfNeeded;
- (void)_updateLayoutForSize:(struct CGSize { double x0; double x1; })a0;
- (void)_updateNavigationBarPadding;
- (void)dataSourceDidFinishFetching:(id)a0;
- (void)dataSourceDidFinishFetchingArtwork:(id)a0;
- (void)setTitle:(id)a0 withLargeTitleDisplayEnabled:(BOOL)a1;
- (void)updateWithLatestMediaEntities:(id)a0;

@end
