@class NSString, WKWebView;

@interface SUSSoftwareUpdateReleaseNotesDetail : PSListController <WKNavigationDelegate>

@property (retain, nonatomic) WKWebView *webView;
@property (retain, nonatomic) NSString *releaseNotes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)specifiers;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 decisionHandler:(id /* block */)a2;
- (void)viewDidLoad;

@end
