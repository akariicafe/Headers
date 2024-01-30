@class DOCTargetSelectionBrowserViewController, NSURL;

@interface DOCExportModeViewController : UIDocumentBrowserViewController <DOCTargetSelectionBrowserViewControllerDelegate>

@property (retain, nonatomic) DOCTargetSelectionBrowserViewController *moveVC;
@property (copy, nonatomic) NSURL *directoryURLToReveal;

- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)targetSelectionController:(id)a0 didExportToURLs:(id)a1;
- (void)targetSelectionControllerWasCancelled:(id)a0;

@end
