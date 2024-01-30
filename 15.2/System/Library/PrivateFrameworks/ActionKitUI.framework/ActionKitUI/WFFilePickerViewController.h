@class WFRemoteFileStatusView, NSArray, NSString, NSMutableOrderedSet, NSError, WFRemoteFileListView, UISearchController;
@protocol WFFileStorageService;

@interface WFFilePickerViewController : UIViewController <UISearchControllerDelegate, UISearchResultsUpdating, WFRemoteFileListViewDelegate, WFRemoteFileStatusViewDelegate, _UIContextMenuInteractionDelegate>

@property (readonly, nonatomic) long long mode;
@property (readonly, nonatomic) BOOL allowsMultipleSelection;
@property (readonly, nonatomic) id /* block */ pickCompletionHandler;
@property (readonly, nonatomic) id /* block */ saveCompletionHandler;
@property (copy, nonatomic) NSArray *files;
@property (copy, nonatomic) NSError *error;
@property (nonatomic) BOOL loading;
@property (copy, nonatomic) NSMutableOrderedSet *selectedFiles;
@property (readonly, nonatomic) UISearchController *searchController;
@property (readonly, weak, nonatomic) WFRemoteFileListView *fileListView;
@property (readonly, weak, nonatomic) WFRemoteFileStatusView *statusView;
@property (readonly, nonatomic) id<WFFileStorageService> service;
@property (readonly, nonatomic) NSString *path;
@property (nonatomic) BOOL hideSearchBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didDismissSearchController:(id)a0;
- (void)finish;
- (id)contextMenuInteraction:(id)a0 actionsForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1 withSuggestedActions:(id)a2;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (id)contextMenuInteraction:(id)a0 previewForHighlightingAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)updateSearchResultsForSearchController:(id)a0;
- (void)loadView;
- (void)didPresentSearchController:(id)a0;
- (void).cxx_destruct;
- (void)updateToolbar;
- (id)previewingContext:(id)a0 viewControllerForLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)cancel;
- (void)previewingContext:(id)a0 commitViewController:(id)a1;
- (void)statusViewDidPressRecoveryButton:(id)a0;
- (void)fileListView:(id)a0 didSelectFile:(id)a1;
- (BOOL)fileListView:(id)a0 shouldSelectFile:(id)a1;
- (BOOL)fileListView:(id)a0 shouldDisplayCheckmarkForFile:(id)a1;
- (id)initForPickingFilesAtPath:(id)a0 service:(id)a1 allowsMultipleSelection:(BOOL)a2 completionHandler:(id /* block */)a3;
- (id)initForSavingFilesAtPath:(id)a0 service:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithPath:(id)a0 selectedFiles:(id)a1 service:(id)a2 mode:(long long)a3 allowsMultipleSelection:(BOOL)a4 pickCompletionHandler:(id /* block */)a5 saveCompletionHandler:(id /* block */)a6;
- (void)loadFiles;
- (void)updateStatusViewAnimated:(BOOL)a0;
- (BOOL)caseInsensitiveArray:(id)a0 isEqualToArray:(id)a1;
- (void)navigateToSubdirectoryAtPath:(id)a0;

@end
