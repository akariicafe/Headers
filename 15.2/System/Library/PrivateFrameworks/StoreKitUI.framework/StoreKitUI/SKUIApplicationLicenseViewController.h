@class SKUIApplicationLicensePage, UIWebView, NSURL, SSVLoadURLOperation;

@interface SKUIApplicationLicenseViewController : SKUIViewController {
    SKUIApplicationLicensePage *_licensePage;
    SSVLoadURLOperation *_loadOperation;
    NSURL *_url;
    UIWebView *_webView;
}

- (void)reloadData;
- (void)viewWillAppear:(BOOL)a0;
- (void)loadView;
- (void).cxx_destruct;
- (id)initWithLicenseAgreementURL:(id)a0;
- (void)_displayPage:(id)a0 error:(id)a1;
- (id)initWithLicenseAgreementPage:(id)a0;

@end
