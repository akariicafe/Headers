@class UIStackView, NSString, UIImageView, WKWebView, AKIDPHandler, UILabel;

@interface AKIDPProvidedSignInViewController : UIViewController <AKIDPHandlerDelegate, AKIDPPresentationController>

@property (retain, nonatomic) AKIDPHandler *idpHandler;
@property (retain, nonatomic) UIImageView *secureIconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIStackView *titleStackView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) WKWebView *webView;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)loadView;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)setupTitleView;
- (void)_setNavigationTitle:(id)a0;
- (void)_cancelBarButtonPressed:(id)a0;
- (void)IDPHandler:(id)a0 didStartLoadingPageInWebView:(id)a1;
- (void)IDPHandler:(id)a0 didFinishLoadingPageInWebView:(id)a1;
- (id)initWithIDPHandler:(id)a0;

@end
