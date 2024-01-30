@class SKUIApplicationLicensePage, UIWebView, NSURL, SSVLoadURLOperation;

@interface SKUIApplicationLicenseViewController : SKUIViewController {
    SKUIApplicationLicensePage *_licensePage;
    SSVLoadURLOperation *_loadOperation;
    NSURL *_url;
    UIWebView *_webView;
}

- (void)reloadData;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithLicenseAgreementURL:(id)a0;
- (void)_displayPage:(id)a0 error:(id)a1;
- (id)initWithLicenseAgreementPage:(id)a0;

@end
