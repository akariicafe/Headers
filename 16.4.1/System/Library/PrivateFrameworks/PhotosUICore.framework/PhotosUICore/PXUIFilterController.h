@class PXAssetsDataSourceCountsController, NSString, NSArray, PXAssetsDataSourceManager, PXLibraryFilterState, PXSharedLibraryFaceTileImageProvider, PXContentFilterState;
@protocol PXFilterControllerDelegate;

@interface PXUIFilterController : UITableViewController <UITableViewDataSource, UITableViewDelegate, PXChangeObserver, PXFilterController> {
    PXSharedLibraryFaceTileImageProvider *_faceTileImageProvider;
    NSArray *_libraryFilterGroups;
    NSArray *_contentFilterGroups;
    PXAssetsDataSourceCountsController *_countsController;
}

@property (readonly, weak, nonatomic) id<PXFilterControllerDelegate> filterControllerDelegate;
@property (nonatomic) BOOL isSharedLibraryAlbum;
@property (nonatomic) BOOL showLibraryOptions;
@property (nonatomic) BOOL showContentOptions;
@property (retain, nonatomic) PXAssetsDataSourceManager *dataSourceManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) PXLibraryFilterState *libraryFilterState;
@property (copy, nonatomic) PXContentFilterState *contentFilterState;

- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)_doneButtonPressed:(id)a0;
- (void)viewDidLoad;
- (id)initWithDelegate:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)tableView:(id)a0 didDeselectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 estimatedHeightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)_setupTableView;
- (long long)_adjustedContentFilterSection:(long long)a0;
- (id)_contentFilterGroups;
- (long long)_contentFilterGroupsCount;
- (BOOL)_isContentFilterSection:(long long)a0;
- (BOOL)_isLibraryFilterSection:(long long)a0;
- (id)_libraryFilterGroups;
- (long long)_libraryFilterGroupsCount;
- (id)_localizedCounts;
- (id)_localizedGuestCounts;
- (id)_sectionHeaderTitleTextAttributes;
- (void)_setVisibilityForSender:(id)a0;
- (void)_setupFaceTileImageProvider;
- (void)_setupNavigationBar;
- (id)_sharedLibraryAllPhotosAndVideosIndexPath;
- (void)_tappedRowAtIndexPath:(id)a0;
- (void)_updateContentFilterStateWithFilterItemTag:(long long)a0 shouldEnable:(BOOL)a1;
- (void)_updateFooterStatus;
- (void)_updateParticipantsImage;
- (id)initWithDelegate:(id)a0 initialContentFilterState:(id)a1 isSyndicationLibraryAlbum:(BOOL)a2 isSharedLibraryAlbum:(BOOL)a3;

@end
