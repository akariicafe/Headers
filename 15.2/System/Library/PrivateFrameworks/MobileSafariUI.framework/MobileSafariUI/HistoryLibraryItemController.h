@class NSString, HistoryTableViewController;

@interface HistoryLibraryItemController : LibraryItemController <HistoryTableViewControllerDelegate> {
    HistoryTableViewController *_viewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)viewController;
- (void).cxx_destruct;
- (BOOL)selectionFollowsFocus;
- (BOOL)panelViewControllerShouldTranslucentAppearance:(id)a0;
- (void)updateListContentConfiguration:(id)a0;

@end
