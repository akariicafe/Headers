@class NSURL, RPVideoEditorHostViewController;
@protocol RPPreviewViewControllerDelegate;

@interface RPPreviewViewController : UIViewController <RPVideoEditorViewControllerDelegate>

@property (nonatomic) BOOL wasStatusBarHidden;
@property (retain, nonatomic) NSURL *movieURL;
@property (retain, nonatomic) RPVideoEditorHostViewController *hostViewController;
@property (weak, nonatomic) id<RPPreviewViewControllerDelegate> previewControllerDelegate;

+ (void)viewControllerForExtension:(id)a0 inputItems:(id)a1 completionHandler:(id /* block */)a2;
+ (void)loadPreviewViewControllerWithMovieURL:(id)a0 attachmentURL:(id)a1 overrideShareMessage:(id)a2 overrideTintColor:(id)a3 completion:(id /* block */)a4;
+ (void)loadPreviewViewControllerWithMovieURL:(id)a0 completion:(id /* block */)a1;

- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)extensionDidFinishWithActivityTypes:(id)a0;
- (void)videoEditor:(id)a0 didFinishWithActivityTypes:(id)a1;

@end
