@class VUIMediaCollection, NSArray, NSString, VUILibraryMediaCollectionViewModel, UICollectionViewDiffableDataSource, VUIMediaEntitiesDataSource, VUIViewControllerContentPresenter;

@interface VUILibraryMediaCollectionViewController : VUILibraryStackViewController <UICollectionViewDelegate, VUIProductLockupViewDelegate, TVShelfViewLayoutDelegate, VUILibraryEpisodeFooterCellDelegate, VUILibraryEpisodeShelfViewControllerDelegate, VUILibraryDataSourceDelegate>

@property (retain, nonatomic) NSArray *seasons;
@property (retain, nonatomic) NSArray *episodes;
@property (retain, nonatomic) NSArray *episodeGroups;
@property (retain, nonatomic) VUILibraryMediaCollectionViewModel *mediaCollectionViewModel;
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
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)start;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)loadView;
- (BOOL)_allFetchesHaveCompleted;
- (void)_buildMediaCollectionViewModel;
- (id)_createDiffableDataSourceForCollectionView:(id)a0;
- (id)_createDiffableDataSourceSnapshot;
- (id)_episodeShelfViewControllerWithSeason:(id)a0 episodes:(id)a1;
- (id)_episodesBySeasonIdentifier;
- (id)_productLockupViewWithSeason:(id)a0;
- (id)_seasonViewModelByIdentifier:(id)a0;
- (id)_seasonViewModelIdentifiers;
- (void)_updateAfterContentWasManuallyDeleted:(BOOL)a0;
- (void)_updateDeletedContentErrorMessage;
- (void)_updateEpisodeShelvesWithLatestEpisodes;
- (void)_updateMediaCollectionViewModelForSeasons;
- (void)_updateProductLockupView:(id)a0 withSeason:(id)a1;
- (void)_updateProductLockupViewWithSeasonIdentifier:(id)a0;
- (BOOL)_usingEpisodesGroupFetch;
- (void)addDownloadButtonToProductLockupView:(id)a0 forSeason:(id)a1;
- (void)configureWithCollectionView:(id)a0;
- (void)contentDescriptionExpanded;
- (void)dataSourceDidFinishFetching:(id)a0;
- (id)initWithTitle:(id)a0 withSeasonsDataSource:(id)a1 withEpisodesDataSource:(id)a2;
- (void)libraryEpisodesShelfViewController:(id)a0 didRemoveDownloadForAssetController:(id)a1;
- (void)titleButtonPressedForStoreId:(id)a0;

@end
