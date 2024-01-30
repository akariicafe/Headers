@class UITableViewDiffableDataSource, VUIDownloadEntityTableViewCell, NSString, VUIViewControllerContentPresenter, NSDictionary, UITableView, NSMutableArray, UIAlertController, VUIDownloadDataSource, UIBarButtonItem;

@interface VUIDownloadTableViewController : UIViewController <UITableViewDelegate, VUIDownloadDataSourceDelegate, VUIDownloadEntityTableViewCellDelegate>

@property (retain, nonatomic) UITableView *downloadEntitiesTableView;
@property (retain, nonatomic) VUIDownloadDataSource *downloadDataSource;
@property (retain, nonatomic) UITableViewDiffableDataSource *diffableDataSource;
@property (retain, nonatomic) NSMutableArray *downloadEntities;
@property (retain, nonatomic) VUIDownloadEntityTableViewCell *sizingCell;
@property (retain, nonatomic) UIBarButtonItem *rightBarButtonItem;
@property (retain, nonatomic) UIBarButtonItem *leftBarButtonItem;
@property (retain, nonatomic) UIBarButtonItem *backBarButtonItem;
@property (retain, nonatomic) UIAlertController *alertController;
@property (retain, nonatomic) NSDictionary *identifierToDownloadEntityDictionary;
@property (retain, nonatomic) NSMutableArray *assetControllersToRemove;
@property (retain, nonatomic) VUIViewControllerContentPresenter *contentPresenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)tableView:(id)a0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)a1;
- (id)initWithDataSource:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)tableView:(id)a0 didDeselectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didEndEditingRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willBeginEditingRowAtIndexPath:(id)a1;
- (void)_cancelPressed;
- (void)downloadManager:(id)a0 downloadsDidChange:(id)a1;
- (id)_identifiersForDownloadEntities;
- (void)_clearTableViewSelections:(BOOL)a0;
- (id)_configureAlertControllerForIndexPath:(id)a0 withCompletion:(id /* block */)a1;
- (id)_configureRenewAlertControllerForIndexPath:(id)a0 forPreferredStyle:(long long)a1 withCompletion:(id /* block */)a2;
- (id)_createDiffableDataSource;
- (id)_createDiffableDataSourceSnapshot;
- (id)_createIdentifierToDownloadEntityDictionary;
- (void)_deleteDownloadEntities:(id)a0;
- (void)_deleteMediaEntitiesInDownloadEntities:(id)a0;
- (BOOL)_downloadEntityShouldShowRenewOption:(id)a0;
- (void)_editToggled;
- (void)_exitEditingMode;
- (void)_updateNavigationBarPadding;
- (void)downloadCellDidRequestCancelDownload:(id)a0;
- (void)downloadManager:(id)a0 downloadedFetchDidFinishWithEntities:(id)a1;
- (void)fullscreenPlaybackUIDidChangeNotification:(id)a0;

@end
