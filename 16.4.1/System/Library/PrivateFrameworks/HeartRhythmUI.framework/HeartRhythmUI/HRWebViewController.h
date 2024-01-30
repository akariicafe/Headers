@class NSURL, WKWebView, NSString;

@interface HRWebViewController : UIViewController <WKNavigationDelegate>

@property (retain, nonatomic) NSURL *fileURL;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } bodyInsets;
@property (retain, nonatomic) WKWebView *webView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)webView:(id)a0 didFinishNavigation:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_adjustWebView:(id)a0 bodyInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (id)initWithURL:(id)a0 bodyInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;

@end
