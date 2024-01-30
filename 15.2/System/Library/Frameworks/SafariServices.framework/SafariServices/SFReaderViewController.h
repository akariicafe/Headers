@class _SFBrowserContentViewController, WKWebView, NSString;
@protocol SFReaderViewControllerDelegate;

@interface SFReaderViewController : UIViewController <WKUIDelegate> {
    WKWebView *_originalWebView;
}

@property (readonly, nonatomic) WKWebView *readerWebView;
@property (weak, nonatomic) _SFBrowserContentViewController *containerViewController;
@property (weak, nonatomic) id<SFReaderViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_webView:(id)a0 contextMenuDidEndForElement:(id)a1;
- (void)_webView:(id)a0 contextMenuConfigurationForElement:(id)a1 completionHandler:(id /* block */)a2;
- (void)_webView:(id)a0 contextMenuForElement:(id)a1 willCommitWithAnimator:(id)a2;
- (void)loadView;
- (void).cxx_destruct;
- (void)_webView:(id)a0 contextMenuWillPresentForElement:(id)a1;
- (id)initWithOriginalWebView:(id)a0;

@end
