@class VUIDialogInteractionController, NSArray, VUIEpisodeDetailViewController, UICollectionViewDiffableDataSource, NSString, NSIndexPath, VUILibraryEpisodeListCell;
@protocol VUILibraryEpisodeShelfViewControllerDelegate;

@interface VUILibraryEpisodeShelfViewController : VUIShelfViewController <UICollectionViewDelegate, TVShelfViewLayoutDelegate, VUIEpisodeDetailViewControllerDelegate, VUIDialogInteractionControllerDelegate, VUILibraryDownloadPopoverViewControllerDelegate> {
    VUILibraryEpisodeListCell *_sizingCell;
    VUIDialogInteractionController *_dialogInteractionController;
}

@property (copy, nonatomic) NSArray *episodeViewModels;
@property (retain, nonatomic) VUIEpisodeDetailViewController *episodeDetailViewController;
@property (retain, nonatomic) NSIndexPath *popoverIndexPath;
@property (nonatomic) BOOL shouldIgnoreSelectEvent;
@property (retain, nonatomic) UICollectionViewDiffableDataSource *diffableDataSource;
@property (weak, nonatomic) id<VUILibraryEpisodeShelfViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willMoveToParentViewController:(id)a0;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)_updateHeaderView;
- (void)viewDidLoad;
- (id)_episodeViewModelsWithFetchedEpisodes:(id)a0;
- (id)_createDiffableDataSourceSnapshot;
- (void)updateShelfLayout:(id)a0;
- (id)_episodeWithIdentifier:(id)a0;
- (id)_createDiffableDataSourceForCollectionView:(id)a0;
- (BOOL)_canRemoveEpisodeAtIndexPath:(id)a0;
- (id)_getEntityIdentifiersFromViewModels;
- (void)episodeDetailViewControllerWasDismissed:(id)a0;
- (BOOL)dialogInteractionController:(id)a0 shouldBeginInteractionForIndexPath:(id)a1;
- (void)dialogInteractionController:(id)a0 interactionDidBeginForIndexPath:(id)a1;
- (void)dialogInteractionController:(id)a0 interactionDidEndForIndexPath:(id)a1;
- (void)removeDownloadPressed;
- (void)removeDownloadDismissed;
- (id)initWithEpisodes:(id)a0;
- (void)updateWithEpisodes:(id)a0;
- (void)configureWithCollectionView:(id)a0;
- (void)_configureShelfLayout:(id)a0;

@end
