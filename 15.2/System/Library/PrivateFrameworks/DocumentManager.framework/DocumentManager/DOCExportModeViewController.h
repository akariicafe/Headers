@class DOCTargetSelectionBrowserViewController, NSURL;

@interface DOCExportModeViewController : UIDocumentBrowserViewController <DOCTargetSelectionBrowserViewControllerDelegate>

@property (retain, nonatomic) DOCTargetSelectionBrowserViewController *moveVC;
@property (copy, nonatomic) NSURL *directoryURLToReveal;

- (void)viewWillAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)targetSelectionControllerWasCancelled:(id)a0;
- (void)targetSelectionController:(id)a0 didExportToURLs:(id)a1;

@end
