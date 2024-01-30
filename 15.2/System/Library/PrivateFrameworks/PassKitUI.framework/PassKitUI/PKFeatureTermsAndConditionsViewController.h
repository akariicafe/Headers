@class UINavigationController, NSString, RemoteUIController, QLItem, NSData, QLPreviewController;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKFeatureTermsAndConditionsViewController : PKPortraitNavigationController <QLPreviewItemDataProvider, QLPreviewControllerDelegate, QLPreviewControllerDataSource, RemoteUIControllerDelegate, PKPaymentSetupPresentationProtocol, PKViewControllerPreflightable> {
    BOOL _isIpad;
    RemoteUIController *_termsUIController;
    QLItem *_pdfItem;
    QLPreviewController *_previewController;
    NSData *_pdfData;
    NSData *_htmlData;
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

- (id)previewController:(id)a0 previewItemAtIndex:(long long)a1;
- (id)provideDataForItem:(id)a0;
- (long long)numberOfPreviewItemsInPreviewController:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)previewControllerWillDismiss:(id)a0;
- (void)remoteUIController:(id)a0 didReceiveObjectModel:(id)a1 actionSignal:(unsigned long long *)a2;
- (id)displayTitle;
- (void).cxx_destruct;
- (void)_loadPDF;
- (void)preflightWithCompletion:(id /* block */)a0;
- (void)loader:(id)a0 didFinishLoadWithError:(id)a1;
- (void)presentWithNavigationController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (id)initWithSetupDelegate:(id)a0 context:(long long)a1;
- (void)htmlTermsDataWithCompletion:(id /* block */)a0;
- (void)initalTermsDataWithCompletion:(id /* block */)a0;
- (void)pdfTermsDataWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)termsShown;
- (void)termsAccepted:(BOOL)a0 completion:(id /* block */)a1;
- (void)presentErrorAlert;
- (void)dismissViewControllerWithCompletion:(id /* block */)a0;
- (void)reportAnalyticsForTermsLink:(id)a0;
- (void)_loadHTML;
- (void)_pk_dismissViewControllerWithTransition:(int)a0 completion:(id /* block */)a1;
- (void)_loadHTMLViewController;
- (void)popViewControllerWithCompletion:(id /* block */)a0;
- (void)_showTermsSpinner:(BOOL)a0 objectModel:(id)a1;
- (void)_handleWalletTermsLink:(id)a0 withCompletion:(id /* block */)a1;
- (id)_loadPDFViewControllerWithFileName:(id)a0;

@end
