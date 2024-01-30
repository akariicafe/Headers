@class UINavigationController, NSString, RemoteUIController, QLItem, NSData, QLPreviewController;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKFeatureTermsAndConditionsViewController : PKPortraitNavigationController <QLPreviewItemDataProvider, QLPreviewControllerDelegate, QLPreviewControllerDataSource, RemoteUIControllerDelegate, PKPaymentSetupPresentationProtocol, PKViewControllerPreflightable> {
    BOOL _isIpad;
    RemoteUIController *_termsUIController;
    QLItem *_pdfItem;
    QLPreviewController *_previewController;
    NSData *_pdfData;
    NSData *_htmlData;
    NSString *_termsFileName;
    BOOL _performedInitialLoad;
}

@property (weak, nonatomic) id<PKPaymentSetupViewControllerDelegate> setupDelegate;
@property (nonatomic) long long context;
@property (nonatomic) BOOL useModalPresentation;
@property (readonly, nonatomic) UINavigationController *containerNavigationController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)provideDataForItem:(id)a0;
- (long long)numberOfPreviewItemsInPreviewController:(id)a0;
- (id)previewController:(id)a0 previewItemAtIndex:(long long)a1;
- (void)viewDidLoad;
- (id)displayTitle;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)previewControllerWillDismiss:(id)a0;
- (void)preflightWithCompletion:(id /* block */)a0;
- (void)_updateTermsData:(id)a0 termsFileName:(id)a1;
- (void)_handleWalletTermsLink:(id)a0 withCompletion:(id /* block */)a1;
- (void)_loadHTML;
- (void)_loadHTMLViewController;
- (void)_loadPDF;
- (id)_loadPDFViewControllerWithFileName:(id)a0;
- (void)_pk_dismissViewControllerWithTransition:(int)a0 completion:(id /* block */)a1;
- (void)_renderTermsView;
- (void)_showTermsSpinner:(BOOL)a0 objectModel:(id)a1;
- (void)dismissViewControllerWithCompletion:(id /* block */)a0;
- (void)htmlTermsDataWithCompletion:(id /* block */)a0;
- (id)initWithSetupDelegate:(id)a0 context:(long long)a1;
- (void)initalTermsDataWithCompletion:(id /* block */)a0;
- (void)loader:(id)a0 didFinishLoadWithError:(id)a1;
- (void)pdfTermsDataWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)popViewControllerWithCompletion:(id /* block */)a0;
- (void)presentErrorAlert;
- (void)presentWithNavigationController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)remoteUIController:(id)a0 didReceiveObjectModel:(id)a1 actionSignal:(unsigned long long *)a2;
- (void)reportAnalyticsForTermsLink:(id)a0;
- (void)termsAccepted:(BOOL)a0 completion:(id /* block */)a1;
- (void)termsShown;

@end
