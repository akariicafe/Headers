@class UIScrollView, NSString, NSURL, UIButton, HMHTMLDocument, HUWebViewController, NSFileManager, WKWebView;

@interface HUSoftwareUpdateLicenseViewController : UIViewController <UIScrollViewDelegate, WKUIDelegate, WKNavigationDelegate, MFMailComposeViewControllerDelegate, HUPreloadableViewController>

@property (readonly, nonatomic) UIScrollView *scrollView;
@property (readonly, nonatomic) UIButton *retainCopyOfTermsButton;
@property (readonly, nonatomic) WKWebView *webView;
@property (retain, nonatomic) NSString *license;
@property (retain, nonatomic) NSFileManager *fileManager;
@property (readonly, nonatomic) HUWebViewController *webViewController;
@property (readonly, copy, nonatomic) NSURL *URL;
@property (readonly, copy, nonatomic) HMHTMLDocument *document;
@property (copy, nonatomic) id /* block */ agreeHandler;
@property (copy, nonatomic) id /* block */ disagreeHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)viewForZoomingInScrollView:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithURL:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void).cxx_destruct;
- (void)mailComposeController:(id)a0 didFinishWithResult:(long long)a1 error:(id)a2;
- (id)initWithDocument:(id)a0;
- (id)hu_preloadContent;
- (id)_initWithWebViewController:(id)a0;
- (void)_emailTermsAndConditions:(id)a0;
- (id)loadLicense;
- (id)_evaluateHeight:(id)a0;
- (void)_disagreeToTerms:(id)a0;
- (void)_agreeToTerms:(id)a0;

@end
