@class NSString, UIWebView;

@interface PSLegalMessagePane : PSEditingPane <UIWebViewDelegate> {
    UIWebView *_webView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)webView:(id)a0 shouldStartLoadWithRequest:(id)a1 navigationType:(long long)a2;
- (void)webViewDidFinishLoad:(id)a0;
- (id)markupString;
- (BOOL)handlesDoneButton;
- (id)htmlFileLocation;
- (void)layoutInsetContent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)scrollViewToBeInsetted;
- (BOOL)shouldInsetContent;
- (void)viewDidBecomeVisible;

@end
