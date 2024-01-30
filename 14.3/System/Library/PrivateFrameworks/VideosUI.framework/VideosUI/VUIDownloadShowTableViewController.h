@class UIBarButtonItem, VUIDownloadShowDataSource, NSArray, NSString, VUIDownloadShowTableHeaderView, VUIMediaEntitiesDataSource, NSMutableArray;

@interface VUIDownloadShowTableViewController : UITableViewController <VUILibraryDataSourceDelegate, VUIDownloadEntityTableViewCellDelegate>

@property (retain, nonatomic) VUIDownloadShowDataSource *downloadDataSource;
@property (retain, nonatomic) VUIMediaEntitiesDataSource *seasonsDataSource;
@property (retain, nonatomic) VUIDownloadShowTableHeaderView *sizingHeader;
@property (retain, nonatomic) NSMutableArray *groupings;
@property (retain, nonatomic) UIBarButtonItem *rightBarButtonItem;
@property (retain, nonatomic) UIBarButtonItem *leftBarButtonItem;
@property (retain, nonatomic) UIBarButtonItem *backBarButtonItem;
@property (retain, nonatomic) NSArray *seasons;
@property (retain, nonatomic) NSMutableArray *assetControllersToRemove;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (void)loadView;
- (void)_cancelPressed;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willBeginEditingRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didEndEditingRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didDeselectRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (id)tableView:(id)a0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)_editToggled;
- (void)_exitEditingMode;
- (void)_popIfNeeded;
- (id)_moreEpisodesURLForSection:(long long)a0;
- (void)_didPressGetMoreEpisodes:(id)a0;
- (id)_configureRenewAlertControllerForIndexPath:(id)a0 forPreferredStyle:(long long)a1 withCompletion:(id /* block */)a2;
- (id)_configureDeleteAlertControllerForIndexPath:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)_mediaItemShouldShowRenewOption:(id)a0;
- (BOOL)_episodeHasAllCanonicalIDs:(id)a0;
- (void)dataSourceDidFinishFetching:(id)a0;
- (void)downloadCellDidRequestCancelDownload:(id)a0;
- (id)initWithDataSource:(id)a0 seasonsDataSource:(id)a1;

@end
