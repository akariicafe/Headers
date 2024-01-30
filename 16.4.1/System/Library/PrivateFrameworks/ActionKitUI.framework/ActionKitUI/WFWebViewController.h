@class WKWebView;
@protocol WFWebViewControllerDelegate;

@interface WFWebViewController : UIViewController

@property (retain, nonatomic) WKWebView *webView;
@property (weak, nonatomic) id<WFWebViewControllerDelegate> delegate;

- (void)didMoveToParentViewController:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithWebView:(id)a0;
- (void)done;
- (void)cancel;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)loadView;
- (void)updateNavigationItems;

@end
