@interface CKQLPreviewController : QLPreviewController

@property (nonatomic) BOOL controllerWasDismissed;
@property (nonatomic) BOOL suppressRefetchingCurrentHighQualityImage;

- (long long)preferredStatusBarStyle;
- (id)init;
- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void)loadView;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (id)currentPreviewItem;
- (void)viewDidAppear:(BOOL)a0;
- (id)previewActions;

@end
