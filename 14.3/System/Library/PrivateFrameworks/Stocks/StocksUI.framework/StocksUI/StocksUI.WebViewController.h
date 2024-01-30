@interface StocksUI.WebViewController : SFSafariViewController {
    void /* unknown type, empty encoding */ styler;
    void /* unknown type, empty encoding */ webViewCoordinator;
    void /* unknown type, empty encoding */ navigator;
    void /* unknown type, empty encoding */ session;
}

- (void).cxx_destruct;
- (id)initWithURL:(id)a0 entersReaderIfAvailable:(BOOL)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (id)initWithURL:(id)a0 configuration:(id)a1;

@end
