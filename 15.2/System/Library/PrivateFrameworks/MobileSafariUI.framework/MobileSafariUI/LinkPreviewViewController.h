@class TabDocument, _SFLinkPreviewHeader, _SFBrowserView, _SFDigitalHealthViewController;

@interface LinkPreviewViewController : UIViewController <_SFDigitalHealthHostingViewController>

@property (readonly, weak, nonatomic) TabDocument *previewTabDocument;
@property (readonly, nonatomic) _SFLinkPreviewHeader *previewHeader;
@property (readonly, nonatomic) _SFBrowserView *browserView;
@property (retain, nonatomic) _SFDigitalHealthViewController *digitalHealthViewController;

- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void).cxx_destruct;
- (void)displayHostedDigitalHealthView;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithTabDocument:(id)a0;
- (void)updatePreviewLoadingUIWithURLString:(id)a0;
- (void)willCommitPreviewedWebView;

@end
