@protocol LinkPreviewProvider, PreviewTableViewControllerDelegate;

@interface PreviewTableViewController : UITableViewController

@property (weak, nonatomic) id<PreviewTableViewControllerDelegate> previewDelegate;
@property (weak, nonatomic) id<LinkPreviewProvider> linkPreviewProvider;

- (void)viewWillDisappear:(BOOL)a0;
- (id)tableView:(id)a0 contextMenuConfigurationForRowAtIndexPath:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (void).cxx_destruct;
- (id)tableView:(id)a0 previewForDismissingContextMenuWithConfiguration:(id)a1;
- (id)tableView:(id)a0 previewForHighlightingContextMenuWithConfiguration:(id)a1;
- (void)tableView:(id)a0 willPerformPreviewActionForMenuWithConfiguration:(id)a1 animator:(id)a2;

@end
