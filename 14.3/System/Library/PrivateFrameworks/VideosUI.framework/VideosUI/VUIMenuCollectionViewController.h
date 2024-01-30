@class VUIMenuDataSource, NSString, NSArray, VUICollectionView, VUIMenuSectionHeaderCollectionViewCell, UICollectionViewDiffableDataSource, _UIDiffableDataSourceSectionController, VUICollectionConfiguration, UICollectionViewCell;
@protocol VUIMenuCollectionViewControllerDelegate;

@interface VUIMenuCollectionViewController : UIViewController <UICollectionViewDelegate, VUICollectionViewDelegate>

@property (retain, nonatomic) VUICollectionConfiguration *collectionConfiguration;
@property (nonatomic) BOOL shouldMarkFirstCategorySelected;
@property (nonatomic) BOOL genresOnlyMenu;
@property (retain, nonatomic) VUICollectionView *menuCollectionView;
@property (retain, nonatomic) UICollectionViewCell *sizingCell;
@property (retain, nonatomic) VUIMenuSectionHeaderCollectionViewCell *sectionHeaderSizingCell;
@property (retain, nonatomic) UICollectionViewDiffableDataSource *diffableDataSource;
@property (retain, nonatomic) NSArray *mainMenuItems;
@property (retain, nonatomic) NSArray *genreMenuItems;
@property (retain, nonatomic) _UIDiffableDataSourceSectionController *sectionController;
@property (nonatomic) BOOL isDesignedForIpadEnabled;
@property (weak, nonatomic) id<VUIMenuCollectionViewControllerDelegate> delegate;
@property (retain, nonatomic) VUIMenuDataSource *categories;
@property (nonatomic) BOOL shouldShowLeftBarButton;
@property (nonatomic) BOOL shouldShowBackButton;
@property (nonatomic) BOOL shouldDeselectOnViewAppear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void)loadView;
- (id)_backButton;
- (void)setTitle:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)_createDiffableDataSourceSnapshot;
- (id)_createDiffableDataSource;
- (id)_leftBarButton;
- (void)_applySnapshotsToSectionController:(BOOL)a0;
- (void)_selectFirstMenuItemIfNecessary;
- (void)_setGenreMenuItemsForCategories:(id)a0;
- (void)_backSelected:(id)a0;
- (void)_leftBarButtonSelected:(id)a0;
- (id)initWithCategories:(id)a0 gridConfiguration:(id)a1;
- (void)updateWithCategories:(id)a0;
- (BOOL)_menuHasContent;

@end
