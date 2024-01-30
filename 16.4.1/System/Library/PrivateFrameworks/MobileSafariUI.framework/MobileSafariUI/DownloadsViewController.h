@class NSString, NSMutableArray, _SFDownloadManager;
@protocol DownloadOpenHandler;

@interface DownloadsViewController : SFPopoverSizingTableViewController <DownloadTableViewCellDelegate, UITableViewDragDelegate_Private> {
    _SFDownloadManager *_downloadManager;
    NSMutableArray *_downloads;
}

@property (weak, nonatomic) id<DownloadOpenHandler> downloadOpenHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tableViewCellForSizeEstimation;

- (id)tableView:(id)a0 dragPreviewParametersForRowAtIndexPath:(id)a1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)initWithStyle:(long long)a0;
- (void)viewDidLoad;
- (void)_dismiss;
- (id)tableView:(id)a0 itemsForBeginningDragSession:(id)a1 atIndexPath:(id)a2;
- (void)viewWillDisappear:(BOOL)a0;
- (void)_downloadsDidChange:(id)a0;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)cancelDownload:(id)a0;
- (long long)_tableView:(id)a0 dataOwnerForDragSession:(id)a1 atIndexPath:(id)a2;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 canFocusRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (id)tableView:(id)a0 itemsForAddingToDragSession:(id)a1 atIndexPath:(id)a2 point:(struct CGPoint { double x0; double x1; })a3;
- (id)tableView:(id)a0 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)a1;
- (long long)maximumNumberOfRows;
- (long long)minimumNumberOfRows;
- (BOOL)safari_prefersHalfHeightSheetPresentationWithLoweredBar;
- (void)resumeDownload:(id)a0;
- (void)revealDownload:(id)a0;
- (void)_clearAllDownloads;
- (void)_updateDoneButton;
- (id)quickLookTransitionViewForDownload:(id)a0;

@end
