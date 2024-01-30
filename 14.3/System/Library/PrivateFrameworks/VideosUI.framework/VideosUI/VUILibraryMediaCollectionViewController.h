@class NSString, NSArray, VUIMediaEntitiesDataSource, VUIMediaCollection, NSMutableDictionary, VUILibraryMediaCollectionViewModel, UICollectionViewDiffableDataSource, VUIViewControllerContentPresenter;

@interface VUILibraryMediaCollectionViewController : VUILibraryStackViewController <UICollectionViewDelegate, VUIProductLockupViewDelegate, TVShelfViewLayoutDelegate, VUILibraryEpisodeFooterCellDelegate, VUILibraryEpisodeShelfViewControllerDelegate, VUILibraryDataSourceDelegate>

@property (retain, nonatomic) NSArray *seasons;
@property (retain, nonatomic) NSArray *episodes;
@property (retain, nonatomic) NSArray *episodeGroups;
@property (retain, nonatomic) VUILibraryMediaCollectionViewModel *mediaCollectionViewModel;
@property (retain, nonatomic) NSMutableDictionary *downloadButtonBySeasonIdentifier;
@property (retain, nonatomic) NSString *showTitle;
@property (retain, nonatomic) VUIMediaEntitiesDataSource *seasonsDataSource;
@property (retain, nonatomic) VUIMediaEntitiesDataSource *episodesDataSource;
@property (nonatomic) BOOL seasonsFetchHasCompleted;
@property (nonatomic) BOOL episodesFetchHasCompleted;
@property (retain, nonatomic) UICollectionViewDiffableDataSource *diffableDataSource;
@property (nonatomic) BOOL canShowMultipleSeasons;
@property (retain, nonatomic) VUIMediaCollection *mediaCollection;
@property (retain, nonatomic) VUIViewControllerContentPresenter *contentPresenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void)loadView;
- (void)start;
- (void)viewDidAppear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)_createDiffableDataSourceSnapshot;
- (id)_createDiffableDataSourceForCollectionView:(id)a0;
- (void)libraryEpisodesShelfViewController:(id)a0 didRemoveDownloadForAssetController:(id)a1;
- (void)configureWithCollectionView:(id)a0;
- (void)dataSourceDidFinishFetching:(id)a0;
- (void)_updateAfterContentWasManuallyDeleted:(BOOL)a0;
- (void)contentDescriptionExpanded;
- (void)titleButtonPressedForStoreId:(id)a0;
- (id)initWithTitle:(id)a0 withSeasonsDataSource:(id)a1 withEpisodesDataSource:(id)a2;
- (BOOL)_allFetchesHaveCompleted;
- (id)_seasonViewModelByIdentifier:(id)a0;
- (id)_productLockupViewWithSeason:(id)a0;
- (BOOL)_usingEpisodesGroupFetch;
- (void)_buildMediaCollectionViewModel;
- (void)_updateDeletedContentErrorMessage;
- (void)_updateMediaCollectionViewModelForSeasons;
- (void)_updateEpisodeShelvesWithLatestEpisodes;
- (id)_seasonViewModelIdentifiers;
- (void)_updateProductLockupViewWithSeasonIdentifier:(id)a0;
- (id)_episodesBySeasonIdentifier;
- (id)_episodeShelfViewControllerWithSeason:(id)a0 episodes:(id)a1;
- (void)_updateProductLockupView:(id)a0 withSeason:(id)a1;
- (void)addDownloadButtonToProductLockupView:(id)a0 forSeason:(id)a1;

@end
